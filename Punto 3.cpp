#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 15

void main(){
	int f,c,g;
	srand(time(NULL));
	int **punt=(int **) malloc(sizeof(int*) * N);
	int *vec= (int *) malloc(sizeof(int) * N);
	for(f = 0;f<N; f++)
	{
		int conta=0;
		int M = rand()%10+5;
		int *punt=(int *) malloc(sizeof(int)* N*M);
		for(c = 0;c<M; c++)
		{
			*(punt+(f*M+c))=rand()%899+100;
			printf("%d ",*(punt+(f*M+c)));
			if((*(punt+(f*M+c))%2)==0){
				conta++;
			}
		}
		*(vec + f)= conta;
		c = 0;
		printf("\n");
	}
	printf("Cantidad de pares por fila: \n");
	for (g=0;g<N; g++){
		int num = g+1;
		printf("fila numero %d: %d\n",num,*(vec+g));
	}
};