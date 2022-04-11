#include <stdio.h>
void main()
{
    int n, i, j, temp, max, max_index;
    int arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; ++i)
    {
        arr[i]=rand();
    }
    printf("Elements of array are: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    max= arr[0];
    for(i=n-1; i>=0; i--)
    {
        for(j=0; j<=i; j++)
        {
            if (max < arr[j])
            {
                max= arr[j]; 
                max_index= j;
            }
        }
        temp= arr[max_index];
        arr[max_index]= arr[i];
        arr[i]= temp;

    }
    printf("\n element = ");
    for(i=0; i<n; i++)
    printf("%d ", arr[i]);
}