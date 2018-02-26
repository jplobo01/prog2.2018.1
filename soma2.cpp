#include <stdio.h>


int soma(int num1, int num2)
{
	return num1+num2;
}

int main()
{
	int res;
	
	res = soma(8,5);
	printf("\n Soma=%d", res);
	res = soma(88, 5);
	printf("\n Soma=%d", res);
	res = soma(15, 8);
	printf("\n Soma=%d",res);

	
	return 0;

}
