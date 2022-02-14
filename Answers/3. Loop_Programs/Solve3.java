// Calculate Average Of N Numbers
import java.util.Scanner;

public class Solve3 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Enter amount of no. : ");
            int amount = input.nextInt();

            double total = 0; 
            for (int i = 0; i < amount; i++) {
                System.out.print("Enter no. " + (i + 1) + " : ");
                int number = input.nextInt();
                total += number;                
            }
            System.out.print("Total : " + total);
            double avg = (total / amount);
            System.out.print("\nAverage of the numbers are : " + avg);
        }
    }
}
