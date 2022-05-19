#include<stdio.h>
void is_ascending(int array[],int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("ascending order:");
    for (i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
}
void is_descending(int array[],int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (array[i] < array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("decending order:");
    for (i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
}
int main()
{
    int array[] = {5, 3, 7, 1, 9, 4};
    int length = sizeof(array) / sizeof(int);
    is_ascending(array,length);
    is_descending(array,length);
}