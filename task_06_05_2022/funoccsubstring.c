#include <stdio.h>
#include <string.h>
int count_of_substring(char string[], char substring[])
{
    int count = 0, found = 0;
    int size1 = strlen(string);
    int size2 = strlen(substring);
    for (int i = 0; i < size1 - size2 + 1; i++)
    {
        found = 1;
        for (int j = 0; j < size2; j++)
        {
            if (string[i + j] != substring[j])
            {
                found = 0;
                break;
            }
        }
        if (found)
        {
            count++;
            i = i + size2 - 1;
        }
    }
    return count;
}
void print_count(int found, int count)
{
    if (found >= 1)
        printf("string count:%d", count);
    else
        printf("string count is zero");
}
int main()
{
    char string[] = "happy  is world is happy happy";
    char substring[] = "happy";
    int count, found;
    count = count_of_substring(string, substring);
    printf("substring occurence count is:%d\n", count);
    print_count(found, count);
    printf("\n");
}