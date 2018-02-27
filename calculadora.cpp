#include <stdio.h>

int soma(int num1, int num2)
{
	return(num1+num2);
}
int sub(int num1, int num2)
{
	return(num1-num2);
}
int menu()
{
	int opc;
	
	printf("\n************");	
	printf("\n Calculadora");
	printf("\n************");
	printf("\n Tecle 1 pra soma:");
	printf("\n Tecle 2 pra subtraçao:");
	printf("\n Tecle 0 pra sair:");
	printf("\n************");
	
	do
	{	
	printf("\n Escolha uma opçao");
	scanf("%d", &opc);
	}while(opc<0 || opc>2);
	
	return opc;	
	
}

int main()
{	
	int m,num1,num2;
	
	m = menu();
	if(m==0)
		return 0;
	else
	{
		printf("\n Entre com num1:");
		scanf("%d",&num1);
		
		printf("\n Entre com num2:");
		scanf("%d",&num2);
	if(m==1)
		printf("\n Soma=%d", soma(num1, num2));
	else
		printf("\n Subtraçao=%d", sub(num1, num2));	
	}
	return 0;
}
