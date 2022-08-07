#include<stdio.h>
/*Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.*/
int main()
{
    int i,n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter values in the array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    printf("%d ",a[n-1-i]);
    return 0;
}
