#include <stdio.h>
void main()
{
    system("cls");
    int row, col,i,j,sparse[row][col],size=0;
    int matrix[50][50], k=0;
    printf("Enter Rows - ");
    scanf("%d", &row);
    printf("Enter Columns - ");
    scanf("%d", &col);
    system("cls");
    for (i=0; i<row; i++)
    {
        printf("\nEnter %d Array - ",(i+1));
        for (j=0;j<col;j++)
        {
            scanf("%d",&sparse[i][j]);
        }
    }
    system("cls");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(sparse[i][j]!=0)
            {
                size++;
            }
        }
    }
   // Defining final matrix
    matrix[3][size];
   // Computing final matrix
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(sparse[i][j]!=0)
            {
                matrix[0][k] = i;
                matrix[1][k] = j;
                matrix[2][k] = sparse[i][j];
                k++;
            }
      }
    }
   // Displaying the final matrix
    for(int i=0 ;i<3; i++)
    {
            if (i==0)

                printf("ROW - \t\t");

            else if (i==1)

                printf("Column - \t");

            else if (i==2)

                printf("Value - \t");

                for(int j=0; j<size; j++)
                {
                    printf("%d ", matrix[i][j]);
                    printf("\t");
                }
                printf("\n-----------------------------------------------------------------------------------------\n");
    }
    getch();
}
