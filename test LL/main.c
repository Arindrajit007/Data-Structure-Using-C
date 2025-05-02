#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *h,*x,*t,*n,*temp;
//struct node *disp(struct node *s);
//struct node *del(struct node *s);
//struct node *inst(struct node *s);
struct node *create(struct node *h)
{
    char ch;
    int pos,c;
    system("cls");

        printf("Enter Your First Data: ");
        h=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&h->data);
        t=h;
        //fflush(stdin);
        do
        {
	   	printf("\nDo you want to add another item to the list Y/N:  ");
	   	ch=getch();
	   	system("cls");
	   	if(ch!='y')
	   	{
	   		break;
		}
		else
		{
			system("cls");
			printf("\nData---> ");
			x=(struct node*)malloc(sizeof(struct node));
			scanf("%d",&x->data);
			t->link=x;
			t=x;
			//fflush(stdin);
		}
	   }
	   while(ch=='y');
	   t->link=NULL;
	   //system("cls");
	   t=h;
	   return h;
};


struct node *disp(struct node *s)
{
	printf("DATA---->");
	t=s;
	while(t!=NULL)
	{
		printf("%d  ",t->data);
		t=t->link;
	}
	printf("NULL");
};

void main()
{
    int c;

    do

    {
		printf("MENU\n");
		printf("1 for Create\n");
		printf("2 for Delete\n");
		printf("3 for Display\n");
		printf("4 for Exit \n");
		printf("\nEnter Choice - ");
		scanf("%d",&c);
		switch(c)
		{
			case 1: h=create(h);
                    break;
			case 2: break;
			case 3: disp(h);
                    printf("\n\n");
                    break;
			case 4:
                    exit(0);
                    break;
			default:printf("Wrong Choice : Enter again \n");
                    break;
		}
		//fflush(stdin);
    }
    while(1);
}
