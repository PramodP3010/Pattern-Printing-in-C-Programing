#include<stdio.h>
int main()
{
	int n;
	printf("Enter number of Rows: ");
	scanf("%d",&n);
	printf("Floyt Triangle of %d rows is:\n",n);
	int value=1;
	for(int i=1; i<(n+1); i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf("%d\t",value);
			value++;
		}
		printf("\n");
	}
	return 0;
}
