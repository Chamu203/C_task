#include <stdio.h>
void array_elements(int array[], int length, int index, int temp)
{
    printf("Given array:\n");
    printf("elements of an array:\n");
    for (index = 0; index < length; index++)
    {
        printf("elements:%d\n", array[index]);
    }
    printf("\n");
}
void reverse_array_elements(int array[], int length, int index, int temp)
{
    printf("Reversed array:\n");
    printf("elements of an array:\n");
    for (int index = 0, j = length - 1; index < j; index++, j--)
    {

        temp = array[index];
        array[index] = array[j];
        array[j] = temp;
    }
    for (index = 0; index < length; index++)
    {
        printf("Reversed elements:%d\n", array[index]);
    }
}
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int length = sizeof(array) / sizeof(int);
    int index, temp;
    reverse_array_elements(array, length, index, temp);
}