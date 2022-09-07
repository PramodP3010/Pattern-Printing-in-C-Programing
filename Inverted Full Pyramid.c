#include<stdio.h>

int main()
{
    for(int i=10; i>0; i--)
    {
        for(int k=10-i; k>0; k--)
        {
            printf(" ");
        }
        for(int j=1; j<i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
