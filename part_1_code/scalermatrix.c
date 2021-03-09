#include<stdio.h>
int main()
{
    int i,j,m,n,k;
    printf("Enter the no of row in the array :\n");
    scanf("%d",&m);
    printf("Enter the no of colum in the array :\n");
    scanf("%d",&n);
   
    int a[m][n],b[m][n];
    printf("Enter the data in the 1st array :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("Enter the data :");
        scanf("%d",&a[i][j]);
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
       printf("Enter the number that u want to multply with all element in the matrix :\n");
    scanf("%d",&k);
      for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
                b[i][j]=a[i][j]*k;
        }
    }
       printf("The element in the  matrix after multiplication is  :\n");
      for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
          {
              printf("%d \t ",b[i][j]);
          }
          printf("\n");
      }
}