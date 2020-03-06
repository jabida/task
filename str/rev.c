#include<stdio.h>
#include<string.h>

int main()
{
int i,j,k;

char s[]="abcdef";
//int n=sizeof(s)/sizeof(s[0]);
char temp;
//j=n-1;

j=strlen(s)-1;

for(i=0;i<j;i++)
{

temp=s[i];
s[i]=s[j];
s[j]=temp;
j--;
}

printf("%s",s);

}

