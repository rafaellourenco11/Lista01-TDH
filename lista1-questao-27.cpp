#include <stdio.h>

int main(){
	
/*
	** Fun��o : Calcular e Imprimir o sal�rio l�quido do Pobre Professor.
	** Autor : Rafael de OLiveira Louren�o
	** Data : 19/09/2024
	** Observa��es: 	
*/
	
	float valor_hora_aula, desconto_inss, percentual_inss;
	float salario_bruto, salario_liquido;
	int aulas_mes;
	
	//ENTRADA

	printf("Informe o valor Hora-Aula: ");
	scanf(" %f",&valor_hora_aula);
	printf("Informe o Numero de Aulas dada no Mes: ");
	scanf(" %d",&aulas_mes);
	printf("Infome o valor do desconto do INSS: ");
	scanf(" %f",&percentual_inss);

	//PROCESSAMENTO 
	
	salario_bruto = valor_hora_aula * aulas_mes;
	desconto_inss = (percentual_inss / 100) * salario_bruto;
	salario_liquido = salario_bruto - desconto_inss;
	
	//SAIDA
	
	printf("Total Salario Bruto = %.2f \n",salario_bruto);
	printf("Total Salario com Desconto do INSS = %.2f \n",desconto_inss);
	printf("Total Salario Liquido do Pobre Professor = %.2f",salario_liquido);
	
	return 0;
	
}
