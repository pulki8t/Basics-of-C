#include<stdio.h>
int rand();
void main()
{
    int arr[100];
    int i, j, n, max, min, sum, average;
    printf("Enter number of elements of an array: ");
    scanf("%d", &n);
    printf("Enter elements of array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    max= arr[0];
    for(i=0; i<n; i++)
    {
        if(max<arr[i])
        {
            max= arr[i];
        }
    }
    printf("\nMaximum element in the array is %d", max);
    min=arr[0];
    for(i=0; i<n; i++)
    {
        if(min > arr[i])
        {
            min= arr[i];
        }
    }
    printf("\nMinimum element in the array is %d", min);
    sum=0;
    for(i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    average= sum/n;
    printf("\nAverage of elements in array is %d", average);
    printf("\nPair of elements are: ");
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            printf("(%d %d)\n", arr[i], arr[j]);
        }
    }
    printf("\nSum of pairs are: ");
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            printf("(%d)\n", arr[i]+arr[j]);
        }
    }
    printf("\nDifference of pairs are: ");
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            printf("(%d)\n", arr[i]-arr[j]);
        }
    }
}