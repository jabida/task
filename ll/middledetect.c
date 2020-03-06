#include<stdio.h>
#include<stdlib.h>

#if 1

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


void findmiddle(node *n)
{

node *slow=n;
node *fast=n;
if(n!=NULL)
{
while(fast!=NULL && fast->next!=NULL)
{
fast=fast->next->next;
slow=slow->next;
}

printf("%d",slow->data);
}

}



int main()
{
node *head=NULL;
node *sec=NULL;
node *third=NULL;
node *fourth=NULL;
node *fif=NULL;
node *six=NULL;
node *seven=NULL;

head=malloc(sizeof(node));
sec=(node *)malloc(sizeof(node));
third=(node *)malloc(sizeof(node));
fourth=(node *)malloc(sizeof(node));
fif=(node *)malloc(sizeof(node));
six=(node *)malloc(sizeof(node));
seven=(node *)malloc(sizeof(node));

head->data=4;
head->next=sec;

sec->data=5;
sec->next=third;


third->data=6;
third->next=fourth;

fourth->data=7;
fourth->next=fif;

fif->data=8;
fif->next=seven;

seven->data=9;
seven->next=NULL;


prints(head);
findmiddle(head);

} 


#endif

