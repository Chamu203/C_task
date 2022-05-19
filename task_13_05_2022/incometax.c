
  
#include <stdio.h>
void income_tax(float income, float tax)
{
    if (income <= 500000)
    {
        printf("\n no tax to pay");
    }
    else if (income <= 1000000)
    {
        tax = income * 0.1;
        printf("tax to be paid is:%f", tax);
    }
    else if (income <= 2000000)
    {
        tax = income * 0.18;
        printf("tax to be paid  is:%f", tax);
    }
    else if (income <= 3000000)
    {
        tax = income * 0.27;
        printf("tax to be paid  is:%f", tax);
    }
    else
    {
        tax = income * 0.35;
        printf("tax to be paid  is:%f", tax);
    }
}
int main()
{
    int income, tax;
    income_tax(income, tax);
}