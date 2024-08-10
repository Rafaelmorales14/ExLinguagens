#include <stdio.h>

int main()
{
	int valor, maior, menor;
	printf("Digite o primeiro numero: ");
	scanf("%d", &valor);
	maior = valor;
	menor = valor;
	printf("Digite o segundo numero: ");
	scanf("%d", &valor);
	if(valor > maior)
	{
		maior = valor;
	}
	if(valor < menor)
	{
		menor = valor;
	}
	printf("Digite o terceiro numero: ");
	scanf("%d", &valor);
	if(valor > maior)
	{
		maior = valor;
	}
	if(valor < menor)
	{
		menor = valor;
	}
	printf("Digite o quarto numero: ");
	scanf("%d", &valor);
	if(valor > maior)
	{
		maior = valor;
	}
	if(valor < menor)
	{
		menor = valor;
	}
	printf("Digite o quinto numero: ");
	scanf("%d", &valor);
	if(valor > maior)
	{
		maior = valor;
	}
	if(valor < menor)
	{
		menor = valor;
	}
	printf("O maior valor digitado foi %d e o menor foi %d", maior, menor);
	return 0;
}
