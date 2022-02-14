// Take in two numbers and an operator (+, -, *, /) and calculate the value. 
import java.util.Scanner;

public class Solve4 {
    public static void main(String args[]) {
        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Enter two numbers : ");
            float num1 = input.nextFloat();
            float num2 = input.nextFloat();
            
            System.out.println("Addition : " + (num1 + num2));
            System.out.println("Sustraction : " + (num1 - num2));
            System.out.println("Mulptipication : " + (num1 * num2));
            System.out.println("Division : " + (num1 / num2));   
        }
    }
} 