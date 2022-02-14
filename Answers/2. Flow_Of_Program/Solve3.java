// Input marks of 5 subjects and print the marks, total, percentage.
import java.util.Scanner;

public class Solve3 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            int[] marks = new int [5];
            int sum = 0;
            for (int i = 0; i < 5; i++) {
                System.out.print("Enter marks of subject-" + (i + 1) + " : ");
                marks[i] = input.nextInt();
                sum += marks[i];
            }
            System.out.print("\n");
            for (int i = 0 ; i < 5; i++) {
                System.out.println("Marks you entered for subject-" + (i + 1) + " : " + marks[i]);
            }
            System.out.println("\nTotal marks : " + sum);
            float percentage = sum / 5;
            System.out.println("Percentage : " + percentage);
        }
    }
}