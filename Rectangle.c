#include<stdio.h>

int main()
{
    for(int i=1; i<11; i++)
    {
        for(int j=1; j<11; j++)
        {
            if(j==1 || j==10 || i==10 || i==1)
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
