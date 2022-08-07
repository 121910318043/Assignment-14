#include<stdio.h>
/*Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.*/
int main()
{
    int a[10],i,e=0,o=0;
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2)
            o=o+a[i];
        else
            e=e+a[i];
    }
    printf("Sum of odd = %d\n",o);
    printf("Sum of even = %d",e);
    return 0;
}
