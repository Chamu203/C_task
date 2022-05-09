#include <stdio.h>
int temp, sorted, merge[100], k, i, j;
void sort(int array1[], int array2[], int number1, int number2)
{
    for (i = 0; i < number1; i++)
    {
        for (j = 0; j < number1 - 1 - i; j++)
        {
            if (array1[j] > array1[j + 1])
            {
                temp = array1[j];
                array1[j] = array1[j + 1];
                array1[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < number2; i++)
    {
        for (j = 0; j < number2 - 1 - i; j++)
        {
            if (array2[j] > array2[j + 1])
            {
                temp = array2[j];
                array2[j] = array2[j + 1];
                array2[j + 1] = temp;
            }
        }
    }
}
void print(int array1[], int array2[], int number1, int number2)
{
    printf("elements of array1\n");
    for (int i = 0; i < number1; i++)
    {
        printf("a[%d]=%d\n", i, array1[i]);
    }
    printf("elements of array2\n");
    for (int i = 0; i < number2; i++)
    {
        printf("b[%d]=%d\n", i, array2[i]);
    }
    sorted = number1 + number2;
    for (i = 0; i < sorted; i++)
    {
        if (array1[j] <= array2[k])
        {
            merge[i] = array1[j];
            j++;
        }
        else
        {
            merge[i] = array2[k];
            k++;
        }
    }
    printf("merged array is:\n");
    for(i=0;i<sorted;i++)
    {
        printf("c[%d]=%d\n",i,merge[i]);
    }
}
int main()
{
    int array1[] = {13, 4, 1, 22, 0};
    int array2[] = {5, 47, 58, 9, 26};
    int number1 = sizeof(array1) / sizeof(int);
    int number2 = sizeof(array2) / sizeof(int);
    sort(array1, array2, number1, number2);
    print(array1, array2, number1, number2);
}