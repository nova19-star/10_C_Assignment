// 2. Write a C program to search an element in an given array

#include<stdio.h>
int main() {
    int x[10],n,i,element;
    printf("Enter the elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Enter the number of elements in an array: ");
        scanf("%d", &x[i]);
    }
    printf("The elements are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",x[i]);
    }
    printf("Enter the elements you want to search: ");
    scanf("%d", &element);
    for  (i = 0; i < n; i++)
    {
        if(x[i] == element)
        {
            printf("Element %d is found", x[i]);
            break;
        }
    }
    if(i == n)
    {
        printf("Element not found");
    }
    return 0;
}
