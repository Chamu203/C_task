#include <stdio.h>
#include <stdbool.h>
bool startwith = false;
void start_substring(char string[], char substring[])
{
    for (int i = 0; substring[i] != '\0'; i++)
    {
        if (string[i] != substring[i])
        {
            startwith = false;
            break;
        }
        startwith = true;
    }
}
void print()
{
    if (startwith)
    {
        printf("start with substring.\n");
    }
    else
        printf("is not start with substring.\n");
}
int main()
{
    char string[] = "innominds company";
    char substring[] = "inn";
    int size1 = sizeof(string) / sizeof(char);
    int size2 = sizeof(substring) / sizeof(char);
    start_substring(string, substring);
    print();
}