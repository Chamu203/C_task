#include <stdio.h>
#include <stdbool.h>
bool startwith = false;
// writing a function for a string that end with substring or not by taking parameters
// string and substring
void start_substring(char string[], char substring[])
{
    for (int i = 0; substring[i] != '\0'; i++)
    {
        // checking the condition if string and substring are equal or not
        if (string[i] != substring[i])
        {
            // if the condition is true break the loop
            startwith = false;
            break;
        }
        startwith = true;
    }
}
// printing function is used to print wheather the substring is present or not
void print()
{
    if (startwith)
    {
        // if the condition is true print it will start with substring
        printf("start with substring.\n");
    }
    else
        // if the condition is fails it will print it is not starting with substring
        printf("is not start with substring.\n");
}
/// main function
int main()
{
    // initialising the string and substring using charater datatype
    char string[] = "innominds company";
    char substring[] = "inn";
    // declaring size for string and substring
    int size1 = sizeof(string) / sizeof(char);
    int size2 = sizeof(substring) / sizeof(char);
    // calling start_substring function
    start_substring(string, substring);
    // calling print function
    print();
}