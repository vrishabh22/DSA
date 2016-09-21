#include<stdio.h>
void main()
{
int r1,c1,r2,c2;
printf("enter rows and colums of 1st matrix\n");
scanf("%d%d",&r1,&c1);
printf("enter rows and colums of 2nd matrix\n");
scanf("%d%d",&r2,&c2);
int a[r1][c1],a2[r1][c2];
int i,j,k;
printf("enter elements of 1st array\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
 scanf("%d",&a[i][j]);
}
printf("\n");
}
printf("enter elements of 2ndarray\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
 scanf("%d",&a2[i][j]);
}
printf("\n");
}
int a3[r1][c2];
int sum=0;
for(i=0;i<r1;i++)
{
for(k=0;k<c2;k++)
{
for(j=0;j<r2;j++)
{
sum=sum+a1[i][j]*a2[j][k];
}
a3[i][k]=sum;
}}

for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
 printf("%d",a3[i][j]);
}
printf("\n");
}
}












