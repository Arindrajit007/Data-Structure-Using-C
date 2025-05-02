#include <stdio.h>

int main()
{
    int A[100];
    int B[100];
    int C[100];
    int i,j,temp;
    int lenA,lenB;
    int sort[10];
    printf("\nEnter Length of Array A - ");
    scanf("%d",&lenA);
    printf("\nInput Array A - \n");
    for (i=0; i<lenA; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("\nEnter Length of Array B - ");
    scanf("%d",&lenB);
    printf("\nInput Array B - \n");
    for (i=0; i<lenB; i++)
    {
        scanf("%d",&B[i]);
    }
    for (i=0; i<lenA; i++)
    {
        C[i]=A[i];
        C[i+lenA]=B[i];
    }
    for (i = 0; i < (lenA+lenB); ++i)
    {
        for (j = i + 1; j < (lenA+lenB); ++j)
        {
            if (C[i] > C[j])
            {
                temp =  C[i];
                C[i] = C[j];
                C[j] = temp;
            }
        }
    }
    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < (lenA+lenB); ++i)
    {
        printf("%d ", C[i]);
    }
}
