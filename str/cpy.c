#include<stdio.h>

int main()
{
int i;

char a[20]="abcdef";
char b[20];

for(i=0;a[i]!=0;i++)
{
b[i]=a[i];
}

printf("%s",b);

}
