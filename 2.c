//Find top 3 elements in an array


#include<stdio.h>
void main()
{
    int arr[100];
    int n, i, j, temp, max, mxi;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter elements of array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array is :- ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nTop three elements are ");
    for(i=0; i<3; i++)
    {
        max= arr[0];
        for(j=0; j<n-i; j++)
        {
            if(max< arr[j])
            {
                max=arr[j];
                mxi=j;
            }
        }
        temp= arr[n-1-i];
        arr[n-1-i]= arr[mxi];
        arr[mxi]= temp;
        printf("%d ", max);
    }
}
