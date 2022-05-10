#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool endswith = false;
// writing a function for a string that end with substring or not by taking parameters
// string and substring
void end_substring(char string[], char substring[])
{
    // declaring size for string and substring
    int size1 = sizeof(string) / sizeof(char);
    int size2 = sizeof(substring) / sizeof(char);
    //checking the condition by using if condition
    if (size2 <= size1)
    {
        for (int i = 0; i < size2; i++)
        {
            //if string is not equal to substring means return false
            if (string[i + size1 - size2] != substring[i])
            {
                endswith = false;
                break;
            }
            //else return true
            endswith = true;
        }
    }
}
//printing the substring by using print function
void print()
{
    //if a string ends with substring 
    if (endswith)
    {
        //print the statement if the condition is true
        printf("ends with substring.\n");
    }
    else
    //print the statement if the condition is false
        printf("is not ends with substring.\n");
}
int main()
{
    //intializing the string
    char string[] = "innominds company";
    //intializing the substring
    char substring[] = "any";
    //calling the end_substring function
    end_substring(string, substring);
    //calling print function
    print();
}
