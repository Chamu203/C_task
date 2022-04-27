#include <stdio.h>
int main()
{
    int min = 2, max = 10;
    int len = max - min; // 8
    int array[len];      // { 2, 3, 4, 5, 6, 7, 8, 9}
    int num, i,count,prime_len;

    printf("initialising array from %d until %d: ", min, max);
    for (int i = 0, val = min; i < len && val < max; i++, val++)
    {
        array[i] = val;
        printf("%d\n", array[i]);
    }
    printf("\n");

    for (int i = 0; i < len; i++)
    {
        num = array[i]; // array[8]
        printf("%d. %d\n", i, num);
         int is_prime = 1;
        for (int j = 2; j < num / 2; j++)
        {
            printf("trying to divide %d with %d\n", num, j);
            if (num % j == 0){
                
                is_prime = 0;
                printf("%d is able to divide %d\n", j, num);
                break;
            }  
        }
        if (is_prime)
            printf("%d is prime\n", num);
        else {
            printf("%d is not prime\n", num);
        }
    }
   
}
