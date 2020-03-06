#include<stdio.h>
#include<stdlib.h>


#if 0
typedef struct linkedlist 
{
int data;
struct linkedlist *next;
}node;


void prints(node *n)
{
while(n!=NULL)
{
printf("%d",n->data);
n=n->next;
}

}


int main()
{
node *head=NULL;
node *sec=NULL;
node *third=NULL;

head=malloc(sizeof(node));
sec=(node *)malloc(sizeof(node));
third=(node *)malloc(sizeof(node));

head->data=4;
head->next=sec;


sec->data=5;
sec->next=third;


third->data=6;
third->next=NULL;

prints(head);

} 


#endif










#if 1
struct node
{
int data;
struct node *next;
};



void  prints(struct node *n)
{

while(n!=NULL)
{
printf("%d",n->data);
n=n->next;
}

}



int main()
{
struct node *head=NULL;
struct node *sec=NULL;
struct node *third=NULL;

head=malloc(sizeof(struct node));
sec=(struct node *)malloc(sizeof(struct node));
third=(struct node *)malloc(sizeof(struct node));

head->data=1;
head->next=sec;

sec->data=2;
sec->next=third;

third->data=3;
third->next=NULL;

prints(head);


}

#endif


