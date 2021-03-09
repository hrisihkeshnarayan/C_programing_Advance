#include<stdio.h>

int main()
{
    int x[5][5],min_r,max_c,i,j,row_id,col_id,n;
    printf("Enter number of row and columns :");
    scanf("%d",&n);

    printf("Enter %d element in the in the %dx%d matrix :\n",n*n,n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter Data :");
            scanf("%d",&x[i][j]);
        }
    }

    printf("Matrix is :\n");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        min_r = x[i][0];
        col_id = 0;

        for(j=1;j<n;j++)
        {
            if(min_r > x[i][j])
            {
                min_r = x[i][j];
                col_id = j;
            }
        }

        max_c = x[0][col_id];
        row_id = 0;
        for(j=1;j<n;j++)
        {
            if(max_c < x[j][col_id])
            {
                max_c = x[j][col_id];
                row_id = j;
            }
        }

    
    
    if(min_r == max_c)
    {
        printf("saddle point found at [%d][%d] value is : %d\n",row_id,col_id,max_c);
    }

    }
    
}