#include<stdio.h>
void main()
{
int a=5;
int *b;
int **c;
b=&a;
c=&b;
printf("%d",a);
printf("%d",*(&a));
printf("%d",*b);
printf("%d",**c);
printf("%d",b);
printf("%d",c);
printf("%d",&a);
printf("%d",b);
printf("%d",&b);
printf("%d",&c);
}
