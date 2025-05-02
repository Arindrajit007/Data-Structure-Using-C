#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *create(struct node *h)
{
    struct node *x, *t;
    char ch;
    h=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter Your 1st Node - ");
    scanf("%d", &h->data);
    t=h;
    do
    {
        printf("\nEnter More Data - ? Y/N");
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
    return h;
};


struct node *print(struct node *h)
{
    struct node *t;
    t=h;
    while (t!=NULL)
    {
        printf("%d --> ", t->data);
        t=t->link;
    }
    printf("NULL");
};


struct node *split(struct node *h, int pos)
{
    struct node *t, *h2;
    int i;
    t=h;
    for (i=1; i<=pos-2; i++)
    {
        t=t->link;
    }
    h2=t->link;
    t->link=NULL;

    printf("\n\n 1st Portion of Splitted List - ");
    print(h);
    printf("\n\n 2nd Portion of Splitted List - ");
    print(h2);
    printf("\n\n\n\n\n\n\n");
};


void main()
{
    struct node *h;
    int pos;
    h=create(h);
    printf("\n\n\n--------------------YOUR DATA--------------------\n\n\n");
    print(h);

    printf("\n\n\nEnter Position Of Splitting - ");
    scanf("%d", &pos);
    split(h,pos);
}
