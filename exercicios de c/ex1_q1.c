#include <stdio.h>
int poui(n){
    if (n % 2 == 0){
        printf("o numero %d par", n);
    }
    else{
        printf("o numero %d impar", n);
    }
}
int main(){
    int n;
    printf("digite um numero: ");
    scanf("%d", &n);
    poui(n);
}