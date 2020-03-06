#include<stdio.h>


int main()
{
int i,c=0;
char a[10],b[10];
//char a[10]="jabida";
//char b[10]="shaik";
printf("enter the first string");
gets(a);
printf("enter the second string");
gets(b);

//whole string cmp

for(i=0;a[i]!='\0' || b[i]!='\0';i++)
{
if(a[i]!=b[i])
c++;
}

if(c==0)
{
printf("strings are not equal");
}
else
{
printf("strings are not eqal");
}

}







//each element compare
/*for(i=0;a[i]!='\0';i++)
{
if(a[i]==b[i])
{
printf("element is equal\n");
}
else
{
printf("not equal\n");
}
}
}*/

