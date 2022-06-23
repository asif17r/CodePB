#include<stdio.h>

int main(){
    int n;
    printf("Please enter the number of elements:\n");
    scanf("%d",&n);
    printf("Please Enter the elements:\n");
    int arr[n+1];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    //now get the xor of all numbers
    int xorResult = 0;
    for(int i = 0; i< n; i++){
        xorResult = xorResult ^ arr[i];
        // "^" this is the xor sign
    }
    //now xorResult is the xor of whole array
    //now the ans to the ques is xorResult^k
    printf("Enter K:\n");
    int k; scanf("%d",&k);
    xorResult = xorResult^k;
    printf("The new element to insert is %d\n", xorResult);
    //now insert the element
    arr[n] = xorResult;
    printf("The new array is:\n");
    for(int i = 0; i <= n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}