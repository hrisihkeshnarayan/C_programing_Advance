#include<stdio.h>
int main()
{
    float sal;
    printf("Enter the salary of employ ");
    scanf("%f",&sal);
    if (sal<10000)
    {
        sal=sal+0.2*sal+0.8*sal;
        printf("Total salary of Emplopier is : %f",sal);
    }
    else if(sal<=20000)
    {
        sal=sal+0.25*sal+0.90*sal;
        printf("Total salary of Emplopier is : %f",sal);
    }
    else  if(sal>20000)
    {
        sal=sal+0.30*sal+0.95*sal;
        printf("Total salary of Emplopier is : %f",sal);
    }
}