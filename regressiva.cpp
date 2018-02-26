#include <stdio.h>

void contagem_regressiva(int ini)
{
	int i;
		for(i=ini; i>0; i--)
		printf("\n %d", i);
		
		printf("\n Boom!!");
		
	
}
int main()
{
	contagem_regressiva(10);
	contagem_regressiva(5);
	contagem_regressiva(8);
	
	return 0;

}
