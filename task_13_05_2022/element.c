#include <stdio.h>
void element(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", array[i]);
    }
}
void element_index(int array[], int length, int index)
{
    int element = 56;
    for (int i = 0; i < length; i++)
    {
        if (array[i] == element)
        {
            index = i;
            printf("index of element  is:%d\n", index);
        }
    }
}
void sum(int number)
{
    int sum = 0;
    while (number > 0)
    {
        int result = number % 10;
        sum = sum + result;
        number = number / 10;
    }
    printf("sum of number:%d\n", sum);
}
void maximum(int length, int array[])
{
    int maximum = array[0];
    for (int i = 0; i < length; i++)
    {
        if (array[i] > maximum)
            maximum = array[i];
    }
    printf("maximum number:%d\n", maximum);
}
void minimum(int length, int array[])
{
    int minimum = array[0];
    for (int i = 0; i < length; i++)
    {
        if (array[i] < minimum)
            minimum = array[i];
    }
    printf("maximum number:%d\n", minimum);
}
void mean(int array[], int length)
{
    int sum = 0;
    float average;
    for (int i = 0; i < length; i++)
    {
        sum = sum + array[i];
    }
    average = sum / length;
    printf("The average is:%f ", average);
}
void reverse_array(int array[], int length)
{
    printf("reversing an array:\n");

    for (int i = 0; i < length; i++)
    {
        for (int j = i; j < length; j++)
        {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    printf("{");
    for (int i = 0; i < length; i++)
        printf("%d ", array[i]);
    printf("}\n");
}
void occurrance(int number)
{
    int digit=7;
    int reminder,count=0;
    while(number>0)
    {
        reminder=number%10;
        if(reminder==digit)
        {
            count++;
        }
        number=number/10;
    }
    printf("occurance of a  digit:%d\n",count);
}
int main()
{
    int array[] = {1, 2, 33, 4, 55, 56, 7, 68, 19};
    int length = sizeof(array) / sizeof(int);
    int index;
    int number = 365477;
    element(array, length);
    reverse_array(array, length);
    element_index(array, length, index);
    sum(number);
    occurrance(number);
    mean(array, length);
    maximum(array, length);
    minimum(array, length);
}