#include <stdio.h>
#include <math.h>
float sub1, sub2, p1, p2, s, p3;
distancia(float x1, float y1, float x2, float y2){
    sub1 = x1 - x2;
    //printf("%f\n", sub1);
    
    sub2 = y1 - y2;
    //printf("%f\n", sub2);
    
    p1 = pow(sub1, 2);
    //printf("%f\n", p1);
    
    p2 = pow(sub2, 2);
    //printf("%f\n", p2);
    
    s = p1 + p2;
    //printf("%f\n", s);
    
    p3 = sqrt(s);
    printf("a distancia de p1(%.2f, %.2f) e p2(%.2f, %.2f) eh: %.2f", x1,y1,x2,y2,p3);
}
main(){
    float x1, x2, y1, y2;
    
    //x1 e y1
    printf("x1: ");
    scanf("%f", &x1);
    printf("y1: ");
    scanf("%f", &y1);
    
    //x2 e y2
    printf("x2: ");
    scanf("%f", &x2);
    printf("y2: ");
    scanf("%f", &y2);
    distancia (x1, y1, x2, y2);
}
