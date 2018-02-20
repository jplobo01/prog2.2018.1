#include <stdio.h>

int main()
{
	int numeros[10];
	int qtd_maior_media, i;
	float media, soma=0;
	
	//etapa1-calcular media
	for(i=0;i<10;i++)
	{
		printf("\n Entre com os numeros:");
		scanf("%d", &numeros[i]); //acumula notas
		
		soma = soma + numeros[i];
		}	
	//etapa2- calcular media
	media = soma/10;
	
	//etapa3 - calcualar notas maiores que media
	for(i=0;i<10;i++)
	{
		if(numeros[i]>media)
			qtd_maior_media++;
	}
	//imprimir o resultado
	printf("\n Media da turma = %.2f", media);
	printf("\n Numero de alunos > media = %d", qtd_maior_media);
	
	return 0;
}
