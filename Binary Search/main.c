#include<stdio.h>
#include<conio.h>
void main()
{
 int f, l, M, size, i, Search, list[100];
 int j,temp;
 printf("Enter the size of the list: ");
 scanf("%d",&size);
 printf("Enter %d integer values \n", size);
 for (i = 0; i < size; i++)
 {
    scanf("%d",&list[i]);
 }
 for (i=0; i<size; i++)
 {
     for(j=0; j<size; j++)
     {
         if (list[i]<list[j])
         {
             temp=list[i];
             list[i]=list[j];
             list[j]=temp;
         }
     }
 }
 printf("\nIN ASCENSING ORDER:-\n");
 for (i=0; i<size; i++)
 {
     printf("%d , ",list[i]);
 }
 printf("NULL\n");
 printf("Enter value to be search: ");
 scanf("%d", &Search);
 f = 0;
 l = size - 1;
 M = (f+l)/2;
 while (f <= l)
 {
 if (list[M] < Search)
 f = M + 1;
 else if (list[M] == Search)
 {
 printf("Element found at index %d.\n",M);
 break;
 }
 else
 l = M - 1;
 M = (f + l)/2;
 }
 if (f > l)
 printf("Element Not found in the list.");
 getch();
}
