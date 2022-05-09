#include<stdio.h>
#define SIZE 5
void add_array(int array1[],int array2[],int array[])
{
    int i;
    for (int i = 0; i < SIZE; i++)
    {
    array[i]=array1[i]+array2[i];
    printf("adding two arrays are:%d\n",array[i]);
    }
}
void print_array(int array[])
{
    printf("{");
    for(int i=0;i<SIZE;i++)
    {
        printf("%d,",array[i]);
    }
    printf("}");
}
int main()
{
    int array[SIZE];
    int array1[]={93, 37, 71, 3, 17};
    int array2[]={29, 84, 28, 75, 63};
    add_array(array1,array2,array);
    print_array(array);
}