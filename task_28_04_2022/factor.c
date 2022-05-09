#include<stdio.h>
// void factor_number(int array[],int number,int length)
//{
int main()
{
    int array[]={1,2,3,4,5};
    int number;
    int length=sizeof(array)/sizeof(int);
    printf("factors of %d are:\n",array[number]);
    for(int i=1;i<=length;i++)
    {
        if(number%i==0)
            printf("%d\n",i);
    }
}
// int main()
// {
//     int array[]={1,2,3,4,5};
//     int length=sizeof(array)/sizeof(int);
//     factor_number(array);
//     return 0;
// }