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
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0)
            {
                b[m-1][j]=a[i][j];
            }
            else if( i==m-1)
            {
                b[0][j]=a[i][j];
            }
            else
            {
                b[i][j]=a[i][j];
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
      printf("The element after shift in array are :\n");
      for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
          {
              printf("%d \t ",b[i][j]);
          }
          printf("\n");
      }
}
            
