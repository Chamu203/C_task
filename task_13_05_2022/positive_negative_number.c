#include <stdio.h>
void positive_number_count(int array[], int positive_number_count, int length)
{
    for (int index = 0; index < length; index++)
    {
        if (array[index] > 0)
        {
            positive_number_count++;
        }
        printf("count of positive number count:%d", positive_number_count);
    }
}

void negative_number_count(int array[], int negative_number_count, int length)
{
    for (int index = 0; index < length; index++)
    {
        if (array[index] < 0)
        {
            negative_number_count++;
        }
    }
    printf("count of negative number count:%d", negative_number_count);
}
void positive(int array[], int length, int index)
{
    for (int index = 0; index < length; index++)
    {
        if (array[index] > 0)
        {
            printf("count of positive number count:%d", positive);
        }
    }
}
void negative(int array[], int length, int index)
{
    for (int index = 0; index < length; index++)
    {
        if (array[index] < 0)
        {
            printf("count of negative number count:%d", negative);
        }
    }
}
int main()
{
    int array = {1, -4, -3, -5, 8, 9, 6};
    int length = sizeof(array) / sizeof(int);
    int index;
    positive_number_count(array, length, positive_number_count);
    negative_number_count(array, length, negative_number_count);
    positive(array, length, index);
    negative(array, length, index);
}
