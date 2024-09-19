#include <stdio.h>

int main(){
 /*
	** Função : Informar o dividendo, o divisor, o quociente e o resto.
	** Autor : Rafael de OLiveira Lourenço
	** Data : 18/09/2024
	** Observações: 	
*/
	
	int n1, n2;
	int quociente1, resto1, quociente2, resto2;
	
	//ENTRADA
	
	printf("Informe o Primeiro numero: ");
	scanf(" %d",&n1);
	printf("Informe o Segundo numero: ");
	scanf(" %d",&n2);
	
	//PROCESSAMENTO
	
	quociente1 = n1 / n2;
	resto1 = n1 % n2;
	
	quociente2 = n2 / n1;
	resto2 = n2 % n1;
	
	//SAIDA
	
	printf("\n =========== Dividindo o Primeiro pelo Segundo ===========\n");
	printf("Dividendo: %d \n", n1);
	printf("Divisor: %d \n", n2);
	printf("Quociente: %d \n", quociente1);
	printf("Resto %d: \n", resto1);
	
	printf("\n =========== Dividindo o Segundo pelo primeiro ===========\n");
	printf("Dividendo: %d \n", n2);
	printf("Divisor: %d \n", n1);
	printf("Quociente: %d \n", quociente2);
	printf("Resto: %d \n", resto2);
	
	return 0;
}
