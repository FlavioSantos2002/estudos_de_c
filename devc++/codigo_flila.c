#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;
}No;

void inserir_na_fila(No **fila, int num){
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo->valor = num;
        novo->proximo = NULL;
        if(*fila == NULL){
            *fila = novo;
        }
        else{
            aux = *fila;
            while(aux->proximo){
                aux = aux->proximo;
            }
            aux->proximo = novo;
        }
    }
    else{
        printf("\nErro ao alocar memoria\n");
    }
}

No* remover_da_fila(No **fila){
    No *remover = NULL;
    if(*fila){
        remover = *fila;
        *fila = remover -> proximo;
    }
    else{
        printf("\nnao se pode remover pois a Fila esta vazia\n");
    }
    return remover;
}

void imprimir(No *fila){
    printf("\t\n-Inicio------------------------\t\n");
    while(fila){
        printf(" %d ", fila->valor);
        fila = fila->proximo;
    }

    printf("\t\n-------------------------Final-\t\n\n");
}

int main(){
    No *r, *fila = NULL;
    int opcao, valor;
    do{
        printf("\n0 - Sair\n1 - Inserir\n2 - Remover\n\n");
        scanf("%d",&opcao);

        switch(opcao){
            case 1:
                printf("digite o valor a ser inserido: ");
                scanf("%d", &valor);
                inserir_na_fila(&fila, valor);
                system("cls");
                imprimir(fila);
                break;

            case 2:
                system("cls");
                r = remover_da_fila(&fila);
                imprimir(fila);
                if(r != NULL){
                    printf("\nnumero %d Removido: \n", r->valor);
                    free(r);
                }
                break;   
            default:
                if(opcao!=0){
                    printf("\nINVALIDO\n");
                }
                else{
                    printf("\nate a proxima\n");
                }

        }
    }while(opcao!=0);


    return 0;

}