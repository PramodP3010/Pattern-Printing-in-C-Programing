#include<stdio.h>

int main()
{
    for(int i=0; i<11; i++)
    {
        for(int k=10-i; k>0; k--)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
            if(j==1 || j==i || i==10)
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
