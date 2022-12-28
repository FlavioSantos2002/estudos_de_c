
#include <stdio.h>
int idade_dias(a, b, c){
    int d;
    d = a*365+b*30+c;
    printf("a idade em dias eh: %d", d);
}

int main(){
    int anos, meses, dias;
    printf("anos: ");
    scanf("%d", &anos);
    printf("meses: ");
    scanf("%d", &meses);
    printf("dias: ");
    scanf("%d", &dias);
    idade_dias (anos, meses, dias);
}
