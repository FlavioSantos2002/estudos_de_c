#include <stdio.h>
#include <string.h>
int main(){
    int vetor[10] = {0,-1,2,-3,-4,5,6,-7,8,-9};
    int i, cont=0;
    for(i=0; i<10; i++){
        if(vetor[i]>=0){
            cont = cont + 1;
        }
    }
    i = 0;
    printf("o vetor: [");
    for(i=0; i<10; i++){
        printf("%d, ", vetor[i]);
    }
    printf("], ");
    printf("tem %d numeros negativos", cont);
}
