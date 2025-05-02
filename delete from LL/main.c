#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void main()
{
    struct node *h, *x, *t;
    char ch;
    int del, i, temp;
    printf("\nEnter First Node - ");
    h=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&h->data);
    t=h;
    do
    {
        printf("\nWant to Enter More Node - ");
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
            t->link=x;
            t=x;
        }

    }
    while (ch=='y');
    t->link=NULL;
    system("cls");
    t=h;
    while (t!=NULL)
    {
        printf("%d -->",t->data);
        t=t->link;
    }
    printf("NULL\n\n\n");

    printf("Enter The Node You Want to Delete - ");
    scanf("%d", &del);


    if(del==1)
    {
        t=h->data; //
        h=h->link;
        t=h;
    }

    else
    {
        for (i=1; i<=del-2; i++)
        {
            t=t->link;
        }
        x=t->link;
        t=x->data; //
        t->link=x->link;
        free(x);
        t=h;
    }
    while (t!=NULL)
    {
        printf("%d --> ", t->data);
        t=t->link;
    }
    printf("NULL\n\n");
    printf("Data Of Deleted Node - %d\n\n", temp);
}
