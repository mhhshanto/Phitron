#include <stdio.h>

void swap(int *a, int *b);

void bubble_sort(int a[], int len);

int main()
{
    int i, N;
    printf("Array size : ");
    scanf("%d", &N);

    int a[N];

    printf("\nProvide %d values\n", N);
    for(i=0; i<N; i++)
    {
        scanf("%d ", &a[i]);
    }

    bubble_sort(a, N);
    printf("Sorted array ");
    for(i=0; i<N; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

void bubble_sort(int a[], int len)
{
    int i, j;
    for(i=0; i<len-1; i++)
    {
        for(j=i; j<len; j++)
        {
            if(a[i] > a[j])
                swap(&a[i], &a[j]);
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
