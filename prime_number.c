#include<stdio.h>
#include<math.h>
int main()
{
int n,i,m=0,k=0;
scanf("%d",&n);
m=n/2;
for(i=2;i<=m;i++)
{
if(n%i==0)
{
printf("not a prime");
k=1;
break;
}
}
if(k==0)
printf("prime");
return 0;
}