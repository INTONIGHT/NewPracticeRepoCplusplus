package com.sideideas.slotmachine;
import java.io.IOException;
import java.util.ArrayList;
import com.sideideas.slotmachine.User;

import com.sideideas.slotmachine.InsufficientFundsException;

import java.util.Scanner;

public class SlotMachineGame {
    int userId = 0;
    public void startGame() throws InsufficientFundsException{
        System.out.println("please provide username: ");
        Scanner myObj = new Scanner(System.in);
        String username = myObj.nextLine();
        System.out.println("please provide password: ");
        String password = myObj.nextLine();
        try{
            User u = new User();
            u.loginUser(username, password);
            this.userId = u.getUserId();
            this.menuOptions();
            myObj.close();
        }catch(InvalidUserException e){
            System.out.println("please try logging in again");
            this.startGame();
        } catch(IOException ex){
            ex.printStackTrace();
            this.startGame();
        } 
    }
    public void menuOptions() throws InsufficientFundsException,IOException{
            User u = new User();
            u.getUser(this.userId);
            System.out.println("Type 1 to play the game, 2 to deposit, 3 to withdraw, 4 to logout");
             Scanner myObj = new Scanner(System.in);
            int choice = myObj.nextInt();
            switch(choice){
                //this will handle running the machine and then validating results
                case 1:
               this.runGame(u);
                //this will handle depositing credits then letting them go to the main menu
                case 2:
                this.depositCredits(u);
                //this will handle withdrawls
                case 3:
                this.withdrawCredits(u);
                //this will handle logout
                case 4:
                myObj.close();
                System.exit(0);

            }
    }
    //to handle the slot machine options seperately
    public void runGame(User u) throws InsufficientFundsException,IOException{
                double credits = u.getCredits();
                System.out.println("Youre about to bet 3 credits on one game you currently have: " + credits + " credits");
                System.out.println("\n Would you like to play? press 1 to play 2 to return to the main menu");
                Scanner myObj = new Scanner(System.in);
                int subChoice = myObj.nextInt();
                    switch(subChoice){
                        //actually run slot machine
                        case 1: 
                        try{
                            u.withdrawCredits(3, u.getUserId());
                            ArrayList<String> slotMachineResults = this.runSlotMachine();
                            double winnings = this.validatePrize(slotMachineResults);
                            if(winnings > 0){
                                System.out.println("Congratulations you won: " + winnings);
                                u.depositCredits(winnings, this.userId);
                            }else{
                                System.out.println("Sorry you lost better luck next time");
                            }
                           this.runGame(u);
                        } catch(InsufficientFundsException ex){
                            System.out.println("sorry you must deposit more money, returning you to the main menu");
                            this.menuOptions();
                        }
                        
                        case 2:
                        this.menuOptions();
                    }
                    myObj.close();
    }
    public ArrayList<String> runSlotMachine(){
        ArrayList<String> results = new ArrayList<>();
        //range for the random rolls
        int max = 3;
        int min = 1;
        int range = max - min + 1;
        //3 seperate times
        int firstRoll = (int)(Math.random() * range) + min;
        int secondRoll = (int)(Math.random() * range) + min;
        int thirdRoll = (int)(Math.random() * range) + min;
        //mostly doing this to display things as well as for the UI could always return nums
        String firstFruit = this.getSlotMachineName(firstRoll);
        String secondFruit = this.getSlotMachineName(secondRoll);
        String thirdFruit = this.getSlotMachineName(thirdRoll);
        results.add(firstFruit);
        results.add(secondFruit);
        results.add(thirdFruit);
        return results;
    }
    //a method to take the randomly generated number then convert it toa  name ie 1 to apple 2 to banana
    public String getSlotMachineName(int number){
        switch(number){
            case 1:
                return "apple";
               
            case  2: 
                return "banana";
               
            case 3:
                return "clementine";
               
            default: 
                return "";
        }
    }
    //if i ever need just the raw numbers
    public int getSlotMachineNumbers(String value){
        switch(value){
             case "apple":
                return 1;
               
            case  "banana": 
                return 2;
               
            case "clementine":
                return 3;
               
            default: 
                return 0;
        }
    }
    public double validatePrize(ArrayList<String> results){
       
        String value1 = results.get(0);
        String value2 = results.get(1);
        String value3 = results.get(2);
        
        int prize1 = this.getSlotMachineNumbers(value1);
        int prize2 = this.getSlotMachineNumbers(value2);
        int prize3 = this.getSlotMachineNumbers(value3);
        //ugly way of checking and not very future proof but im lazy lol
        if(prize1 == prize2){
            if(prize2 == prize3){
                switch(prize1){
                    case 1:
                         return 10;

                    case 2:
                        return 15;

                    case 3:
                        return 20;
                }
            }
        }
        
        //if they lost
        return 0;
    }
    public void depositCredits(User u) throws InsufficientFundsException,IOException{
        int userId = u.getUserId();
        System.out.println("type the amount to deposit, the amount must be greater than 0");
        Scanner myObj = new Scanner(System.in);
        double amt = myObj.nextInt();
        if(amt <= 0){
            System.out.println("please input a valid amount");
            this.depositCredits(u);
        }
        u.depositCredits(amt, userId);
        System.out.println("Thank you for your deposit returning you to the main menu");
        this.menuOptions();
        myObj.close();
    }
    public void withdrawCredits(User u) throws InsufficientFundsException,IOException{
        int userId = u.getUserId();
        double credits = u.getCredits();
        System.out.println("You currently have: " + credits + " credits");
        System.out.println("\n type the amount to withdraw, the amount must be greater than 0 and less than your current balance");
        Scanner myObj = new Scanner(System.in);
        double amt = myObj.nextInt();
        if(amt <= 0){
            System.out.println("please input a valid amount");
            this.withdrawCredits(u);
        }
        if(amt > credits){
             myObj.close();
            throw new InsufficientFundsException("You dont have that much");
            
           
        }
        u.withdrawCredits(amt, userId);
        System.out.println("Thank you for your withdrawl returning you to the main menu");
        this.menuOptions();
        myObj.close();
    }
}
