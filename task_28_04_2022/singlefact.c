#include <stdio.h>
// to find the factors of number
void find_factors(int number)
{
    for (int index = 1; index <= number / 2; index++)
    {
        if (number % index == 0)
            // printing the  factors of number
            printf("%d\n", index);
    }
}
// printing function
void print()
{
    int index, number;
    if (number % index == 0)
        printf("factors of number are:%d\n", index);
    else
        printf("no factors founds");
}
int main()
{
    int number = 10;
    // function calling
    find_factors(number);
    print();
    return 0;
}