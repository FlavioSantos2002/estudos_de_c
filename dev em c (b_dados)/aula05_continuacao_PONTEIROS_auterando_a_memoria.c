#include<stdio.h>
int main(void){
    int x = 10;
    int *ponteiro;
    ponteiro = &x;//ponteiro aponta pro endereço de memoria da variavel x

    int y = 20;
    *ponteiro = y; //onde o ponteiro estava apontando no caso &x vai receber o valor y

    printf("%i, %i\n", x, y); 
    getchar();
    return 0;
}