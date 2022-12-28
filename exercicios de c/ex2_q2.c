
#include <stdio.h>
int main() {
    float numeros[10];
    int i;
    for(i = 0; i<10; i++){
        printf("digite o %d° numero: ", i+1);
        scanf("%f", &numeros[i]);
        fflush(stdin);
    } 
    i = 0;
    float media, soma;
    for(i = 0; i<10; i++){
        soma = soma + numeros[i];
    }
    media = soma/i;
    i = 0;
    printf("o vetor = [");
    for(i = 0; i < 10; i++ ){
        printf("%.2f, ", numeros[i]);
    }
    printf("]");
    printf("\no valor da soma de seus elementos eh: %.2f", soma);
    printf("\ne o valor de sua media eh: %.2f", media);
}