#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of rows of pyramid: ");
	scanf("%d",&n);
	printf("Full pyramid of %d rows is:\n",n);
	for(int i=1; i<=n;i++)
	{
		for(int j=1; j<=(2*n-1); j++)
		{
		  if((n-i)<j && (n+i)>j)
		  {printf("%c\t",'*');}
		  else
		 { printf("\t");}
		}
	   printf("\n");
	}
	return 0;
}
