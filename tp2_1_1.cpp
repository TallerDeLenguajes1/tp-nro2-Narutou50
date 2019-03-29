#include <stdio.h>
#include <stdlib.h>
#define N 4
#define M 5

int main(void){
	Int f,c;
	Double mt[N][M];
	…
	for(f = 0;f<N; f++)
	{
		 for(c = 0;f<M; f++)
		{
			cprintf(“%lf ”, mt[f][c]);
		}
		cprintf(“\n”);
	}
};
