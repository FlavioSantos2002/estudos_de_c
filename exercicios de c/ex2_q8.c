
#include <stdio.h>
int main(){
    int i, j, m, n, p, q, soma, x;
    
    //LETRAS
    printf("Amxn * Bpxq = Cmxq\n");
    printf("digite o valor da letra m\n");
    scanf("%d", &m);
    fflush(stdin);
    printf("digite o valor da letra n\n");
    scanf("%d", &n);
    fflush(stdin);
    printf("digite o valor da letra p\n");
    scanf("%d", &p);
    fflush(stdin);
    printf("digite o valor da letra q\n");
    scanf("%d", &q);
    fflush(stdin);
    
    if((m<=0) || (n<=0) || (p<=0) || (q<=0) || (n!=p)){
        printf("impossivel pois p ≠ n, ou alguma coluna ou linha é <=0\n");
    }
    else{
        int a[m][n], b[p][q], c[m][q];
        
        //LENDO A MATRIZ A
        
        for(i = 0; i<m;i++){
            for(j=0; j<n; j++){
                printf("digite o elemento da lina %d, coluna %d da matriz A: ", i+1, j+1);
                scanf("%d", &a[i][j]);
                fflush(stdin);
            }
        }
        printf("__________MATRIZ A__________\n");
        for(i = 0; i<m;i++){
            for(j=0; j<n; j++){
                printf("%d ", a[i][j]);
            } 
            printf("\n");
        }
        printf("____________________________\n\n");
        
        
        //LENDO A MATRIZ B
        
        for(i = 0; i<p;i++){
            for(j=0; j<q; j++){
                printf("digite o elemento da lina %d, coluna %d da matriz B: ", i+1, j+1);
                scanf("%d", &b[i][j]);
                fflush(stdin);
            }
        }
        printf("__________MATRIZ B__________\n");
        for(i = 0; i<p;i++){
            for(j=0; j<q; j++){
                printf("%d ", b[i][j]);
            } 
            printf("\n");
        }
        printf("____________________________\n\n");
        
        //MATRIZ C
        for(i = 0; i < m; i++) {
    		for(j = 0; j < q; j++) {
    			c[i][j] = 0;
    			for(x = 0; x < p; x++) {
    				soma = soma + a[i][x] * b[x][j];
    			}
    			c[i][j] = soma;
    			soma = 0;
    		}
	    }
	    
	    
	    printf("\n       Resultado AxB=C    \n");
	    printf("⇩⇩⇩⇩⇩⇩⇩⇩⇩⇩⇩⇩⇩⇩⇩⇩⇩⇩⇩⇩⇩⇩⇩⇩⇩⇩⇩⇩\n");
	    
	    
	    printf("__________MATRIZ C__________\n");
	    for(i = 0; i < m; i++) {
    		for(j = 0; j < q; j++) {
    		    printf("%d ", c[i][j]);
    		}
    		printf("\n");
	    } 
	    printf("____________________________\n\n");
    }
    
  
}