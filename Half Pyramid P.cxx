#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of rows of pyramid: ");
	scanf("%d",&n);
	printf("Half pyramid of %d rows is:\n",n);
	for(int i=1; i<6; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	return 0;
}
