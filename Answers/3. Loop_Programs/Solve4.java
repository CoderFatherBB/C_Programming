// Calculate Discount Of Product
import java.util.Scanner;

public class Solve4 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Enter your total amount : ");
            float total = input.nextFloat();
            float discount;
            
            if (total > 10000.00) {
                System.out.print("\n\nAs your amount is above 10000.\nAs policy you get 15-persent discount and additional voucher of 1000 Rs");
                discount = total - (total * 0.15f);
                System.out.print("\nWhould you like to use you 1000 Rs voucher here\n1.Yes\n2.No\n(1 or 2) : ");
                int ans = input.nextInt();
                if (ans == 1)
                {
                    float amount = discount - 1000.00f;
                    System.out.print("\nYour total amount is : " + amount);
                }
                else if (ans == 2)
                {
                    System.out.print("\nYour discounted amount is : " + discount);
                }   
            }
            else if (total > 7000.00)
            {
                System.out.print("\n\nAs your amount is above 7000.\nAs our mall policy you get 15-percent discount");
                discount = total - (total * 0.15f);
                System.out.print("\nYour discounted amount is : " + discount);
            }
            else if (total > 5000.00 && total < 7000.00)
            {
                System.out.print("\n\nAs your amount is above 5000 and less than 7000.\nAs our mall policy you get 12-percent discount");
                discount = total - (total * 0.12f);
                System.out.print("\nYour discounted amount is : " + discount);
            }
            else if (total > 3000.00 && total < 5000.00)
            {
                System.out.print("\n\nAs your amount is above 3000 and less than 5000.\nAs our mall policy you get 10-percent discount");
                discount = total - (total * 0.1f);
                System.out.print("\nYour discounted amount is : " + discount);
            }
            else if (total > 1000.00 && total < 3000.00)
            {
                System.out.print("\n\nAs your amount is above 1000 and less than 3000.\nAs our mall policy you get 5-percent discount");
                discount = total-(total*0.05f);
                System.out.print("\nYour discounted amount is : " + discount);
            }
        }
    }
}