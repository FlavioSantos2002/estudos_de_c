
#include <stdio.h>
int main(){
    int vetor[5];
    int i, maior, menor, d;
    for(i=0; i<5; i++){
        printf("digite o %d° numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    maior = menor = vetor[0];
    for(i = 0, d = 1; i < 4; i++, d++){
        if(maior<vetor[d]){
            maior = vetor[d];
        }
        if(menor>vetor[d]){
            menor = vetor[d];
        }
    }
    printf("o vetor: [");
    for(i=0; i<5; i++){
        printf("%d, ", vetor[i]);
    }
    printf("], ");
    printf("menor = %d, maior = %d.", menor, maior);
}
