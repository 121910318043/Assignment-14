#include<stdio.h>
/*Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.*/
int main()
{
    int i,j,k,a[10];
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
        for(j=0;j<=i;j++)
    {
        if(a[i]>a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
    }
    printf("smallest number = %d",a[9]);
}
