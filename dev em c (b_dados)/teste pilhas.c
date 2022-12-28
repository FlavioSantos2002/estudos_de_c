#include<stdio.h>
#include<stdlib.h>

int A = -1;

typedef struct{
    int dia, mes, ano;
}Data;

typedef struct{
    char nome[50];
    Data data;
}Pessoa;

typedef struct no{
    Pessoa p;
    struct no *proximo;
}No;

Pessoa ler_pessoa(){
    Pessoa p;
    

    printf("\nDigite nome: "); 
    scanf("%49[^\n]", p.nome); 
    while(A = -1){
        printf("\nDigite o dia do nascimento: ");
        scanf("%d", &p.data.dia);
        if((p.data.dia>0) && (p.data.dia<31)){
            A = -1;
        }
        else{
            printf("\nnumero invalido\n");
            continue;
        }
        printf("\nDigite o mes de nascimento: ");
        scanf("%d", &p.data.mes);
        if((p.data.mes>0) && (p.data.mes<=12)){
            if((p.data.mes = 2)&&(p.data.dia>29)){
                printf("\nnumero invalido\n");
                continue;
            }
            else{
                A = -1;
            }           
        }
        else{
            printf("\nnumero invalido\n");
            continue;
        }
        printf("\nDigite o ano de nascimento: ");
        scanf("%d", &p.data.ano);
        if((p.data.ano>0)&&(p.data.ano<2023)&&(p.data.ano>1905)){
            break;
        }
        else{
            printf("\nnumero invalido\n");
            continue;
        }
    }
    return p;
}

void imprimir_pessoa(Pessoa p){
    printf("\nNome: %s\nData: %2d/%2d/%4d\n", p.nome, p.data.dia, p.data.mes, p.data.ano);
}

//função para empilhar
No* empilhar(No *topo){
    No *novo = malloc(sizeof(No));
    if(novo){
        novo->p = ler_pessoa();
        novo -> proximo = topo;
        return novo;
    }
    else{
        printf("\nErro ao alocar memoria\n");
    }
    return NULL;
}

No* desempilhar (No **topo){
    if(*topo != NULL){
        No *remover = *topo;
        *topo = remover -> proximo;
        return remover;
    }
    else{
        printf("\nPilha Vazia\n");
        return NULL;
    }
}


void imprimir_pilha(No *topo){
    printf("\n-----------TOPO-PILHA----------\n");
    while(topo != NULL){
        imprimir_pessoa(topo->p);
        topo = topo->proximo;
    }
    printf("\n----------FIM PILHA----------\n");
}




int main(){

    No *remover, *topo = NULL;
    int opcao;
    do{
        printf("\n0 - Sair\n1 - Empilhhar\n2 - Desenpilhar\n\n");
        scanf("%d",&opcao);
        getchar();

        switch(opcao){
            case 1:
            topo = empilhar(topo);
            system("cls");
            imprimir_pilha(topo);

            break;
            case 2:
            system("cls");
            remover = desempilhar(&topo);
            imprimir_pilha(topo);
            if (remover){
                printf("\nElemento removido com sucesso\n");
                imprimir_pessoa(remover->p);

            }
            else{
                printf("\nSem elementos pra remover\n");
            }
            break;

            default:
                if(opcao !=0){
                    system("cls");
                    printf("\nOpcao invalida!!!!\n");
                    imprimir_pilha(topo);
                }
                else{
                    printf("\nAte a proxima\n");
                }
        }
    }while(opcao != 0);

    return 0;
   
}