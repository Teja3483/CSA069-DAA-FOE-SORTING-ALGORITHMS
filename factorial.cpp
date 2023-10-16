#include<stdio.h>
int main(){
int n,i,f=1;
printf("enter an n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	f=f*i;
}
printf("fac of %d is:%d",n,f);
return 0;
}
