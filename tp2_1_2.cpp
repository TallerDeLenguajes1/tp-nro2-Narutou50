#include <stdio.h>
#include <stdlib.h>
#define N 4
#define M 5

int main(){
	int f,c,d,g;
	double mt[N][M];
	for(f = 0;f<N; f++)
	{
		 for(c = 0;c<M; c++)
		{
			mt[f][c]=rand()%51;
		}
		c = 0;
	}
	for(d = 0;d<N; d++)
	{
		 for(g = 0;g<M; g++)
		{
			printf("%lf ", mt[d][g]);
		}
		g = 0;
		printf("\n");
	}
};