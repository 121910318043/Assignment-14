#include<stdio.h>
/*Write a program to find second largest in an array.Take array values from the user.*/
int main()
{
    int i,j,k,n;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    printf("Enter numbers in the array: ");
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        for(j=0;j<=i;j++)
    {
        if(a[i]<a[j])
        {
            k=a[i];
            a[i]=a[j];
            a[j]=k;
        }
    }
        printf("second largest number = %d ",a[n-2]);
    return 0;
}
