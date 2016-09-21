#include<stdio.h>
main()
{
int a,test;
printf("enter\n");
scanf("%d",&a);
int *p,r=0;
p=&a;
int *p2;
p2=p;
while(*p>0)
{
*p2=*p%10;
*p=*p/10;
r=(r)*10+(*p2);
}
printf("%d",r);
}



