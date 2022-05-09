#include <stdio.h>
#include <string.h>
void is_palindrome(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;
    while (right > left)
    {
        if (str[left] != str[right])
        {
            printf("%s is not a palindrom\n", str);
        }

        else
            printf("%s is a palindrome\n", str);
        left++;
        right--;
        break;
    }
}
int main()
{
    char str[] = "innominds";
    is_palindrome(str);
    return 0;
}