
import java.util.Scanner;

public class Palindrome {
    boolean isPalindrome(int num){
        String one = Integer.toString(num);
        StringBuilder builder = new StringBuilder(one);
        builder.reverse();
        String two = builder.toString();
        if(one.equals(two)) return true;
        else return false;
    }
}
class main{
    public static void main(String[] args) {
        System.out.println("Please enter the number");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        Palindrome palChecker = new Palindrome();
        if(palChecker.isPalindrome(num)){
            System.out.println("This number is a palindrome");
        }else{
            System.out.println("This number is not a palindrome");
        }
    }
}
