#include<stdio.h>
#include<stdlib.h>



typedef struct linkedlist
{
int data;
struct linkedlist *next;
}node;


void loop(node *n)
{
node *slow=n;
node *fast=n;
while(slow && fast && fast->next)
{
slow=slow->next;
fast=fast->next->next;
if(slow==fast){
printf("loop");
}
}
printf("not loop");

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

//prints(head);

head->next->next->next->next->next->next=sec;

loop(head);

}



