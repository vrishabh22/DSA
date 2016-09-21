#include<stdio.h>
void main()
{
    int a[100],a2[100],n,i=0,j;
    printf("enter no. of array elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    int k=0,e=0;
    printf("\n enter pos to insert");
    scanf("%d",&k);
    printf("\n enter element");
    scanf("%d",&e);
    while(i<(k-1))
    {
        a2[i]=a[i];
        i++;
    }
    a2[i]=e;
    ++i;
    while(i<n+1)
    {
        a2[i]=a[i-1];
        i++;
    }
    for(j=0;j<n+1;j++)
    {
        printf("%d ",a2[j]);
    }

}
