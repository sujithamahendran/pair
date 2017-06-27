#include<stdio.h>
int main()
{
int a[1000],d,n,i,t,x,y,sum=0,sum1=0;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
t=n/2;
for(i=0;i<=t;i++)
{
sum=sum+a[i];
x=sum/t;
}
for(i=t;i<n;i++)
{
sum1=sum1+a[i];
y=sum1/t;
}
if(x==y)
printf("possible");
else
printf("not possible");
return 0;
}
