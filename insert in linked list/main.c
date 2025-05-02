#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void main()
{
    struct node *h,*x,*t, *in;
    char ch;
    int item,i,pos;
    h=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter Your First Node - ");
    scanf("%d",&h->data);
    t=h;
    do
    {
        printf("\nDo You Want to Enter More Data - Y/N\n");
        ch=getch();
        if (ch!='y')
        {
            break;
        }
        else
        {
            x=(struct node*)malloc(sizeof(struct node));
            printf("DATA - ");
            scanf("%d",&x->data);
            t->link=x;
            t=x;
        }
    }
    while (ch=='y');
    t->link=NULL;
    system("cls");
    t=h;
    printf("\n\n-------------------------YOUR DATA-----------------------------\n\n");
    while (t!=NULL)
    {
        printf("%d --> ",t->data);
        t=t->link;
    }
    printf("NULL");

    printf("\n\n");
    t=h;

    in=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter The DATA to be Inserted - ");
    scanf("%d", &in->data);
    printf("\nEnter the position You Want to Insert - ");
    scanf("%d", &pos);
    for (i=1; i<=pos-2; i++)
    {
        t=t->link;
    }
    in->link=t->link;
    t->link=in;

    t=h;

    while (t!=NULL)
    {
        printf("%d --> ",t->data);
        t=t->link;
    }
    printf("NULL");

    getch();
}
