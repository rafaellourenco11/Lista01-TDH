#include <stdio.h>

int main(){
 /*
	** Fun��o : M�dia de 5 valores inteiros
	** Autor : Rafael de OLiveira Louren�o
	** Data :18/09/2024
	** Observa��es:
	
*/	
	int n1, n2, n3, n4, n5;
	float media;
	
	//ENTRADA 
	printf("Informe o primeiro numero: ");
	scanf(" %d",&n1);
	printf("Informe o segundo numero: ");
	scanf(" %d",&n2);
	printf("Informe o terceiro numero: ");
	scanf(" %d",&n3);
	printf("Informe o quarto numero: ");
	scanf(" %d",&n4);
	printf("Informe o quinto numero: ");
	scanf(" %d",&n5);
	
	//PROCESSAMENTO
	
	media = (n1 + n2 + n3 + n4 + n5) / 5.0;
	
	//SAIDA
	
	printf("A m�dia entre os numeros digitados �: %.2f", media);
	
	
	
	
	return 0;
		
	
}
