#include <stdio.h>
void factor_of_all_numbers(int number)
{
    printf("factors of %d are:", number);
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            printf("%d", i);
        }
    }
    printf("\n");
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int i;
    for (i = 0; i < 5; i++)
    {
        factors(arr[i]);
    }
}