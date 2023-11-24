//Aula sobre variáveis

#include <stdio.h>

int main(){
	//declarando variáveis
	//int idade; //inteiro

	//declarando e inicializando variáveis
	int idade = 0;

     //Função para escrever um texto de saída padrão (console)
	printf("Qual a sua idade?"); // o ponto e vírgula finaliza um comando

	//Receber dados
	scanf("%d", &idade);

	printf("A sua idade é %d\n", idade);

	return 0;
} //fim do bloco
