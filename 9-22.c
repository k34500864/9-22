#include<stdio.h>
#include<stdlib.h>
#define ROW 2
#define COL 2
void add(int A[][COL], int B[][COL], int C[][COL]);
void num_for_(int A[][COL], int B[][COL], int C[][COL]);
int main(void) {
	int i, j;
	int a[ROW][COL], b[ROW][COL], c[ROW][COL];
	num_for_(a, b, c);
	add(a, b, c);
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}
void add(int A[][COL], int B[][COL], int C[][COL]){
	int i, j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
}
void num_for_(int A[][COL], int B[][COL], int C[][COL]) {
	int i, j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			C[i][j] = rand() % 22 + 1;
			A[i][j] = rand() % 22 + 1;
			B[i][j] = rand() % 22 + 1;
		}
	}
}
