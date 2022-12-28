#include <stdio.h>
int main(){
    int A[5] = {1,2,3,4,5}; // quatro posicoes pois a ultima é reservada ao \0
    int B[4], i;
    for(i = 0; i< 5; i++ ){
        if(A[i]%2==0){
            B[i] = A[i] * 5;
        }
        else{
            B[i] = A[i] + 5;
        }
    }
    i = 0;
    for(i = 0; i < 5; i++ ){
        printf("%d ", B[i]);
    }
}