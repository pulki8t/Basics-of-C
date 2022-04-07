#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int size, i,j, arr[100], a;
    clock_t begin= time(NULL);
    printf("Enter size of array: ");
    scanf("%d", &size);
    for(i=0; i<size; i++)
    {
        arr[i]= rand();
    }
    printf("Numbers in array are ");
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    for(i=0;i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] > arr[j])
            {
                a= arr[i];
                arr[i]= arr[j];
                arr[j]= a;
            }
        }
    }
    printf("\nArray when sorted gives the data as ");
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    clock_t end = time(NULL);
    printf("\nTime taken is %f seconds", (double)(end-begin)/CLOCKS_PER_SEC);
}