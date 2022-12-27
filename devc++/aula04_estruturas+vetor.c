#include<stdio.h>
int main(void){
    struct horario{
        int hora;
        int minuto;
        int segundo;

    };
    /*Note que nao tem muito segredo bata colocar o tamanho do vetor*/
    struct horario teste[5] = {{10, 20, 30}, {10, 20, 30}, {10, 20, 30}, {10, 20, 30}, {10, 20, 30}};
    /*e para declarar os elementos do vetor seguiria a mesma logica
    teste[0].hora = 10;
    teste[0].minuto = 20;
    teste[0].segundo = 30;
    teste[1].hora = 40;
        (...)
    teste[4].segundo = 150;
    */
   // mas obvio que vamos usar um for
   int i = 0;
   for (i = 0; i<5; i++){
    printf("%i, %i, %i\n", teste[i].hora,
                          teste[i].minuto,
                          teste[i].segundo);
   }

    system("pause");
    return 0;
}