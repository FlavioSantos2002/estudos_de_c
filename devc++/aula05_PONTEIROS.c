/*Para introdução de pontero temos sintaxe dos ponteiros:
--> <tipo de variavel que ele vai apontar> *nome
exemplo: int *ponteiro; --> isso significa que é um ponteiro apontando em um valor tipo int
*/

#include <stdio.h>
int main(void){
    int x;
    x = 10;
    //printf("endereco de memoria: %d\n", &x);
    //printf("valor que foi atruibuido a x e esta armazenado nos 4 bits apartir do endereco de memoria: %d", x);
    int *ponteiro;
    ponteiro = &x;// --> aqui o ponteiro de nome ponteiro esta apontando ou recebendo o endereço de memoria da variavel x.
    printf("%i\n", *ponteiro);// aqui ele aponta pra variavel
    printf("%i\n", ponteiro);// sem o * ele aponta pro enderço de memoria pois na linha acima ponteiro = &x;
    
    getchar();
    return 0;
}