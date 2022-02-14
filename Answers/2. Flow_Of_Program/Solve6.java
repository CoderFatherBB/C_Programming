// Keep taking numbers as inputs till the user enters 0, after that print sum of all.
import java.util.Scanner;

public class Solve6 {
    public static void main(String[] args) {
        try (Scanner input =  new Scanner(System.in)) {
            System.out.print("Enter a number : ");
            int num = input.nextInt();
            int sum = num;

            while (num != 0) {
                System.out.print("Enter next number : ");
                num = input.nextInt();
                sum += num;
            }
            System.out.print("\nTotal sum : " + sum);
        }
    }
}
