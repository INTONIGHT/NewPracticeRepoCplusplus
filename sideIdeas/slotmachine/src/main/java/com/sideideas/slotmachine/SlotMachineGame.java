package com.sideideas.slotmachine;
import java.io.IOException;
import java.util.ArrayList;
import com.sideideas.slotmachine.User;

import java.util.Scanner;

public class SlotMachineGame {
    public void playGame(){
        System.out.println("please provide username: ");
        Scanner myObj = new Scanner(System.in);
        String username = myObj.nextLine();
        System.out.println("please provide password: ");
        String password = myObj.nextLine();
        try{
            User u = new User();
            u.loginUser(username, password);
        }catch(InvalidUserException e){
            System.out.println("please try logging in again");
            this.playGame();
        } catch(IOException ex){
            ex.printStackTrace();
            this.playGame();
        }
        
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
}
