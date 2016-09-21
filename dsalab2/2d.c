#include<stdio.h>
int  r1,c1,r2,c2,i,j,r,c;
void trans(int t[][],int r,int c);
void array(int x[][],int y[][]);

int main()
{
printf("enter dim of 1st array\n");
scanf("%d %d",&r1,&c1);
printf("enter dim of 2nd array\n");
scanf("%d %d",&r2,&c2);
int a1[r1][c1],a2[r2][c2];
printf("enter 1st array\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
scanf("%d",&a1[i][j]);
printf("\n");
}
printf("enter 2nd array\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
scanf("%d",&a2[i][j]);
printf("\n");
}
if((r1==r2)&&(c1==c2))
array(a1,a2);
else
printf("addn subs not possi\n");
printf("tranpose of 1st is\n");
trans(a1,r1,c1);
printf("transpose of 2nd is\n");
trans(a2,r2,c2);
return 0;
}

void array(int x[][],int y[][])
{
int s[r1][c1],d[r1][c1];
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
s[i][j]+=x[i][j]+y[i][j];
d[i][j]-=x[i][j]-y[i][j];
}}
printf("sum=\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d ",s[i][j]);
}printf("\n");
}
printf("diff=\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d ",d[i][j]);
}printf("\n");
}
}

void trans(int t[][],int r,int c)
{
int t1[c][r];
for(i=0;i<r;i++)
{ int temp;
for(j=0;j<c;j++)
{
t1[j][i]=t[i][j];
}}
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
printf("%d ",t1[i][j]);
}printf("\n");
}}

