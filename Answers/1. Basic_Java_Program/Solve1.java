// Write a program to print whether a number is even or odd, also take input.
import java.util.Scanner;

class Solve1{
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Enter a number : ");
            int a = input.nextInt();
            if (a % 2 == 0)
                System.out.print("The number is even.");
            else
                System.out.print("The number is odd.");
        }
    }
}