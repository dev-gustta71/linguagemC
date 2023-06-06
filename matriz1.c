include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i, j;
    char disciplina[3][250];
    float somaNota, nota[3][3];
    float media[3];
    int resposta;
    char continuar[20];

    for (i = 0; i < 3; i++)
    {

        printf("Digite o nome da disciplina: ");
        gets(disciplina[i]);
        for (j = 0; j < 3; j++)
        {
            printf("Digite sua %d nota: ", j + 1);
            scanf("%f", &nota[i][j]);
            fflush(stdin);
            somaNota += nota[i][j];
        }
        system("cls");
        media[i] = somaNota / j;

        somaNota = 0;
    }

    system("cls");
    do
    {
        printf("Escolha uma opcao: \n");
        printf("[1] - Exibir a media: \n");
        printf("[2] - Informar se esta aprovado/reprovado \n");
        printf("[3] - Todas as informacoes! \n");
       
        scanf("%d", &resposta);
        system("cls");

        switch (resposta)
        {
        case 1:
            for (i = 0; i < 3; i++)
            {
                printf("Disciplina: %s \n", disciplina[i]);
                for (j = 0; j < 1; j++)
                {
                    printf("Media: %.2f \n", media[i]);
                    printf("\n");
                }
            }

            break;

        case 2:
            for (i = 0; i < 3; i++)
            {
                printf("Disciplina: %s \n", disciplina[i]);

                for (j = 0; j < 1; j++)
                {
                    if (media[i] >= 7)
                    {
                        printf("Aprovado! \n");
                        printf("\n");
                    }
                    else
                    {
                        printf("Reprovado! \n");
                        printf("\n");
                    }
                }
            }

            break;

        case 3:
            printf("Media: \n");
            printf("--------------\n");
            for (i = 0; i < 3; i++)
            {
                printf("Disciplina: %s \n", disciplina[i]);
                for (j = 0; j < 1; j++)
                {
                    printf("Media: %.2f \n\n", media[i]);
                }
                printf("\n\n");
            }
            printf("--------------------\n");
            printf("Status de aprovacao\n");
            printf("------------------\n");
            for (i = 0; i < 3; i++)
            {
                printf("Disciplina: %s \n", disciplina[i]);

                for (j = 0; j < 1; j++){

                    if (media[i] >= 7)
                    {
                        printf("Aprovado! \n\n");
                    }
                    else
                    {
                        printf("Reprovado! \n\n");
                    }
                }
            }

            break;
            
        }
        fflush(stdin);
        printf("Selecionar outra opcao: [Sim/Nao]: ");
        gets(continuar);
        system("cls");
    } while (strcmp(continuar, "Sim") == 0);

    return 0;
}
