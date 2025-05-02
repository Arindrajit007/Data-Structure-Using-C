#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[100][100];
    int row,col;
    int i,j;
    int max=0;
    int min;
    printf("\nEnter Columns - ");
    scanf("%d",&col);
    printf("\nEnter Rows - ");
    scanf("%d",&row);
    printf("\nEnter Your Numbers - ");
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nYour Entered Numbers = \n");
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("%3d ",A[i][j]);
            if (A[i][j]>max)
            {
                max=A[i][j];
            }
            if (A[i][j]<min)
            {
                min=A[i][j];
            }
        }
        printf("\n");
    }
    printf("\nMax = %d",max);
    printf("\nMin = %d",min);
    getch();

}
