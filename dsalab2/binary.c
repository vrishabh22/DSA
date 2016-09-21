#include<stdio.h>
int rec(int arr[],int l1,int u1,int el);
main()
{
int i,j,n,e;
printf("enter size ");
scanf("%d",&n);
int a[n];
printf("enter\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter key ");
scanf("%d",&e);

printf("using iteration\n");
int c=0;
int l=0,u=n-1,mid;
while(l!=u)
{
mid=(l+u)/2;
if(a[mid]==e)
{c++;
break;
}
else if(a[mid]>e)
u=mid-1;
else
l=mid+1;
}
if(c!=0)
printf("found at %d",mid+1);
else
printf("not found");
printf("\n using recursion\n");
int ch=rec(a,0,n-1,e);
if(ch!=0)
printf("found");
}

int rec(int arr[],int l1,int u1,int el)
{
int m,c1=0;
if(l1!=u1)
{
int m=(l1+u1)/2;
if(arr[m]==el)
c1++;
else if(arr[m]>el)
return rec(arr,l1,m-1,el);
else
return rec(arr,m+1,u1,el);
}
return c1;
}
