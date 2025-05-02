#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    struct node *link;
};

void main()
{
    int i,dat;
    int s=0;
    struct node *h,*x,*t;
    char ch='y';
    h=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter Your 1st node - ");
    scanf("%d",&h->data);

    t=h;
    s=s+h->data;
    do
    {
        printf("\nDo You Want to Insert More Node? y/n\n");
        ch=getch();
        if (ch!='y')
        {
            break;
        }
        else
        {
            x=(struct node*)malloc(sizeof(struct node));
            scanf("%d",&x->data);
            s=s+x->data;
            t->link=x;
            t=x;
        }

    }

    while (ch=='y');
    t->link=NULL;
    t=h;
    system("CLS");
    printf("\n\n\n----------------------YOUR DATA--------------------\n\n\n");
    while (t!=NULL)
    {
        printf("%d --> ", t->data);
        t=t->link;
    }
    printf("NULL");
    printf("\n\nSUM of the DATA - %d",s);


}
