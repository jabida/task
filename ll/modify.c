#include<stdio.h>
#include<stdlib.h>

#if 1
typedef struct linkedlist
{
int data ;
struct linkedlist *next;
}node;


void addmodify(node *n, int x)
{
while(n!=NULL)
{

printf("%d",n->data+x);
n=n->next;
}
}

int main()
{
node *head=NULL;
node *sec=NULL;
node *third=NULL;
int y=2;

head=malloc(sizeof(node));
sec=malloc(sizeof(node));
third=malloc(sizeof(node));

head->data=7;
head->next=sec;

sec->data=8;
sec->next=third;

third->data=9;
third->next=NULL;


addmodify(head,2);

}

#endif
