#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *create (struct node *h)
{
    struct node *x,*t;
    char ch;
    printf("\nEnter Your First Node - ");
    h=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&h->data);
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
            t->link=x;
            t=x;
        }
    }
    while (ch=='y');
    t->link=NULL;
    t=h;
    return h;
};


struct node *print(struct node *h)
{
    struct node *t;
    t=h;
    while (t!=NULL)
    {
        printf("%d --> ",t->data);
        t=t->link;
    }
    printf("NULL");
};

struct node *merge_sorted(struct node *h1, struct node *h2)
{
    struct node *t1, *t2;
    t1=h1;
    t2=h2;

    if (!t1)
        return t2;
    if (!t2)
        return t1;

    if (t1->data < t2->data)
    {
        t1->link = merge_sorted(t1->link, t2);
        return t1;
    }
    else
    {
        t2->link = merge_sorted(t1, t2->link);
        return t2;
    }

};



void main()
{
    struct node *h1, *h2, *h3;
    printf("\n\n\n----------------------Enter First List in Ascending Order---------------------\n\n\n");
    h1=create(h1);
    //system("cls");
    printf("\n\n\n----------------------Enter Second List in Ascending Order---------------------\n\n\n");
    h2=create(h2);
    //system("cls");
    printf("\n\n\n\n-----------------------YOUR DATA 1-----------------------\n\n\n\n");
    print(h1);
    printf("\n\n\n\n-----------------------YOUR DATA 2-----------------------\n\n\n\n");
    print(h2);
    printf("\n\n\n\n");
    h3=merge_sorted(h1,h2);
    printf("\n\n\n\n----------------------------------------------------------------------\n\n\n\n----------------YOUR DATA IN SORTED ORDER----------------\n\n\n\n");
    print(h3);
    getch();
}



