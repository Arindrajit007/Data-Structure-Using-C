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
    int item,i;
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
    printf("Enter The Number You Want to Search - ");
    scanf("%d",&item);
    t=h;
    while (t!=NULL)
    {
        if (item==t->data)
        {
            printf("\nYour Data %d found on the list",t->data);
            getch();
            exit(0);
        }
        else
        {
            t=t->link;
        }
    }
    printf("\n\nDATA NOT FOUND\n\n");
    getch();
}
