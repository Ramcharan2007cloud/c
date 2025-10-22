#include<stdio.h>
void matrixrotation(int n)
{
	int mat[100][100],rot[100][100];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			rot[j][n-1-i]=mat[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",rot[i][j]);
		if(j!=n-1)
		{
			printf(" ");
		}
	}
	printf("\n");	
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	matrixrotation(n);
}
