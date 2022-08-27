import java.util.Scanner;

public class MatProperties {
    int n;
    int matrix[][];
    boolean isDiagonal(){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i != j){
                    if(matrix[i][j] != 0){
                        return false;
                    }
                }
            }
        }
        return true;
    }
    boolean isSymmetric(){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] != matrix[j][i]){
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
        if(myMatrix.isDiagonal()){
            System.out.println("Given matrix is diagonal");
        }else{
            System.out.println("Given matrix is not diagonal");
        }
        if(myMatrix.isSymmetric()){
            System.out.println("Given matrix is Symmetric");
        }else{
            System.out.println("Given matrix is not Symmetric");
        }
    }
}
