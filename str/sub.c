#include<stdio.h>
#include<string.h>

int main()
{
int i,j,m,n;
char a[20]="IAM  AN INDIAN";
char b[20]="AN";
m=strlen(a);
n=strlen(b);

for(i=0;i<m-n;i++)
{
for(j=0;j<n;j++)
if(a[i+j]!=b[j])
break;


if(j==n)
printf("%d",i);

}

}
