#include <stdlib.h>
#include <stdio.h>
#define N 20

void displayGraph(char graph[N][N]);
int f(int i);

int main (void)
{   
	char graph[N][N]; 

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			graph[i][j] = ' ';
		}
	}

	for (int i = N; i < N; i++)
	{
		if (f(i) < N)
			graph[f(i)][i] = '@';

	}
	
	displayGraph(graph);

	return 0;
}

int f(int i)
{
	return i*i;
}


void displayGraph(char graph[N][N])
{
	for (int i = N - 1; i >= 0; i--)
	{
		for (int j = 0; j < N; j++)
		{
			printf("  %c", graph[i][j]);
		} 
		printf("\n");
	}	

	return;
}