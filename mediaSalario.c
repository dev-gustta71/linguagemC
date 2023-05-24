#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

  int salario, somaS;
  int filhos, somaF;
  float mediaF, mediaS;
  int salM, salMe;
  int i;

  while (salario >= 0)
  {
    printf("Informe seu salario: ");
    scanf("%d", &salario);
    somaS = somaS + salario;
  
    if (salario >= 0)
    {
       if (salario > salM){
      salM = salario;
    }if (salario < salMe){
      salMe = salario;
    }
      printf("Numero de filhos: ");
      scanf("%d", &filhos);
      somaF = somaF +  filhos;
      i++;
    }
    system("cls");
  }
  mediaF = somaF / i;
  mediaS = somaS / i;

  printf("Media salarial R$ %.2f \n",mediaS);
  printf("Media de filhos: %.1f \n ",mediaF);
  printf("Salario Maior: %d \n",salM);
  printf("Salario Menor: %d \n",salMe);

  return 0;
}