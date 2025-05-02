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
    printf("\nEnter Your First Node - ");
    scanf("%d", &h->data);
    t=h;
    do
    {
        printf("\nMore Node - ? Y/N");
        ch=getch();
        if (ch!='y')
        {
            break;
        }
        else
        {
            x=(struct node*)malloc(sizeof(struct node));
            printf("\nDATA - ");
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
        printf("%d --> ",t->data);
        t=t->link;
    }
    printf("NULL");
};

struct node *delete_selection(struct node *h)
{
    struct node *t, *trail;
    t=h;
    trail=NULL;
    while (t->data==0)
    {
        h=h->link;
        free(t);
        t=h;
    }
    while (t!=NULL)
    {
        if (t->data != 0)
        {
            trail=t;
            t=t->link;
        }
        else
        {
            trail->link=t->link;
            free(t);
            t=trail->link;
        }
    }

    return h;

};


void main()
{
    struct node *h;
    h=create(h);
    printf("\n\n\n\n-----------------------YOUR DATA-----------------------\n\n\n\n");
    print(h);


    h=delete_selection(h);


    printf("\n\n\n-------------Your DATA After SELECTION DELETE--------------\n\n\n");
    print(h);
}
