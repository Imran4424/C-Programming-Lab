#include <stdio.h>
#define ROW 4
#define COLUMN 4

int main()
{
	int matrix A[ROW][COLUMN];
	int matrix B[ROW][COLUMN];
	int matrix C[ROW][COLUMN];
	int i,j;
	printf("enter the  value of matrix A \n");
	for(i=0;i<=ROW;i++){
		for (j=0;j<=COLUMN;j++){
		scanf("%d",&matrix A[i][j]);
		}
	}
	printf("printing matrix A \n);
	for(i=0;i<=ROW;i++){
		for (j=0;j<=COLUMN;j++){
		printf("%d",matrix A[i][j]);
		}
		printf("\n");
	}
	
	printf("enter the value of matrix B\n");	
	for(i=0;i<=ROW;i++){
		for (j=0;j<COLUMN;j++){
		scanf("%d",&matrix B[i][j]);
		}
	}	
	printf(printing matrix B\n);
	for(i=0;i<ROW;i++){
		for (j=0;j<COLUMN;j++){
		printff("%d",matrix B[i][j]);
		}
		printf("\n");
	}	
	for(i=0;i<ROW;i++){
		for (j=0;j<COLUMN;j++){
		matrix C[i][j]=matrix A[i][j]+matrix B[i][j];
		}
	}	
	printf("A+B is \n");
	for(i=0;i<ROW;i++){
		for (j=0;j<COLUMN;j++){
		printf("%d",matrix C[i][j]);
		}
		printf("\n");
	}
	return 0;
	}
		
		
		
		
		
	
