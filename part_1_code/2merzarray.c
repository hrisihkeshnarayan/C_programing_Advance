#include<stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE],x[SIZE],i,j,n1,n2;
    printf("Enter the number of element in first array :");
    scanf("%d",&n1);
    printf("Enter the number of element in second array :");
    scanf("%d",&n2);
    printf("Enter %d element in the first array:\n",n1);
    for(i=0;i<n1;i++)
    {
        printf("Enter Data :");
        scanf("%d",&a[i]);
    }
        printf("Enter %d element in the second array\n:",n2);
    for(i=0;i<n2;i++)
    {
        printf("Enter Data :");
        scanf("%d",&x[i]);
    }

    printf("\nThe data in the first array:\n");
    for(i=0;i<n1;i++)
    {
        printf("%d ",a[i]);
    }
     printf("\nThe data in the second array:\n");
    for(i=0;i<n2;i++)
    {
        printf("%d ",x[i]);
    }

    if(SIZE < n1+n2)
    {
        printf("concatination not possible\n");
        return 0;
    }

    for(i=n1,j=0;j<n2;i++,j++)
    {
        a[i]=x[j];
    }
    printf("\nAfter concationation first array is :");
    for(i=0;i<(n1+n2);i++)
    {
        printf("%d ",a[i]);
    }
    
    }

