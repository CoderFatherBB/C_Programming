// Take two numbers from user and ask what operation (+, -, *, /) he/she wants to carry out.
import java.util.Scanner;

public class Solve5 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)){
            System.out.print("Enter two numbers : ");
            float num1 = input.nextFloat();
            float num2 = input.nextFloat();

            System.out.print("Enter what to do with these numbers : \n");
            System.out.print("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n  : ");
            int var = input.nextInt();

            switch (var) {
                case 1:
                    System.out.print("Addition : " + (num1 + num2));
                    break;
                case 2:
                    System.out.print("Sustraction : " + (num1 - num2));
                    break;
                case 3:
                    System.out.print("Mulptipication : " + (num1 * num2));
                    break;
                case 4:
                    System.out.print("Division : " + (num1 / num2));
                    break;
                default:
                    System.out.print("Wrong entry");
                    break;
            }

        }
    }
}
