#include <stdio.h>
void freq_number(int *array, int length)
{
    int num = -1;
    // int length=sizeof(array)/sizeof(array[0]);
    int freq[length];
    for (int i = 0; i < length; i++)
    {
        int count = 1;
        for (int j = i + 1; j < length; j++)
        {
            if (array[i] == array[j])
            {
                count++;
                freq[j] = num;
            }
        }
        if (freq[i] != num)
            freq[i] = count;
    }
    printf("elements        frequency\n");
    for (int i = 0; i < length; i++)
    {
        if (freq[i] != num)
        {
            printf("%d", array[i]);
            printf("                ");
            printf("%d\n", freq[i]);
        }
    }
}
int main()
{
    int array[] = {1, 2, 8, 3, 2, 2, 2, 5, 1, 1, 2, 3, 8, 7, 2};
    int length = sizeof(array) / sizeof(array[0]);
    int freq[length], num;
    freq_number(array, length);

    return 0;
}