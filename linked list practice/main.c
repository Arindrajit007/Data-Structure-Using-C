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
    h=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter Your First node - ");
    scanf("%d",&h->data);
    t=h;
    do
    {
        printf("\nWnat to Enter More Data ?? Y/N\n");
        ch=getch();
        if (ch!='y' || ch != 'Y')
        {
            break;
        }
        else
        {
            x=(struct node*)malloc(sizeof(struct node));
            scanf("%d",&x->data);
            t->link=x;
            x=t;
        }
    }
    while (ch=='y' || ch == 'Y');
    t->link=NULL;
    t=h;
    while (t!=NULL)
    {
        printf("%d --> ", t->data);
        t=t->link;
    }
    printf("NULL");
}
