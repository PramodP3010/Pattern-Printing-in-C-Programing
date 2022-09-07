#include<stdio.h>

int main()
{
    for(int i=1; i<11; i++)
    {
        for(int l=10; l>i; l--)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
            if(j==1 || j==i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }

        }
        printf("\n");
    }
    for(int i=9; i>0; i--)
    {
        for(int m=10; m>i; m--)
        {
            printf(" ");
        }
        for(int n=1; n<=i ; n++)
        {
            if(n==1 || n==i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
