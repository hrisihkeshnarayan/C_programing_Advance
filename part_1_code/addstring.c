#include<stdio.h>
int main()
{
    int i,k,j,count1,count2;
    char a[10],b[10],c[20];
    printf("Enter the element in the first string :\n");
    scanf("%s",a);
    printf("Enter the element in the second string :\n");
    scanf("%s",b);
    for(count1=0;a[count1]!=0;count1++);
    printf("%d\n",count1);
   for(count2=0;b[count2]!=0;count2++);
   printf("%d\n",count2);

   if(count1 + count2 >=21 || count1 >= 10 || count2 >= 10)
   {
       printf("concidation not possible\n");
       return 0;
   }
  printf("After concidatination of two string is :\n");
   for(i=0;a[i]!=0 ;i++)
   {
           c[i] = a[i];
          
   }
    for(k=0,j=count1;b[k]!=0;k++,j++)
    {
        c[j]=b[k];
        
    }
    c[count1+count2]=0;
         printf("\n%s",c);
   }

