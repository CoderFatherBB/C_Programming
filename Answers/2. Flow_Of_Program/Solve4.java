// Take a number as input and print the multiplication table for it.
import java.util.Scanner;

public class Solve4 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Enter a number : ");
            int num = input.nextInt();

            for (int i = 1; i <= 10; i++) {
                System.out.println(i + " x " + num + " = " + (i * num));
            }
        }
    }
}
