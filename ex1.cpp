#include <stdio.h>

int main()
{
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	if(num % 5 == 0)
	{
		printf("O n�mero %d e divisivel por 5", num);
	}
	else
	{
		printf("O n�mero %d nao e divisivel por 5", num);
	}
	
	return 0;
}
