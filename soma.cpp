#include <stdio.h>

int soma(int a,int b)
{
	int soma;
	soma=a+b;
	printf("\n%d",soma);

	return 0;
}

int main()
{
	int a,b;
	printf("\n Entre com dois numeros: \n");
	scanf("%d %d",&a,&b);
	soma(a,b);

	return 0;

}
