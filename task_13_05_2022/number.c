#include <stdio.h>
void even_number(int array[], int length, int even_number_count)
{
    for (int index = 0; index < length; index++)
    {
        if (array[index] % 2 == 0)
        {
            even_number_count++;
        }
    }
    printf(" count of Even Numbers in this Array = %d ", even_number_count);
}
void odd_number(int array[], int length, int odd_number_count)
{
    for (int index = 0; index < length; index++)
    {
        if (array[index] % 2 != 0)
        {
            odd_number_count++;
        }
    }
    printf(" count of Odd Numbers in this Array = %d \n", odd_number_count);
}
void is_even(int array[], int length)
{
    printf("even number:\n");
    for (int i = 0; i < length; i++)
    {
        if (array[i] % 2 == 0)
            printf("%d ", array[i]);
    }
}
void is_odd(int array[], int length)
{
    printf("\nodd number:\n");
    for (int i = 0; i < length; i++)
    {
        if (array[i] % 2 != 0)
            printf("%d ", array[i]);
    }
}

int main()
{
    int i;
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(array) / sizeof(int);
    int even_number_count = 0, odd_number_count = 0;
    even_number(array, length, even_number_count);

    odd_number(array, length, odd_number_count);
    is_even(array, length);
    is_odd(array, length);
}