#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main() {
    int fila[MAX];
    int fim=-1;
    int op;

    do {
        system("cls");
        printf("*** Menu ***\n\n");
        printf("\n1- Inserir");
        printf("\n2- Remover");
        printf("\n3- Imprimir");
        printf("\n9- Sair");
        printf("\nDigite a sua opcao: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            system("cls");
            printf("*** Inserir ***\n\n\n");

            if(fim<=MAX-1) {
                fim++;
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &fila[fim]);
                printf("\n\n\nElemento inserido com sucesso!\n\n\n");
            }
            else {
                printf("\n\nNao foi possivel inserir. Fila cheia!\n\n\n");
            }
            system("pause");
            break;
        case 2:
            if (fim>=0) {
                for (int i = 0; i < fim; i++)
                {
                    fila[i] = fila[i+1];
                }
                fim--;
                printf("\n\nElemento removido com sucesso!");
                system("pause");
            }
            else {
                printf("Nao foi possivel remover. Fila vazia.\n\n\n");
            }
            break;
        case 3:
            system("cls");
            printf("*** Fila *** \n\n\n");
            for (int i = 0; i <= fim ; i++)
            {
                printf("%d\t", fila[i]);
            }
            printf("\n\n\n");
            system("pause");
            break;
        }
    } while (op!=9);
}
