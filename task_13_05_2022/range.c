#include <stdio.h>
void range(int array[], int length, int min, int max)
{
    printf("elements in a given range:");
    for (int i = 0; i < length ; i++)
    {
        for (int j = 0; j < max; j++)
        {
            array[i] = j;
            printf("%d ", array[i]);
        }
    }
    printf("\n");
}
void step(int array[], int length, int min, int max, int step)
{
    printf("elements in a given range by using step:");
    for (int i = 0 ; i < length; i++)
    {
        for(int j=min;j<max;j=j+step)
        {
        array[i] = j;
        printf("%d ", array[i]);
        }
    }
}
int main()
{
    int array[10];
    int length = sizeof(array) / sizeof(int);
    range(array, length, 1, 9);
    step(array, length, 1, 9, 2);
}