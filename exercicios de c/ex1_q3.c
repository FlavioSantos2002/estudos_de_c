
#include <stdio.h>
int maior(a, b){
    if (a>b){
        printf("O MAIOR VALOR EH: %d", a);
    }
    else{
        printf("O MAIOR VALOR EH: %d", b);
    }
}

int main(){
    int n1,n2;
    printf("digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("digite o segundo numero: ");
    scanf("%d", &n2);
    maior (n1, n2);
}
