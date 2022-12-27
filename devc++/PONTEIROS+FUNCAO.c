#include <stdio.h>
int main(void){
    void testeVariavel(int x);
    void testePonteiro(int *pX);
    int teste = 1;
    int *pteste = &teste;
    //testeVariavel(teste);//note que pra essa situação sai o numero 1
    testePonteiro(pteste);//nesta sai o 2
    printf("%i\n", teste);

    /*por que isso ocore?
    pos na primeira função faz apenas uma copia da variavel teste
    ja na segunda função estamos mexendo diretamente no engreço de mnemoria*/

    getchar();
    return 0;
}
void testeVariavel(int x){
    x = x + 1;

}
void testePonteiro(int *pX){
    ++*pX;
}