#include <stdio.h>
#include <string.h>
#define P "a palavra que vc quer inverter"
int main() {
    char palavra[] = P;
    int tam, i; 
    tam = strlen(palavra);
    char inversa[tam];
    for(i = 0; i < tam; i++){
        inversa[i] = palavra[tam-i-1];
    }
    printf("ordem original: ");
    puts(palavra);
    printf("\nordem inversa: ");
    puts(inversa);
}