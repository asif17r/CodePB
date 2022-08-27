
import java.util.Scanner;

public class MatProperties {
    int n;
    int matrix[][];
    boolean isScalar(){
         // check whether non diagonal elements are equal to zero
        for (int i = 0; i<n; i++){
            for(int j=0; j<n; j++){
                if (i != j && matrix[i][j] != 0)
                    return false;
            }
        }
        // check whether diagonal elements are equal to each other.
        for(int i =0; i<n-1; i++)
            if(matrix[i][i] != matrix[i+1][i+1])
                return false;
        return true;
    }
    boolean isSkewSymmetric(){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] != -matrix[j][i]){
                    return false;
                }
            }
        }
        return true;
    }
}
class main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the matrix: ");
        int n = sc.nextInt();
        int arr[][] = new int[n][n];
        System.out.println("Please enter the matrix");
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                arr[i][j] = sc.nextInt();
            }
        }
        MatProperties myMatrix = new MatProperties();
        myMatrix.n = n;
        myMatrix.matrix = arr;
        if(myMatrix.isScalar()){
            System.out.println("Given matrix is scalar");
        }else{
            System.out.println("Given matrix is not scalar");
        }
        if(myMatrix.isSkewSymmetric()){
            System.out.println("Given matrix is skew symmetric");
        }else{
            System.out.println("Given matrix is not skew symmetric");
        }
    }
}
