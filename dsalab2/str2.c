#include<stdio.h>
int main()
{
char s1[50]="hello";
char s2[50];
char *p1;
p1=s1;
char *p2;
p2=s2;
p2=p1;
printf("%s",s2);
return 0;
}
