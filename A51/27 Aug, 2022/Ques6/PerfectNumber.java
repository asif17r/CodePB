
public class PerfectNumber {
    static boolean isPerfectNumber(int num){
        int sum = 0;
        for(int i = 1; i < num; i++){
            if(num%i == 0){
                sum += i;
            }
        }
        if(sum == num) return true;
        else return false;
    }
    public static void main(String[] args) {
        System.out.println("Perfect numbers in range [1,10000] are: ");
        for(int i = 1; i <= 10000; i++){
            if(isPerfectNumber(i)){
                System.out.print(i+" ");
            }
        }
    }
}
