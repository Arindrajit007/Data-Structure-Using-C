#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};


struct node *node_input(struct node *h, *t, *x)
{

    printf("\nEnter Your First Node - ");
    h=(struct node*)malloc(sizeof(struct node));
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
}
