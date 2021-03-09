#include<stdio.h>
int main()
{
    int a[10];
    int i,s,n,count=0;
    printf("Enter the no of elemenet in the in array : ");
    scanf("%d",&n);
    printf("Enter the element in the the string:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter Data :");
        scanf("%d",&a[i]);
    }
    printf("The element in the in the array are is :\n");
    for(i=0;i< n;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
        
    }
    printf("Enter the elenment that u want search :");
    scanf("%d",&s);
    i=0;
    while(i<n )
    {
        if(a[i] == s)
        {
           count++;
        }
        i++;
    }
    if(count==0)
    {
        printf("Element not found.\n"); 
    }
    else
    {
        printf("Element  found.\n"); 
    }

    
    
            
}