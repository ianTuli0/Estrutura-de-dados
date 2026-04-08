
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*ALocação dinâmica e erros comuns*/
    
    /* Função que rece um parâmetro inteiro N > 0 
    e aloca um vetor de inteiros de N posições e inicializa-o com zeros. 
    Devolve o ponteiro do vetor alocado ou NULL 
    em caso de falta de espaço */
    
    
/*int *alocaVetor(int N) //1a tentativa: Incorreta!!
{
    int v[N];
    for (int i=0; i<N; ++i)
    v[i] = 0;
    return v;//Erro Grave: Devolução de variável local!!!
    
}*/

    
int *alocaVetorFixed(int N)
{
    int *v = malloc(sizeof(int) * N);
    for (int i=0; i<N; ++i)
    v[i] = 0;
    return v;
    
}
    
 /*int *v = alocaVetor(10); //pede vetor com 10 inteiros
 for(int i=0; i<10; ++i)
    printf("v[%d} = %d\n", i, v[i]); //leitura ilegal
    //tentativa de acessar uma região de memória que não 
    //pertence ao processo (=programa em execução).
*/

  int *v = alocaVetorFixed(10); //pede vetor com 10 inteiros
 for(int i=0; i<10; ++i)
    printf("v[%d} = %d\n", i, v[i]);
      free(v);
      a= null; //evita problemas futuros
    return 0;
  
 
}



