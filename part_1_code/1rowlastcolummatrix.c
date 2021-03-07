#include<stdio.h>
int main()
{
    int i,j,m,n,sum=0;
    printf("Enter the no of row in the array :\n");
    scanf("%d",&m);
    printf("Enter the no of colum in the array :\n");
    scanf("%d",&n);
    int a[m][n],b[m][n];
    if(m!=n)
    {
        printf("opetaion can't be performed.");
    }
    printf("Enter the data in the 1st array :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("Enter the data :");
        scanf("%d",&a[i][j]);
        }

    }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==0 && j==0)
                {
                    b[m-1][n-1]=a[0][0];
                }
                else if(i==m-1 && j==n-1)
                {
                    b[0][0]=a[i][j];
                }
                
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
         printf("The element after swipeing in the  array are :\n");
      for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
          {
              printf("%d \t ",b[i][j]);
          }
          printf("\n");
      }