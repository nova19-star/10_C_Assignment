// 3. Write a C program to find maximum and minimum element of an array

#include<stdio.h>
int main() {
    int x[10],n,i,max,min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Enter the elements in an array: ");
        scanf("%d", &x[i]);
    }
    printf("The elements of the array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",x[i]);
    }
    max = min = x[0];
    for (i = 0; i < n; i++)
    {
        if(x[i]>max)
        max = x[i];
        if (x[i]<min)
        min = x[i];
    }
    printf("The maximum element: %d\t", max);
    printf("The minimum element: %d", min);
    return 0;
}