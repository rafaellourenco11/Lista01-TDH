#include <stdio.h>

int main (){
	
/*
	** Fun��o : Aumento do s�lario em 25%.
	** Autor : Rafael de OLiveira Louren�o
	** Data : 19/09/2024
	** Observa��es: 	
*/
	
	float salario, porcentagem, novo_salario;
	
	//ENTRADA 
	
	printf("Informe o Salario Atual: ");
	scanf(" %f",&salario);
	
	//PROCESSAMENTO
	porcentagem = salario * 0.25;
	novo_salario = salario + porcentagem;
	
	//SAIDA
	
	printf("S�lario anterio = %.2f \n",salario );
	printf("Novo Salario com aumento de 25 porcento = %.2f",novo_salario);
	
	return 0;
	
}
