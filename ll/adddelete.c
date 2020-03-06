#include<stdio.h>
#include<stdlib.h>

typedef struct linkedlist
{
int data;
struct linkedlist *next;
}node;



void f1()
{
node *start=NULL;
add(5,&start);
add(6,&start);
add(7,&start);
add(8,&start);
view(start);
delete(7,&start);
view(start);
}

void add(const int i,node **ptr)
{
node *temp;
temp=malloc(sizeof(node));
temp->data=i;
temp->next=*ptr;
*ptr=temp;
}


void view(node *start)
{
while(start!=NULL)
{
printf("%d",start->data);
start=start->next;
}

}


void delete(const int i,node **n)
{

node *temp=*n,*prev;
while(temp!=NULL&&temp->data==i)
{
*n=temp->next;
free(temp);
}

while(temp!=NULL&&temp->data!=i)
{
prev=temp;
temp=temp->next;
}

if(temp==NULL)
return;

prev->next=temp->next;
free(temp);


}



int main()
{
 
 f1();

}
