#include <stdio.h>
#include <stdlib.h>

int multiply(int x, int y)
{
    int s=0;
    if (y==0 || x==0)
    {
        return 0;
    }
    else
        return (x + multiply(x, y-1));

}
void main()
{
    int z1,z2;
    printf("\nEnter First number - ");
    scanf("%d",&z1);
    printf("\nEnter Second Number - ");
    scanf("%d",&z2);
    multiply(z1,z2);
    printf("%d",multiply);
}
