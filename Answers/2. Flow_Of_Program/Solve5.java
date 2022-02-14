// Take 2 numbers as inputs and find their HCF and LCM.
import java.util.Scanner;

public class Solve5 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Enter First Number: ");
            int num1 = input.nextInt();
            System.out.print("Enter Second Number: ");
            int num2 = input.nextInt();
            
            int mul = num1 * num2;
            int temp;
            while(num2 != 0){
                temp = num2;
                num2 = num1%num2;
                num1 = temp;
            }
            int hcf = num1;
            int lcm = (mul)/hcf;

            System.out.println("HCF of input numbers: " + hcf);
            System.out.println("LCM of input numbers: " + lcm);
        }
    }
}
