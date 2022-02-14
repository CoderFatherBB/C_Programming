// To find Armstrong Number between two given number.
import java.util.Scanner;

public class Solve10 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Enter two numbers : ");
            int num1 = input.nextInt();
            int num2 = input.nextInt();
    
    
            for (int i = num1; i <= num2 ; i++) {
                int x = i;
                int n = 0;
                    
                while (x != 0) {
                    x /= 10;
                    n++;
                }
                int sum = 0;
                x = i;
                while (x != 0) {
                    int digit = x % 10;
                    sum += Math.pow(digit, n);
                    x /= 10;
                }
                if (sum == i) {
                    System.out.print(i + " ");
                }
                else{}
            }
           
        }
    }
}
