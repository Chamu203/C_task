#include <stdio.h>
void array_elements(int array1[], int array2[],int length1,int length2)//function
{
    //printing  elements in an array
    printf("elements of an array:\n");
    //for loop for array1
    for (int i = 0; i < length1; i++)
    {
        printf("elements:%d\n", array1[i]);
    }
    //for loop for array2
    for (int j = 0; j < length2; j++)
    {
        printf("elements:%d\n", array2[j]);
    }
}
//main function
int main()
{
    //intialising two arrays in main 
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {11, 22, 33, 44, 55};
    //length of two arrays
    int length1 = sizeof(array1) / sizeof(array1[0]);
    int length2 = sizeof(array2) / sizeof(array2[0]);
    //function calling
    array_elements(array1, array2,length1,length2);
}