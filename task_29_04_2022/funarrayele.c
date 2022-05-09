#include<stdio.h>
int length1,length2,array1[],array2[];
void array_elements()
{
    printf("elements of an array:\n");
    for(int i = 0;i < length1;i++)
    {
        printf("elements:%d\n",array1[i]);
    }
    for(int j=0;j<length2;j++)
    {
        printf("elements:%d\n",array2[j]);
    }
}
int main()
{
    int array1[]={1,2,3,4,5};
    int array2[]={11,22,33,44,55};
    int length1=sizeof(array1)/sizeof(int);
    int length2=sizeof(array2)/sizeof(int);
    array_elements();
}