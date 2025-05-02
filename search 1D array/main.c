#include <stdio.h>
#include <stdlib.h>

void main()
{
    int A[100];
    int Inp,i,search;
    printf("\nEnter Number of Inputs - ");
    scanf("%d",&Inp);
    for (i=0; i<Inp; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("\nEnter the Number to Search - ");
    scanf("%d",&search);
    printf("\nYour Elements are - ");
    for (i=0; i<Inp; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    printf("\n");
    for (i=0; i<Inp; i++)
    {
        if (A[i]==search)
        {
            printf("\nYour Element is %d is in the position %d",search,i+1);
            break;
        }
    }
    printf("\nNo DATA Found....!!!!");
    getch();
}
