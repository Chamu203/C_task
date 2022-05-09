#include<stdio.h>
#define SIZE 5  //initializing size as 5 globally
void add_array(int array1[],int array2[],int array[])//using functions for adding two arrays
{
    int i;// declaring i
    for (int i = 0; i < SIZE; i++)
    {
    array[i]=array1[i]+array2[i];//adding two arrrays
    printf("adding two arrays are:%d\n",array[i]);//print the addition array
    }
}
void print_array(int array[])//print function for to print adding elements into an array
{
    printf("{");//storing the elements using flower brackets
    for(int i=0;i<SIZE;i++)
    {
        printf("%d,",array[i]);// print the array of elements
    }
    printf("}");
}
int main()
{
    int array[SIZE];//  declaring the size of the array
    int array1[]={93, 37, 71, 3, 17};// initilizing array1
    int array2[]={29, 84, 28, 75, 63};// initialising array2
    add_array(array1,array2,array);//calling add_array function
    print_array(array);//calling print_array function
}