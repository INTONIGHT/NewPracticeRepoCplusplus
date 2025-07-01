package com.sideideas.slotmachine;

import com.fasterxml.jackson.databind.JsonNode;
import com.fasterxml.jackson.databind.ObjectMapper;
import com.fasterxml.jackson.databind.node.ObjectNode;
import java.io.File;
import java.io.IOException;


public class User {
    private double credits;
    private int userId;
    private String firstName,lastName,username,password;
    
   public double getCredits(){
    return this.credits;
   }
   public void setCredits(double amt){
    this.credits = amt;
   }
   public int getUserId(){
    return this.userId;
   }
   public void setUserId(int userId){
    this.userId = userId;
   }
   public String getFirstName(){
    return this.firstName;
   }
   public void setFirstName(String firstName){
    this.firstName = firstName;
   }
   public String getLastName(){
    return this.lastName;
   }
   public void setLastName(String lastName){
    this.lastName = lastName;
   }
   public String getPassword(){
    return this.password;
   }
   public void setPassword(String password){
    this.password = password;
   }
   public String getUsername(){
    return this.username;
   }
   public void setUsername(String username){
    this.username = username;
   }
   public User(){

   }
   public User(double credits, int userId,String firstName, String lastName,String username, String password){
    this.credits = credits;
    this.userId = userId;
    this.firstName = firstName;
    this.lastName = lastName;
    this.username = username;
    this.password = password;
   }
   public String userToString() throws IOException{
    return "The userId is: " + this.userId + " and the user has a firstname of: " + this.firstName
    + " lastname: " + this.lastName + " with a username of: " + this.username + " and a balance of: "+
    this.credits + " credits";
   }
   
   public User getUser(int userId){
    User v = new User();
    ObjectMapper objectMapper = new ObjectMapper();
    try{
        JsonNode jsonNode = objectMapper.readTree(new File("user.json"));
        double credits = jsonNode.get("credits").asDouble();
    String userName = jsonNode.get("username").asText();
    String firstName = jsonNode.get("firstName").asText();
    String lastName = jsonNode.get("lastName").asText();
    String password = jsonNode.get("password").asText();
     User u = new User(credits,userId,firstName,lastName,userName,password);
    return u;
    } catch(IOException e){
        e.printStackTrace();
        return v;
    }
    
    
   }
    
    public void depositCredits(double amount,int userId) throws InsufficientFundsException, IOException{
        if (amount < 0){
            throw new InsufficientFundsException("Amount must be grewater than 0");
        }
        User u = this.getUser(userId);
        double currentCredits = this.getCredits();
        double depositAmt = currentCredits + amount;
        u.setCredits(depositAmt);
        ObjectMapper objectMapper = new ObjectMapper();
        ObjectNode jsonNode = objectMapper.createObjectNode();
        jsonNode.put("credits", depositAmt);
        objectMapper.writeValue(new File("user.json"), jsonNode);
    }
    public void withdrawCredits(double amount, int userId) throws InsufficientFundsException,IOException{
        User u = this.getUser(userId);
        double currentCredits = this.getCredits();
        if(amount >currentCredits){
            throw new InsufficientFundsException("User does not have enough funds you must withdraw less than or equal to: " + currentCredits); 
        }
        double withdrawAmt = currentCredits - amount;
        
        u.setCredits(withdrawAmt);
        ObjectMapper objectMapper = new ObjectMapper();
        ObjectNode jsonNode = objectMapper.createObjectNode();
        jsonNode.put("credits", withdrawAmt);
        objectMapper.writeValue(new File("user.json"), jsonNode);
    }
    public void loginUser(String username, String password) throws InvalidUserException,IOException{
        ObjectMapper objectMapper = new ObjectMapper();
        JsonNode jsonNode = objectMapper.readTree(new File("user.json"));
        String storedUserName = jsonNode.get("username").asText();
        String storedPassword = jsonNode.get("password").asText();
        if(username != storedUserName){
            throw new InvalidUserException("the username does not match ");
        }
        if(storedPassword != password){
            throw new InvalidUserException("The password for the user is incorrect");
        }
        int id =  jsonNode.get("userId").asInt();
        User u = this.getUser(id);
        
    }
}
