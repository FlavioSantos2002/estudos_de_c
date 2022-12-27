/*Pelo que deu a intender no video o objetivo desse codigo eh passar uma função que recebe uma estrutura e uma estrutura que recebe uma função... onde ao mesmo tempo é necessario lembrar dos conceitos de variavel gobal...*/
struct horario{
    int hora;
    int minuto;
    int segundo;
};
#include<stdio.h>
    int main(void){
        struct horario teste(struct horario x); /* note que aqui temos uma função chamada "teste" e essa função tem como argumento uma estrutura "x" do tipo "horario", e essa estrutura x tambem retorna uma estrutura de tipo horario*/

        /*struct horario{ note que esse pedaço faz com que a função nao funcione pois a estrutura deveria estar fora da função. 
        int hora;
        int minuto;
        int segundo;   
    };*/

    struct horario agora;
    agora.hora = 10;
    agora.minuto = 20;
    agora.segundo = 30;


    struct horario proxima;
    proxima = teste(agora);

    printf("proxima: %i;%i;%i\n", proxima.hora,
                         proxima.minuto,
                         proxima.segundo);
    


    system("pause");
    return 0;
    }

    struct horario teste(struct horario x){

        printf("vai printar tudo que esta declarado dentro da estrutura horario\n");
        printf("%i;%i;%i\n", x.hora, 
                             x.minuto,
                             x.segundo);

        // note que nas linhas seguintes x vai receber novos valores e esses valores vao ser retornados na função principal, no caso vao ser recebidos pela estrutura agora, e depois vai printalos tambem.
        x.hora = 10;
        x.minuto = 10;
        x.segundo = 10;

        return x;
    }