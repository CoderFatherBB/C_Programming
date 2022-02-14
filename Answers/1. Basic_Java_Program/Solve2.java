// Take name as input and print a greeting message for that name.
import java.util.Date;
import java.util.Scanner;

class Solve2 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Enter your good name : ");
            String name = input.next();
            
            Date dt = new Date();
            int hour = dt.getHours();
            if (hour>=1 && hour<=12){
                System.out.print("Good Morining " + name + ", Have a great day.");
            }
            else if (hour>12 && hour<=16){
                System.out.print("Good Afternoon " + name + ", It's sunny out ther drink water.");
            }
            else if (hour>16 && hour<=21){
                System.out.print("Good Evening " + name + ", Hope you are having a great day.");
            }
            else if (hour>21 && hour<=24){
                System.out.print("Good night " + name + ", Hope you had a great day and will have greater day tomorrow.");
            }
            // System.out.println("What a beatifull name : " + name);
        }
    }
}