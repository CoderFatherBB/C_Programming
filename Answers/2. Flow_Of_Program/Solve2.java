// Take two numbers and print the sum of both.
import java.util.Scanner;

public class Solve2 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)){
            System.out.print("Enter Two Numbers : ");
            float num1 = input.nextFloat();
            float num2 = input.nextFloat();

            System.out.print("Addition of two numbers : " + (num1 + num2));
        }
    }
}
