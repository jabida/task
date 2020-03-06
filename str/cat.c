#include<stdio.h>

int main()
{
int i,j;
char a[10]="shaik";
char b[10]="jabida";

while(a[i]!='\0')
{
i++;
}

while(b[j]!='\0')
{
a[i++]=b[j++];
}

a[i]!='\0';

printf(" after strings  are concatenate\n");
printf("\n%s",a);

}

