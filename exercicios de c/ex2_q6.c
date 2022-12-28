#include <stdio.h>
int main() {
    float D, Dx, Dy, n[6], x, y;
    int i;
    char v[] = "abcdef";
    
    printf("~~SISTEMA 2X2~~\n");
    printf("| ax + by = c| \n");
    printf("| dx + ey = f| \n");
    
    
    for(i=0; i<6; i++){
        printf("digite o valor da variavel %c: ", v[i]);
        scanf("%f", &n[i]);
        fflush(stdin);
    }
    
    printf("\n~~~~~~SISTEMA 2X2~~~~~~~~\n");
    printf("|%.2fx + %.2fy = %.2f|\n", n[0], n[1], n[2]);
    printf("|%.2fx + %.2fz = %.2f|\n", n[3], n[4], n[5]); 
    
    
    D = (n[0]*n[4]) - (n[1]*n[3]);
    Dx = (n[2]*n[4]) - (n[1]*n[5]);
    Dy = (n[0]*n[5]) - (n[2]*n[3]);
    
     if(D==0){
        printf("\nO SISTEMA É IMPOSSIVEL, pois D=0");
        printf("\nDx e Dy valem respectivamente: %.2f, %.2f", Dx, Dy);
    }
    else{
        x = Dx/D;
        y = Dy/D;
        printf("\nSEU DETERMINANTE EH: %.2f", D);
        printf("\nEsse sistema possui SOLUÇAO, por Crammer, de forma que Dx e Dy valem respectivamente: %.2f, %.2f", Dx, Dy);
        printf("\nOs valores de x e y respectivamente sao: %.2f e %.2f", x, y);
    }
}

