#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool endswith = false;
void end_substring(char string[], char substring[])
{
    int size1 = sizeof(string) / sizeof(char);
    int size2 = sizeof(substring) / sizeof(char);
    if (size2 <= size1)
    {
        for (int i = 0; i < size2; i++)
        {
            if (string[i + size1 - size2] != substring[i])
            {
                endswith = false;
                break;
            }
            endswith = true;
        }
    }
}
void print()
{
    if (endswith)
    {
        printf("ends with substring.\n");
    }
    else
        printf("is not ends with substring.\n");
}
int main()
{
    char string[] = "innominds company";
    char substring[] = "any";
    end_substring(string, substring);
    print();
}
