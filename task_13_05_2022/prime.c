#include <stdio.h>
void is_prime(int last_number, int first_number)
{
    int number, count = 0;
    printf(" checking is_prime between range of first and last numbers:\n ");
    for (number = first_number; number <= last_number; number++)
    {
        count = 0;
        for (int i = 1; i <= number; i++)
        {
            if (number % i == 0)
                count++;
        }
        if (count == 2)
        {
            printf("%d is prime\n", number);
        }
        else
            printf("%d is not prime\n", number);
    }
}
void factorial(int last_number, int first_number)
{
    int fact = 1;
    printf("factorial of all numbers between range of first and last numbers:\n ");
    for (int number = first_number; number <= last_number; number++)
    {
        printf("the factorial of %d is : ", number);
        fact *= number;
        printf("%d \n", fact);
    }
}
void prime_count(int array[], int length)
{
    int count = 0, i, j;
    for (i = 0; i < length; i++)
    {
        int number = array[i];
        for (int j = 2; j <= number / 2; j++)
        {
            if (number % j == 0)
                break;
        }
        if (j > number / 2)
        {
            printf("%d ", number);
            count++;
        }
    }
    printf("\ncount of prime numbers in array:%d\n", count);
}

void fibonnaci(int first_number, int second_number, int array[], int length)
{
    int next_number;
    for (int i = 2; i < length; i++)
    {
        next_number = first_number + second_number;
        first_number = second_number;
        second_number = next_number;
    }
    printf("%d\n", next_number);
}
void main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(array) / sizeof(int);
    int first_number = 1;
    int last_number = 5;
    int count;
    is_prime(last_number, first_number);
    factorial(last_number, first_number);
    prime_count(array,length);
    fibonnaci(array, length, first_number, last_number);
}