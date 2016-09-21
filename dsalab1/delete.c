#include<stdio.h>
void main()
{
    int a[100],a2[100],n,i,j;
    printf("enter no. of array elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    int k;
    printf("\n enter pos to delete from");
    scanf("%d",&k);
        for(i=k-1;i<n-1;i++)
       {
          a[i]=a[i+1];
}
 for(j=0;j<n-1;j++)
    {
        printf("%d ",a[j]);
    }
}


















