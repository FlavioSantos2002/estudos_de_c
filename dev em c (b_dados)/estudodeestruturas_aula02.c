#include<stdio.h>
    int main(void){
        struct horario{
        int hora;
        int minuto;
        int segundo; 
        float teste; 
        char letra; 
    };
    struct horario agora;
    agora.hora = 10;
    agora.minuto = 20;
    agora.segundo = 30;

    struct horario depois;
    depois.hora = agora.hora + 10;
    depois.minuto = agora.minuto;
    depois.teste = 50.55/123;
    depois.letra = 'a';

    printf("%d\n", depois.hora);
    printf("%i\n", depois.minuto);
    printf("%f\n", depois.teste);
    printf("%c\n", depois.letra);


    system("pause");
    return 0;
}