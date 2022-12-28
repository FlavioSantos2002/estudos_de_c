#include <stdio.h>
int main() {
    int i;
    float n[12], D, Dx,Dy, Dz, x, y, z;
    char v[] = "abcjdefkghil";
    
    printf("~~~~SISTEMA 3X3~~~~\n");
    printf("|ax + by + cz = j|\n");
    printf("|dx + ey + fz = k|\n");
    printf("|gx + hy + iz = l|\n");
    for(i=0; i<12; i++){
        printf("digite o valor da variavel %c: ", v[i]);
        scanf("%f", &n[i]);
        fflush(stdin);
    }
    printf("\n\n~~~~~~~~SISTEMA 3X3~~~~~~~~~~\n");
    printf("|%.2fx + %.2fy + %.2fz = %.2f|\n", n[0], n[1], n[2], n[3]);
    printf("|%.2fx + %.2fy + %.2fz = %.2f|\n", n[4], n[5], n[6], n[7]);
    printf("|%.2fx + %.2fy + %.2fz = %.2f|\n", n[8], n[9], n[10], n[11]);
    
    D = (((n[0]*n[5]*n[10]) + (n[1]*n[6]*n[8]) + (n[2]*n[4]*n[9])) - ((n[2]*n[5]*n[8]) + (n[0]*n[6]*n[9]) + (n[1]*n[4]*n[10])));
   
    Dx = (((n[1]*n[6]*n[11]) + (n[2]*n[7]*n[9]) + (n[3]*n[5]*n[10])) - ((n[3]*n[6]*n[9]) + (n[1]*n[7]*n[10]) + (n[2]*n[5]*n[11])));
 
    Dy = (((n[0]*n[6]*n[11]) + (n[2]*n[7]*n[8]) + (n[3]*n[4]*n[10])) - ((n[3]*n[6]*n[8]) + (n[0]*n[7]*n[10]) + (n[2]*n[4]*n[11])))*(-1);
    
    Dz = (((n[0]*n[5]*n[11]) + (n[1]*n[7]*n[8]) + (n[3]*n[4]*n[9])) - ((n[3]*n[5]*n[8]) + (n[0]*n[7]*n[9]) + (n[1]*n[4]*n[11])));
    
    if(D==0){
        printf("\nO SISTEMA É IMPOSSIVEL, pois D=0");
        printf("\nDx, Dy, e Dz valem respectivamente: %.2f, %.2f, %.2f", Dx, Dy, Dz);
    }
    else{
        x = Dx/D;
        y = Dy/D;
        z = Dz/D;
        printf("\nSEU DETERMINANTE EH: %.2f", D);
        printf("\nEsse sistema possui SOLUÇAO, por Crammer, de forma que Dx, Dy, e Dz valem respectivamente: %.2f, %.2f, %.2f", Dx, Dy, Dz);
        printf("\nOs valores de x, y e z respectivamente sao: %.2f, %.2f e %.2f", x, y, z);
    }
}
