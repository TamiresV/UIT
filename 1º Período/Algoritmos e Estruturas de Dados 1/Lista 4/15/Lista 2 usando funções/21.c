#include <stdio.h>
#include <stdlib.h>

void triangulo (int a)
{
    int i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(i+j>=a-1||i==a-1||j==a-1)
            {
                printf(" o");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main(int argc,char**argv)
{
    int a;
    printf("Entre com um numero\n");
    scanf(" %d",&a);
    triangulo(a);
    system("pause");
    return 0;
}
