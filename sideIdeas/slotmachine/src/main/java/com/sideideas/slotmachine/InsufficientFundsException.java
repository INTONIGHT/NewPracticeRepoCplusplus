package main.java.com.sideideas.slotmachine;
public class InsufficientFundsException extends Exception{
    public InsufficientFundsException(String message){
        super(message);
    }
}
