#include<stdio.h>

void permutations_of_a_number(int number, int npr, int r)
{
    npr = factorial(number) / factorial(number - r);
    printf("permutation Value of %dp%d = %d\n", number, r, npr);
}
void combinations_of_a_number(int ncr, int number, int r)
{
    ncr = factorial(number) / (factorial(r) * factorial(number - r));
    printf("combination Value of %dc%d = %d\n", number, r, ncr);
}
int factorial(int number)
{
    int  fact = 1;
    for ( int i = 1; i <= number; i++)
    {
        fact = fact * i;
    }
    return fact;
}
void main()
{
    int number = 5, r = 3, npr, ncr;
    permutations_of_a_number(number, npr, r);
    combinations_of_a_number(ncr,number, r);
    factorial(number);
}