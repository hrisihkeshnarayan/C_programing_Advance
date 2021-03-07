#include<stdio.h>
int main()
{
    int i,j,m,n;
    printf("Enter the no of row in the array :\n");
    scanf("%d",&m);
    printf("Enter the no of colum in the array :\n");
    scanf("%d",&n);
    int a[m][n],b[m][n],c[m][n];
    printf("Enter the data in the 1st array :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("Enter the data :");
        scanf("%d",&a[i][j]);
        }
    }
     printf("Enter the data in the 2nd array :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("Enter the data :");
        scanf("%d",&b[i][j]);
        }
    }
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
       c[i][j] = a[i][j] + b[i][j];
        }
    }
      printf("The element in the first array is :\n");
      for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
          {
              printf("%d \t ",a[i][j]);
          }
          printf("\n");
      }
       printf("The element in the second array is :\n");
      for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
          {
              printf("%d \t ",b[i][j]);
          }
          printf("\n");
      }
       printf("The result array is :\n");
      for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
          {
              printf("%d \t ",c[i][j]);
          }
          printf("\n");
      }
}