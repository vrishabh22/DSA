#include<stdio.h>
void cbv(int,int);
void cbr(int*,int*);
main()
{
int a,b;
printf("enter a & b\n");
scanf("%d %d",&a,&b);
printf("by value\n");
cbv(a,b);
printf("by reference\n");
cbr(&a,&b);

}
void cbv(int x,int y)
{
int t=x;
x=y;
y=t;
printf("%d %d",x,y);
}

void cbr(int *p1,int *p2)
{
int *t;
t=p1;
p1=p2;
p2=t;
printf("%d %d",*p1,*p2);
}
