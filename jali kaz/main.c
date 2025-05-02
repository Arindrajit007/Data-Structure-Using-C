#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *create(struct node *h)
{
	char c;
    struct node *x, *t;
    int ch,a =1 ;
    fflush(stdin);
    h=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter Your First Node - ");
    scanf("%d", &h->data);
    t=h;
    x=t;
    while (a)
    {
    	fflush(stdin);
            x=(struct node*)malloc(sizeof(struct node));
            printf("press n to exit entering data to list");
            printf("\nDATA - ");
            scanf("%c", &c);
            if(c==78 || c== 110)
            {
            	a=0;
			}
			else if(c>=0 && c<=47 || (c>=58 && c!=78 && c!= 110))
			{
                return;
			}
			else
			{
				a=1;
				x->data=(int)c;
				t->link=x;
            	t=x;
            }
    }


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

struct node *merge_sorted(struct node *h1, struct node *h2)
{
    struct node *t1, *t2, *t3, *h3;
    t1=h1;
    t2=h2;

    if (!h1)
        return h2;
    if (!h2)
        return h1;

    if (h1->data < h2->data)
    {
        h1->link = merge_sorted(h1->link, h2);
        return h1;
    }
    else
    {
        h2->link = merge_sorted(h1, h2->link);
        return h2;
    }

};



void main()
{
    struct node *h1, *h2, *h3;
    printf("\n\n\n----------------------Enter First List---------------------\n\n\n");
    h1=create(h1);
    system("cls");
    printf("\n\n\n----------------------Enter Second List---------------------\n\n\n");
    h2=create(h2);
    system("cls");

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



