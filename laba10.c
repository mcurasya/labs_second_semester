#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int findmaxindex(float *arr, int size)
{
    float max = arr[0];
    int max_index = 0; 
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            max_index = i;
        }
    }
    return max_index;
}

void replace(float *arr, int size)
{
    int start_index = findmaxindex(arr,size);
    for (int i = start_index + 1; i < size; i++)
    {
        arr[i] = 0.5;
    }
}

void fill(float *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = 3 + (rand()%100 * 0.57423); // волшебная константа, придуманая ударом головы по клавиатуре
    }
}

void print(float* arr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%f ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int n1, n2;
    printf("enter first size->");
    scanf("%d", &n1);
    float *a = malloc(sizeof(float) * n1);
    fill(a, n1);
    print(a, n1);
    replace(a, n1);
    print(a, n1);
    printf("enter second size->");
    scanf("%d", &n2);
    float *b = malloc(sizeof(float) * n2);
    fill(b, n2);
    print(b, n2);
    replace(b, n2);
    print(b, n2);
    free(a);
    free(b);
    return 0;
}
