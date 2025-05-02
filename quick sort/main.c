#include<stdio.h>
#include<conio.h>
enum bool { FALSE,TRUE };
main()
{
    int elem[20],n,i;
    system("cls");
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&elem[i]);
        printf("\n");
    }
    printf("Unsorted list is :\n\n");
    show(elem,0,n-1);
    printf("\n");
    quick(elem,0,n-1);
    printf("Sorted list is :\n\n");
    show(elem,0,n-1);
    getch();
    printf("\n");
}


quick(int a[ ],int low, int up)
{
    int piv, temp, left, right;
    enum bool pivot_placed=FALSE;
    left=low;
    right=up;
    piv=low;
    if(low>=up)
        return;
        printf("Sublist : ");
        show(a,low,up);

    while(pivot_placed==FALSE)
    {
        while( a[piv]<=a[right] && piv!=right )
        right=right-1;
        if( piv==right )
            pivot_placed=TRUE;
                if( a[piv] > a[right] )
                {
                    temp=a[piv];
                    a[piv]=a[right];
                    a[right]=temp;
                    piv=right;
                }

        while( a[piv]>=a[left] && left!=piv )
        left=left+1;
        if(piv==left)
            pivot_placed=TRUE;
                if( a[piv] < a[left] )
                {
                    temp=a[piv];
                    a[piv]=a[left];
                    a[left]=temp;
                    piv=left;
                }

    }
    printf("-> Pivot Placed is %d -> ",a[piv]);
    show(a,low,up);
    printf("\n");
    quick(a, low, piv-1);
    quick(a, piv+1, up);
}


show(int a[ ], int low, int up)
{
    int i;
    for(i=low;i<=up;i++)
    printf("%d ",a[i]);
}
