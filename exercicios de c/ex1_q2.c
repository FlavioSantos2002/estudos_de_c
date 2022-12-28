
#include <stdio.h>

void idade(i){
    if ((i>=5) && (i<=7)){
        printf("Infantil A");
    }
    else{
        if ((i>=8) && (i<=10)){
            printf("Infantil B");
        }
        else{
            if((i>=11) && (i<=13)){
                printf("Juvenil A");
            }
            else{
                if((i>=14) && (i<=17)){
                    printf("Juvenil B");
                }
                else{
                    printf("Adulto");
                }
            }
            
        }
    }
}

int main(){
    int n;
    printf("digite a idade: ");
    scanf("%d", &n);
    idade (n);
}