#include<stdio.h>
#include<stdlib.h>

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

    printf("\nDigite nome\n"); 
    scanf("%49[^\n]", p.nome); 
    printf("\nDigite o dia do nascimento: ");
    scanf("%d", &p.data.dia);
    printf("\nDigite o mes de nascimento: ");
    scanf("%d", &p.data.mes);
    printf("\nDigite o ano de nascimento: ");
    scanf("%d", &p.data.ano);
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
    printf("\n------------PILHA-----------\n");
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
        printf("\n0 - Sair\n1 - Empilhhar\n2 - Desenpilhar\n3 - Imprimir\n\n");
        scanf("%d",&opcao);
        getchar();

        switch(opcao){
            case 1:
            topo = empilhar(topo);

            break;
            case 2:
            remover = desempilhar(&topo);
            if (remover){
                printf("\nElemento removido com sucesso\n");
                imprimir_pessoa(remover->p);

            }
            else{
                printf("\nSem no pra remover\n");
            }
            break;
            case 3:
            imprimir_pilha(topo);

            break;

            default:
                if(opcao !=0){
                    printf("\nOpcao invalida!!!!\n");
                }
        }
    }while(opcao != 0);

    return 0;
   
}