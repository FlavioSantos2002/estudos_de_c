#include<stdio.h>
int main(void){
    struct horario{
        int *pHora;
        int *pMinuto;
        int *pSegundo;
    };
    struct horario hoje;
    int hora = 20;
    int minuto = 40;
    int segundo = 50;

    hoje.pHora = &hora;
    hoje.pMinuto = &minuto;
    hoje.pSegundo = &segundo;

    printf("%i: %i: %i", *hoje.pHora, *hoje.pMinuto, *hoje.pSegundo);

    getchar();
    return 0;
    
}