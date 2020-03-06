#include<stdio.h>
#include<stdlib.h>


typedef struct linkedlist
{
int data;
struct linkedlist  *next;
}node;


void add( int data,node **n)
{
node *temp=malloc(sizeof(node));
    temp->data=data;
    temp->next=*n;
    *n=temp;
}
     

void print(node *n)
{
while(n!=NULL)
{
printf("%d\n",n->data);
n=n->next;
}
}


void dup(node *n)
{
node *temp=n;
node *next_next;

if(temp==NULL)
{
printf("no data");
}

while(temp->next!=NULL)
{

if(temp->data==temp->next->data)
{
next_next=temp->next->next;
free(temp->next);

temp->next=next_next;
}


else 
{ 
temp = temp->next;  
} 

}


}



void rev(node **n)
{
node *temp=*n;
node *prev=NULL;
node *next=NULL;

while(temp!=NULL)
{
next=temp->next;
temp->next=prev;
prev=temp;
temp=next;
}

*n=prev;	

}



int main()
{

node *head=NULL;

add(5,&head);
add(5,&head);
add(6,&head);
add(11,&head);
add(11,&head);
add(7,&head);
add(7,&head);

print(head);

dup(head);

print(head);

rev(&head);

print(head);

}
