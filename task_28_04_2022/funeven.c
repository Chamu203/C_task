#include<stdio.h>
void even_number(int minimum,int maximum)
{
    int array[maximum-minimum];
    for(int i=0,j=minimum;i<(maximum-minimum)&&j<maximum;i++,j++)
    array[i]=j;
    printf("even numbers\n");
    for(int i=0;i<(maximum-minimum);i++){
        if(array[i]%2==0){
            printf("even numbers:%d\n",array[i]);
            i++;
        }
    }
}
int main()
{
    int minimum=1,maximum=20;
    even_number(minimum,maximum);
}
