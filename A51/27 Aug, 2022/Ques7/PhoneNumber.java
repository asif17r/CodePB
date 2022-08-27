import java.util.Scanner;

public class PhoneNumber {
    public static void main(String[] args) {
        System.out.println("Please enter the phone number");
        Scanner sc = new Scanner(System.in);
        String PhoneNumber = sc.next();
        if(PhoneNumber.charAt(0) == '+'){
            if(PhoneNumber.charAt(1) != '8' || PhoneNumber.charAt(2) != '8'){
                System.out.println("Given number is not a valid Bangladeshi Number");
                return;
            }
            PhoneNumber = PhoneNumber.substring(3,PhoneNumber.length());
        }
        if(PhoneNumber.length() != 11){
            System.out.println("Given number is not a valid Bangladeshi Number");
            return;
        }
        String operatorCode = PhoneNumber.substring(1,3);
        if(operatorCode.equals("11")){
            System.out.println("The operator name is Citycell");
        }else if(operatorCode.equals("13") || operatorCode.equals("17")){
            System.out.println("The operator name is Grameenphone");
        }else if(operatorCode.equals("14") || operatorCode.equals("19")){
            System.out.println("The operator name is Banglalink");
        }else if(operatorCode.equals("15")){
            System.out.println("The operator name is TeleTalk");
        }else if(operatorCode.equals("16") || operatorCode.equals("18")){
            System.out.println("The operator name is Robi");
        }else{
            System.out.println("Given number is not a valid Bangladeshi Number");
        }
    }
}
