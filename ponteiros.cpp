//funcao que recebe dois parametros de entrada
//objetivo da funcao é alterar os valores da dos numeros
//funcao com duas variaveis

  void troca (int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}


#include <stdio.h>

int main()
{
    int a, b;
    
    printf("digite o primeiro numero");
    scanf("%d", &a);
    printf("digite o primeiro numero");
    scanf("%d", &b);
    
    printf("o valor de A = %d valor de B = %d \n ", a, b);
    troca(&a,&b);
    printf("o valor de A = %d valor de B = %d \n", a, b);
    

    
    
    return 0;
    
    
}
