#include<stdio.h>
main()
{
int n1,n2,i,j;
printf("put size 1\n");
scanf("%d",&n1);
printf("put size 2\n");
scanf("%d",&n2);
int a1[n1],a2[n2],a3[n1+n2];
printf("enter sorted only\n");
printf("enter 1st\n");
for(i=0;i<n1;i++)
scanf("%d",&a1[i]);
printf("enter 2nd\n");
for(i=0;i<n2;i++)
scanf("%d",&a2[i]);

for(i=0;i<n1;i++)
{
a3[i]=a1[i];
}
for(i=0;i<n2;i++)
{
a3[n1+i]=a2[i];}
for(i=0;i<n1+n2;i++)
for(j=0;j<n1+n2;j++)
{ int t; 
if(a3[j]>a3[j+1])
   {  t=a3[j];
	  a3[j]=a3[j+1];
	  a3[j+1]=t;
	}
}
for(i=0;i<n1+n2;i++)
printf("%d ",a3[i]);
}
