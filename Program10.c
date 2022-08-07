#include<stdio.h>
/*Write a program in C to copy the elements of one array into another array.Take array
values from the user.*/
int main()
{
    int i,n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter elements of first array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        {
            b[i]=a[i];
            printf("copied array = %d ",b[i]);
        }
    return 0;
}
