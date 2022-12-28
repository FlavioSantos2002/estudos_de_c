#include <stdio.h>
float homens, mulheres;

peso_ideal(float h,int s){
    if (s == 1){
        homens = (72.6*h) - 58;
        return homens;
    }
    if (s == 0){
        mulheres = (62.1*h) - 44.7;
        return mulheres;
    }
}

main(){
    float h;
    int s;
    float a;
    printf("qual seu altura: ");
    scanf("%f", &h);
    printf("sexo M(digito 1)/F(digito 0): ");
    scanf("%d", &s);
    a = peso_ideal(h, s);
    printf("o peso ideal eh: %f", a);
}

