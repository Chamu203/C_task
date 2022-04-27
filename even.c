#include<stdio.h>
void main(){
    int min=1,max=10;
    int array[max-min];
    int even,odd;
    for(int i=0,j=min;i<(max-min)&&j<max;i++,j++)
        array[i]=j;
    printf("even numbers\n");
        for(int i=0;i<(max-min);i++){
            if(array[i]%2==0){
                printf("even numbers:%d\n",array[i]);
                i++;
            }
        }
    printf("odd numbers\n");
        for(int i=0;i<(max-min);i++){
            if(array[i]%2!=0){
                printf("odd  numbers:%d\n",array[i]);
                i++;
            }    
        }
    
}
