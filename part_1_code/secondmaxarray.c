
#include<stdio.h>
int main()
{
    int a[10],i,n,j,temp;
    printf("Enter the no of Element in array :\n ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter Data:\n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
      for(i=0;i<n;i++)
      {
          for(j=0;j<n-1;j++)
          {
              if(a[j]>a[j+1])
              {
                  temp=a[j];
                  a[j]=a[j+1];
                  a[j+1]=temp;
              }
          }
      }
          
           printf("The second maximum element in the array is :%d",a[n-2]);
    
}