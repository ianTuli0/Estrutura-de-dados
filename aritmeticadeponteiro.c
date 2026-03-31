
#include <stdio.h>

int main()
{
    int a = 0;
    
//NULL= valor de endereço vinculado a nenhum byte da memoria
//seu valor em binário é zero

   int *pa= NULL;
    /*importancia do NULL;
    a) remove o risco de acessarmos bytes da RAM sem autorizacao
    b) Serve para o SO comunicar ao programador que seu pedido de alocacao
    foi negado por falta de espaco*/
    
    
    /*Perigos associados a ponteiros contendo o valor NULL
    erro de falahas de segmentacao ao tentar ler o valor NULL
    (Ex printf("%d", *pa)) ou escrever algo no byte cujo endereço é NULL 
    pois esse byte não existe)
    CUIDADOS A SE TOMAR PARA EVITAR FALHA DE SEGMENTAÇÃO
    Verifique se o ponteiro é NULL
    ex. if(pa != null) */
    
    /*OBS note que:
    
    a) &var, onde var é alguma variável existente, Jamais Resultara em NULL.
    b)Embora null nao aponte para ninguem, ele é um valor
    que ocupa espaço quando armazenado dentro de um ponteiro.
    */
    
    
    pa = &a;
    
    /*Todo ponteiro pode ser tratado como se fosse um vetor, nem que seja
    como se fosse um vetor de posição!!
    */
    pa[0] = 37;
    
    printf("notacao vetor %d\n notacao ponteiro %d", pa[0], *pa);
    
    unsigned char *pb = (unsigned char *)pa;
    
    /* Enquanto pa pode ser tratado como um vetor
    de int de uma posição, pb pode ser tratado como
    um vetor de unsigned char de 4 posivoes,
    cada uma delas correspondendo a um dos 4 bytes
    da variavel a para quem tanto pa como pb apontam.
    */
    
    
    int a =5, b=2;
    
    printf("%d\b", ((float)a)/b);
    
    

    return 0;
}