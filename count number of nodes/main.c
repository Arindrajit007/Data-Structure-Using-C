#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void main()
{
    struct node *h,*x,*t;
    char ch;
    int count=0;
    printf("\nEnter Your First Node - ");
    h=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&h->data);
    count++;
    t=h;
    do
    {
        printf("\nDo YOU enter more Node - Y/N\n");
        ch=getch();
        if (ch!='y')
        {
            break;
        }
        else
        {
            printf("\nDATA - ");
            x=(struct node*)malloc(sizeof(struct node));
            scanf("%d", &x->data);
            count++;
            t->link=x;
            t=x;
        }
    }
    while (ch=='y');
    t->link=NULL;
    system("cls");
    t=h;
    printf("\n\n");
    while (t!=NULL)
    {
        printf("%d --> ", t->data);
        t=t->link;
    }
    printf("NULL\n");
    printf("Your Count Of Node - %d",count);
    getch();
}
