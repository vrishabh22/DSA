#include<stdio.h>
void main()
{
    int a[100],n,i=0,j;
    printf("enter no. of array elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    int k,e;
    printf("\n enter pos to update");
    scanf("%d",&k);
    printf("\n enter element");
    scanf("%d",&e);
    int *p=a;
    *(p+k-1)=e;
    
    for(j=0;j<n;j++)
    {
        printf("%d ",a[j]);
    }

}
