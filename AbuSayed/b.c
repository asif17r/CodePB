#include<stdio.h>

int main(){
    //input from file
    freopen("input.txt", "r", stdin);
    //output to file
    freopen("output.txt", "w", stdout);
    int frq[10000] = {0};
    //this is an array to store the frequency of each
    //number, initially all frq is zero
    
    //input 100 numbers
    for(int i = 0; i < 100; i++){
        int a; scanf("%d",&a);
        frq[a]++;
    }
    for(int i = 0; i < 10000; i++){
        if(frq[i] != 0){
            //if the frequency of the array is not zero
            printf("%d occures %d times\n",i,frq[i]);
        }
    }
}