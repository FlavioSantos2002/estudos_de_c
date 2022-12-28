#include<stdio.h>
int main(void){
    struct horario{
        int hora;
        int minuto;
        int segundo;   
    };
    struct horario agora;
    agora.hora = 10;
    agora.minuto = 20;
    agora.segundo = 30;

    printf("%d;%d;%d", agora.hora, agora.minuto, agora.segundo);


    system("pause");
    return 0;
}