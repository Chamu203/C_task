#include <stdio.h>
void odd_number(int minimum, int maximum)
{
    int array[maximum - minimum];
    for (int i = 0, j = minimum; i < (maximum - minimum) && j < maximum; i++, j++)
        array[i] = j;
    printf("Odd numbers\n");
    for (int i = 0; i < (maximum - minimum); i++)
    {
        if (array[i] % 2 != 0)
        {
            printf("odd numbers:%d\n", array[i]);
            i++;
        }
    }
}
int main()
{
    int minimum = 1, maximum = 20;
    odd_number(minimum, maximum);
}
