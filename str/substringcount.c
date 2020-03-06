#include<stdio.h>

int main()
{
char a[30],b[30],i,j,count=0,m,n,count1;
printf("enter the first string");
gets(a);
printf("enter the sub string");
gets(b);
m=strlen(a);
n=strlen(b);


for(i=0;i<m;i++)
{
while(a[i]==b[j])
{
 count++;
 j++;
}

if(count==n)
{
count1++;
count=0;
}
else
i++;


}
printf("%s occurs %d times in %s",b,count,a);

}
