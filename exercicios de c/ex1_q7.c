
#include <stdio.h>
primo(int numero){
    int cont = 1, divs = 0, resto, b;
    if ((numero == 1) || (numero == 0)){
        b = -1;
        printf("TEORICAMENTE N EH PRIMO\n");
        return 0;
    }
    if (numero < 0){
        b = -1;
        printf("NAO EXISTE PRIMO NEGATIVO\n");
        return 0;
    }
    while ((numero >= cont) && (b != -1)){
        resto = numero%cont;
        if (resto==0){
            divs = divs + 1;
            //printf("\n**%d** DIVISIVEL", cont);
            cont = cont + 1;
            if (divs > 2){
                //printf("\n O NUMERO %d NAO EH PRIMO", numero);
                b = -1;
                return 0;
            } 
            if ((divs == 2) && (numero + 1 == cont)){
                //printf("\n O NUMERO %d EH PRIMO", numero);
                return 1;
            }
        }
        else{
            //printf("\n %d", cont);
            cont = cont + 1;
        }
    }
}

main(){;
    int n, a;
    printf("digite um numero: ");
    scanf("%d", &n);
    a = primo(n);
    if (a == 1){
        printf("%d EH PRIMO", n);
    }
    else{
         printf("%d NAO PRIMO", n);
    }
}