#include<stdio.h>
#include<stdlib.h>

//delete first node normally

#if 0
typedef struct linkedlist
{
int data;
struct linkedlist *next;
}node;


void addmodify(node *n,int x)
{
while(n!=NULL)
{
printf("%d\n",n->data);
//printf("%d\n",n->data+x);
n=n->next;
}
}


void deletefirst(node *n)
{
if(n!=NULL)
{
node *temp=n;
n=n->next;
free(temp);
}
//return n;
}



int main()
{

node *head=NULL;
node *sec=NULL;
node *third=NULL;
node *fourth=NULL;

int y=2,a;

head=malloc(sizeof(node));
sec=malloc(sizeof(node));
third=malloc(sizeof(node));
fourth=malloc(sizeof(node));

head->data=9;
head->next=sec;

sec->data=8;
sec->next=third;

third->data=10;
third->next=fourth;

fourth->data=7;
fourth->next=NULL;


addmodify(head,2);
deletefirst(head);


addmodify(head,2);

}
#endif

//delete first node using double pointer
#if 0

typedef struct linkedlist
{
int data;
struct linkedlist *next;
}node;

//using double pointer to delete
void deletefirst(node **n)
{
if(*n!=NULL)
{
node *temp=*n;
     *n=(*n)->next;
     free(temp);
}
}




int main()
{

node *head=NULL;
node *sec=NULL;
node *third=NULL;
node *fourth=NULL;



head=malloc(sizeof(node));
sec=malloc(sizeof(node));
third=malloc(sizeof(node));
fourth=malloc(sizeof(node));

head->data=9;
head->next=sec;

sec->data=8;
sec->next=third;

third->data=10;
third->next=fourth;

fourth->data=7;
fourth->next=NULL;

deletefirst(head);
}
#endif


//delete header next data

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
printf("%d\n",n->data);
n=n->next;
}

printf("NULL");
}


void deletepos(node *pos)
{

if(pos==NULL)
{
printf("not possible delete");
}

else
{
if(pos->next==NULL)
{
printf("not possibe delete no");
}

else
{
node *temp=pos->next;
      pos->data=pos->next->data;
      pos->next=pos->next->next;
      free(temp);
}

}

}



int main()
{

node *head=NULL;
node *sec=NULL;
node *third=NULL;
node *fourth=NULL;



head=malloc(sizeof(node));
sec=malloc(sizeof(node));
third=malloc(sizeof(node));
fourth=malloc(sizeof(node));

head->data=9;
head->next=sec;

sec->data=8;
sec->next=third;

third->data=10;
third->next=fourth;

fourth->data=7;
fourth->next=NULL;

node *del=head->next;

prints(head);

deletepos(del);

prints(head);

}

#endif



//given no delete

#if 0

typedef struct linkedlist
{

int data;
struct linkedlist  *next;
}node;


void prints(node *n)
{
while(n!=NULL)
{
printf("%d\n",n->data);
n=n->next;
}
}

void delete(node **n, int val)
{

node *temp=*n,*prev;
if(temp!=NULL&&temp->data==val)
{
      *n=temp->next;
      free(temp);
}

while(temp!=NULL&&temp->data!=val)
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

node *head=NULL;
node *sec=NULL;
node *third=NULL;
node *fourth=NULL;

head=malloc(sizeof(node));
sec=malloc(sizeof(node));
third=malloc(sizeof(node));
fourth=malloc(sizeof(node));

head->data=2;
head->next=sec;

sec->data=3;
sec->next=third;

third->data=4;
third->next=fourth;

fourth->data=5;
fourth->next=NULL;

prints(head);
delete(&head,4);
prints(head);


}

#endif


//position given no delete

#if 1

typedef struct linkedlist
{

int data;
struct linkedlist  *next;
}node;



void prints(node *n)
{
while(n!=NULL)
{
printf("%d\n",n->data);
n=n->next;
}
}


void delete(node **n, int pos)
{
int i;

if(*n==NULL)
return;

node *temp=*n;

if(pos==0)
{
*n=temp->next;
free(temp);
}


for(i=0;temp!=NULL&&i<pos-1;i++)
temp=temp->next;

//if(temp==NULL || temp->next==NULL)
//return;

node *next=temp->next->next;

free(temp->next);
temp->next=next;

}




int main()
{

node *head=NULL;

node *sec=NULL;
node *third=NULL;
node *fourth=NULL;

head=malloc(sizeof(node));
sec=malloc(sizeof(node));
third=malloc(sizeof(node));
fourth=malloc(sizeof(node));


head->data=7;
head->next=sec;

sec->data=8;
sec->next=third;

third->data=9;
third->next=fourth;

fourth->data=10;
fourth->next=NULL;

prints(head);
delete(&head,3);
prints(head);

}

#endif




