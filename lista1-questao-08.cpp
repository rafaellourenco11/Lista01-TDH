#include <stdio.h>

int main(){
	
/*
	** Fun��o : Quinta parte de um n�mero Real.
	** Autor : Rafael de OLiveira Louren�o
	** Data : 18/09/2024
	** Observa��es: 	
*/
	
	float numero, quinta_parte;
	
	//ENTRADA 
	
	printf("Informe um numero: ");
	scanf(" %f",&numero);
	
	//PROCESSAMENTO
	
	quinta_parte = numero / 5.0;
	
	//SAIDA 
	
	printf("A quinta parte do: %.2f vale: %.2f ", numero, quinta_parte );
	
	return 0;
	
}
