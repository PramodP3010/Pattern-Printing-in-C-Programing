#include<stdio.h>

int main()
{
    for(int i=1; i<11; i++)
    {
        for(int m=0; m<i; m++)
        {
            printf(" ");
        }
        for(int n=1; n<11; n++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

