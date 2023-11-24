/*
 * 2. Peça ao usuário para digitar três valores inteiros
 * e imprima a soma deles
 */

#include <stdio.h>

int main(){
	int valor1, valor2, valor3, soma = 0;

	printf("Informe o primeiro número: ");
	scanf("%d", &valor1);

	printf("Informe o segundo número: ");
	scanf("%d", &valor2);

	printf("Informe o terceiro número: ");
	scanf("%d", &valor3);

	soma = valor1 + valor2 + valor3;

	printf("A soma dos números informados é: %d", soma);

	return 0;
	}
