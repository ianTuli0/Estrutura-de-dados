#include <stdio.h>
#include <stdlib.h>


int main () {
	
	  /*
	   Operador &: usado para ler o endereço de memória de uma 
	   variável data.
	  */
	
		int a = 2;
		
		//declaração de uma variável de ponteiro, isto é , uma variável destinada a armazenar
		// um endereço de memória
		
		int *p;
		
		//Na declaração acima , a presença do * indica que
		//p irá armazenar endereços de memória. Já o int 
		//indica o tipo da variável que se espera encontrar
		//No endereço armazenado por p.
		//Note que não incializamos o ponteiro. ISSO É GRAVISSIMO.
		//So faça isso se estiver ensinando ponteiros.
		
		p = &a;
		
		printf("%p\n",  &a); //imprime o endereço da variável a
		return 0;
	
	
	
	return 0;
}
