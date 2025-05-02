#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;

};



//struct node *h;

struct node *create(struct node *h)
{
    struct node *x, *t;
    char ch;
    printf("\nEnter Your First Node - ");
    h=(struct node*)malloc(sizeof(struct node));
    scanf("%d", &h->data);

    t=h;
    do
    {
        printf("\nDo YOU want to Enter More data - y/n\n");
        ch=getch();
        if (ch!='y')
        {
            break;
        }
        else
        {
            printf("DATA - ");
            x=(struct node*)malloc(sizeof(struct node));
            scanf("%d", &x->data);

            t->link=x;
            t=x;


        }
    }
    while (ch=='y');
    t->link=NULL;
    t=h;
    return (h);


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
    return;
};

struct node *concat(struct node *h1, struct node *h2)
{
    struct node *t;
    t=h1;
    while (t->link!=NULL)
    {
        t=t->link;
    }
    t->link=h2;
    while (t->link!=NULL)
    {
        t=t->link;
    }
    t->link=NULL;
    return (h1);

};





void main()
{
    struct node *nh, *t1, *t2, *h1, *h2, h3;
    int count=0;

    printf("\n\n\n-------------------Create Your First Node-------------------\n\n\n\n ");
    h1=create(h1);



    system("cls");


    printf("\n\n\n-------------------Create Your Second Node-------------------\n\n\n\n ");
    h2=create(h2);



    h1=print(h1);
    printf("\n\n");
    h2=print(h2);

    concat(h1,h2);
    print(h1);

}
