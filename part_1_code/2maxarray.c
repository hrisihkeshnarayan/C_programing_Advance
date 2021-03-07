#include<stdio.h>
int main()
{
    int a[10],i,n,max1,max2;
    printf("Enter the number of element in array(max 10 element):\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("Enter data :\n");
       scanf("%d",&a[i]);       
    }
    printf("The element in the array are :\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
    max1=max2=a[0];
    for(i=1;i<n;i++)
    {
        if(max1<a[i])
        {
            max2=max1;
            max1=a[i];
        }
        else if( max2<a[i] && max1!=a[i])
        {
            max2=a[i];
        }
    }
    printf("The second max Element in the array is : %d",max2);
}