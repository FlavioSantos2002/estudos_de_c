#include<stdio.h>
int main(void){
    struct horario{
        int hora;
        int minuto;
        int segundo;
    };

    struct horario agora, *depois; //é uma estrutura agora do tipo horario apontada port ponteiros, NOTE QUE TEM VIRGULA DPS DO AGORA
    depois = &agora;//depois recebe o endereço de memoria dos elementos da estrutura agora do tipo horario, note que se vc nao declarar nada o rint vem com os lixos de memorias que foram apontados 

    depois->hora = 20;
    depois->minuto = 30;
    depois->segundo = 40;

    printf("%i:%i:%i", agora.hora, agora.minuto, agora.segundo);



    getchar();
    return 0;
}