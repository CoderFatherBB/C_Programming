// Take 2 numbers as input and print the largest number
import java.util.Scanner;

public class Solve6 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)){
            System.out.print("Enter teo numbers : ");
            float num1 = input.nextFloat();
            float num2 = input.nextFloat();
            
            if(num1 > num2 ){
                System.out.print(num1 + " is Largest");
            }
            else {
                System.out.print( num2 + " is Largest"  );
            }
        }
    }
}

