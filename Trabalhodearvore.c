#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <stdbool.h>

typedef struct elemento {
    char nome[50];
    char rgm[9];
} t_elemento;

typedef struct arvore{
    t_elemento Aluno;
    struct arvore *esq;
    struct arvore *dir;
}t_arvore;

typedef t_arvore *tree;

t_arvore *criaNo() {
    t_arvore *no = (t_arvore*) malloc(sizeof(t_arvore));
    if (no)
    {
        no->dir = no->esq = NULL;
    }
    return no;
}

int insereRaiz(tree *tree, t_elemento dado) {
    t_arvore *novo = criaNo();
    if (tree!=NULL)
    {
        return 0; //raiz já existe
    }
    novo = criaNo();
    if (novo==NULL)
    {
        return 0; //Não tem memória
    }
    novo->Aluno = dado;
    tree = novo;
    return tree;
}

int inserir(t_arvore *tree, t_elemento dado){


}


void menu()
{
    printf("\t=====================================================\n");
    printf("\t|               EDITOR DE ÁRVORE                    |\n");
    printf("\t|OP [1] - Inserir(Fornecer RGM e nome do aluno).    |\n");
    printf("\t|OP [2] - Remover um nó.                            |\n");
    printf("\t|OP [3] - Evaziar toda a árvore.                    |\n");
    printf("\t|OP [4] - Pesquisar(Fornecer RGM a pesquisar).      |\n");
    printf("\t|OP [5] - Exibir toda a Arvore.                     |\n");
    printf("\t|OP [0] - Encerrar.                                 |\n");
    printf("\t=====================================================\n");
}

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    menu();
    int i, op;

    do{
        menu();
        printf("\nDIGITE SUA OPÇÃO: ");
        scanf("%d", &op);

        switch(op) {
        case 1:
                break;
        case 2:
                break;
        case 3:
                break;
        case 4:
                break;
        case 5:
                break;
        case 0: printf("Saindo...");

        default: printf("\nOpção incorreta!");
        }

    } while(op != 0);


}
