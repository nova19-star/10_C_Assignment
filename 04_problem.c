// 4. Write a C program to copy the content of one array into another array

#include <stdio.h>
int main() {
    int x[10], y[10], n, i;
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
    for (i = 0; i < n; i++)
    {
        y[i] = x[i];
    }
    printf("the another array elements are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",y[i]);
    }
    return 0;
}
