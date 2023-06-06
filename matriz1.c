#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j;
    char disciplina[3][250];
    float somaNota, nota[2][3];
    float media[3];

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


for ( i = 0; i < 3; i++)
{
    printf("Disciplina: %s \n", disciplina[i]);
    for ( j = 0; j < 3; j++)
    {
        printf("%d NOTA: %.2f \n",j+1, nota[i][j]);
        
    }
    printf("MEDIA: %.2f",media[i]);
    printf("\n");
    
}

    return 0;
}
