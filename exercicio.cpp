#include <stdio.h>


int soma(int num1, int num2)
{
	return (num1+num2);
}

int main()
{
	int a,b,y;
	
	printf("\n Entre com dois numeros:");
	scanf("%d %d", &a, &b);
	
	y = soma(a,b);
	printf("\n A soma é: %d",y);
	
	
	return 0;

}
