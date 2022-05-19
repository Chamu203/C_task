#include <stdio.h>
// int main()                          //fact of a single number
// {
//     int fact = 1, number = 5, i;
//     for (i = 1; i <= number; i++)
//     {
//         fact = fact * i;
//     }
//     printf("factorial of a number:%d\n", fact);
// }

// int main()                              //factorial of number between the range
// {
//     int number, fact = 1;
//     int first_number = 1;
//     int last_number = 5;
//     printf("factorial of all numbers betwwen range of first and last numbers:\n ");
//     for (number = 1; number <= last_number; number++)
//     {
//         printf("the factorial of %d is : ", number);
//         fact *= number;
//         printf("%d \n", fact);
//     }
// }

// int main()                                  //checking prime for 1 number
// {
//     int number = 9, count = 0;
//     for (int i = 1; i <= number; i++)
//     {
//         if (number % i == 0)
//             count++;
//     }
//     if (count == 2)
//         printf("%d is prime\n", number);
//     else
//         printf("%d is not prime\n", number);
// }

// int main()                                      //checking prime for given range
// {
//     int number, count = 0, i;
//     int first_number = 1;
//     int last_number = 5;
//     printf(" checking is_prime between range of first and last numbers:\n ");
//     for (number = 1; number <= last_number; number++)
//     {
//         count = 0;
//         for (int i = 1; i <= number; i++)
//         {
//             if (number % i == 0)
//                 count++;
//         }
//         if (count == 2)
//             printf("%d is prime\n", number);
//         else
//             printf("%d is not prime\n", number);
//     }
// }

// int main()                                      //checking the number even or odd
// {
//     int number = 65, i;
//     // for (i = 0; i < number; i++)
//     //{
//     if (number % 2 == 0)
//         printf("%d\n is_even\n", number);
//     else
//         printf(" %d\n is_odd\n", number);
//     //}
// }

// int main()                              //printing all even and aodd numbers in the range
// {
//     int number, result;
//     int first_number = 1;
//     int last_number = 10;
//     printf("display the even number between %d and %d:", first_number, last_number);
//     for (int i = first_number; i <= last_number; i++)
//     {
//         result = i % 2;
//         if (result == 0)
//             printf(" %d ", i);
//     }
//     printf("\n");
//     printf("display the odd number between %d and %d:", first_number, last_number);
//     for (int i = first_number; i <= last_number; i++)
//     {
//         result = i % 2;
//         if (result != 0)
//             printf(" %d ", i);
//     }
// }

// int main()                              // print number is posite or negative
// {
//     int number = 5.3;
//     if (number >= 0)
//         printf("it is positive:%d\n", number);
//     else
//         printf("it is  not positive:%d\n", number);
// }

// int main()                                  //income tax
// {
//     int income = 1500000, tax_cutting;
//     if (0 <= income <= 500000)
//         printf("need not to pay tax\n");
//     else if (500000 <= income <= 1000000)
//     {
//         tax_cutting = income * 10 / 1000;
//         //printf("tax:%d", income);
//     }
//     else if (1000000 <= income <= 2000000)
//     {
//         tax_cutting = income * 20 / 1000;
//         //printf("tax:%d", income);
//     }
//     else if (2000000 <= income <= 3000000)
//     {
//         tax_cutting = income * 30 / 1000;
//         //printf("tax:%d", income);
//     }
//     else
//     {
//         tax_cutting >= 3000000;
//         //printf("tax is 35 percent");
//     }
//     printf("%d", tax_cutting);
// }

// int main()                                                  // circle
// {
//     float pie = 3.14;
//     int radius = 6;
//     float area = (float)(pie * radius * radius);
//     int perimeter = 2 * 3.14 * radius;
//     printf("The area of the given circle is :%f\n", area);
//     printf("the perimeter of circle:%f\n", perimeter);
// }

// int main()                                                        //rectangle
// {
//     float length = 6.5;
//     float width = 5.0;
//     float area = length * width;
//     float perimeter = 2 * (length + width);
//     printf("area of rectangle:%f\n", area);
//     printf("perimeter of rectangle:%f\n", perimeter);
// }

// int main()                                      //right angle triangle
// {
//     int height = 7, width = 8;
//     int area = 0.5 * width * height;
//     printf("area of right angle triangle:%d\n", area);
// }

// int main()                                          //INR to USD convertion
// {
//     float rupees = 1000;
//     float dollar = rupees / 78;
//     printf("INR to USD:%f\n", dollar);
// }

// int main()                                              // USD to INR convertion
// {
//     float dollar = 1008.566;
//     float rupee = dollar * 78;
//     printf("INR to USD:%f\n", rupee);
// }

// int main()                                                  // meter to feet
// {
//     float meter = 34.8668;
//     float feet;
//     float feet = meter * 3.26;
//     printf("meters to feet:%f\n", feet);
// }

// int main()                                            // feet to meter
// {
//     float feet = 7.98978;
//     float meter = feet / 3.28;
//     printf("feet to meter:%f\n", meter);
// }

// int main()                                          //celcius to farenhiet
// {
//     float celcius = 67.98;
//     float farenhiet = (celcius * 1.8) + 35;
//     printf("celcius to farenheit:%f\n", farenhiet);
// }

// int main()                                              //farenheit to celcius
// {
//     float farenheit = 5.878;
//     float celcius = ((farenheit - 32) * 5) / 9;
//     printf("farenheit to celcius:%f\n", celcius);
// }

// int main()                                                  //MPH to KMPH convertion
// {
//     float mile_per_hour = 445.89;
//     float kilometers_per_hour = mile_per_hour * 1.609344;
//     printf("MPH to KMPH:%f km/h\n", kilometers_per_hour);
// }

// int main()                                                      //MPH to KMPH
// {
//     float kilometers_per_hour = 445.89;
//     float miles_per_hour = kilometers_per_hour / 1.609344;
//     printf("MPH to KMPH:%f m/h\n", miles_per_hour);
// }

// int main()                                              //gravitational force bw 2 obj
// {
//     float Gravitational_Constant = 6.67 * (10  ^(-11));
//     int mass1 = 20000000;
//     int mass2 = 4000000;
//     int r = 15;
//     float gravitational_force = (Gravitational_Constant * mass1 * mass2) / (r * r);
//     printf("gravitational force betwwen two object is:%f\n", gravitational_force);
// }

// int main()                                                  //sum of number in an integer
// {
//     int number = 7893;
//     int sum = 0, result;
//     while (number > 0)
//     {
//         result = number % 10;
//         sum = sum + result;
//         number = number / 10;
//     }
//     printf("sum of number:%d\n", sum);
// }

// int main()                                          //maximum number
// {
//     int array[] = {2, 4, 7, 1, 33,9};
//     int number=sizeof(array)/sizeof(int);
//     int large = 0;
//     for (int i = 0; i < number; i++)
//     {
//         if (array[i] > large)
//             large = array[i];
//     }
//     printf("largest number:%d\n", large);
// }

// int main()                                       //minimum nummber incomplete
// {
//     int array[] = {2, 33, 58, 11, 65};
//     int number = sizeof(array) / sizeof(int);
//     int small, i;
//     while (array[i] > 0)
//     {
//         for (i = 0; i <= number; i++)
//         {
//             if (array[i] < small)
//             {
//                 small = array[i];
//             }
//         }
//     }
//     printf("smallest number:%d\n", small);
// }

// int main()                                                          //mean
// {
//     int array[] = {56, 78, 94, 56, 73, 42, 31, 67};
//     int length = sizeof(array) / sizeof(int);
//     int sum = 0;
//     float average;
//     for (int i = 0; i < length; i++)
//     {
//         sum = sum + array[i];
//     }
//     average = sum / length;
//     printf("The average is:%f ", average);
// }

// int main()                                                      //finding index
// {
//     int array[] = {1, 2, 3, 4, 5};
//     int element = 4;
//     int index;
//     int length = sizeof(array) / sizeof(int);
//     for (int i = 0; i < length; i++)
//     {
//         if (array[i] == element)
//         {
//             index = i;
//             printf("index of element in an array:%d\n", index);
//         }
//     }
// }

// int main()                                      //index for rang incomplete
// {
//     int array[] = {1, 2, 3, 4, 5};
//     int index, fact = 1;
//     int first_number = 1;
//     int last_number = 5;
//     int element = 3;
//     int length = sizeof(array) / sizeof(int);
//     printf(" index of a number  between range of first and last numbers:\n ");
//     for (index = 0; index <= last_number; index++)
//     {
//         for (int i = 0; i <= element; i++)
//         {
//             if (array[i] == element)
//             {
//                 index = i;
//                 printf("index of element in an array:%d\n", index);
//                 // break;
//             }
//         }
//     }
// }

// int main()                                                  ///reversing an array
// {
//     int array[] = {3, 5, 7, 2, 8};
//     int length = sizeof(array) / sizeof(int);
//     printf("reversing an array:\n");

//     for (int i = 0; i < length; i++)
//     {
//         for (int j = i; j < length; j++)
//         {
//             int temp = array[i];
//             array[i] = array[j];
//             array[j] = temp;
//         }
//     }
//     printf("{");
//     for (int i = 0; i < length; i++)
//         printf("%d ", array[i]);
//         printf("}\n");
// }

// int main()                                              //print all elements
// {
//     int array[]={3,6,1,6,8};
//     int length=sizeof(array)/sizeof(int);
//     for(int i=0;i<length;i++)
//     {
//         printf("%d ",array[i]);
//     }
// }

// int main()                                                  //occurance
// {
//     int number=5766839;
//     int digit=6;
//     int reminder,count=0;
//     while(number>0)
//     {
//         reminder=number%10;
//         if(reminder==digit)
//         {
//             count++;
//         }
//         number=number/10;
//     }
//     printf("occurance of a  digit:%d\n",count);
// }

// int main()                                               //even odd count
// {
//     int array[]={1,2,3,4,5,6,7,8,9};
//     int length=sizeof(array)/sizeof(int);
//     int even_count=0,odd_count=0;
//     for(int i=0;i<length;i++)
//     {
//         if(array[i]%2==0)
//         {
//             even_count++;
//         }
//         else
//         {
//             odd_count++;
//         }
//     }
//     printf("  evennumber  count:%d\n",even_count);
//     printf("  odd number count:%d\n",odd_count);
// }

// int main()                                                   //count even and odd
// {
//     int array[] = {3, 57, 5, 7, 8, -1, -4, 4, -3};
//     int length = sizeof(array) / sizeof(int);
//     int positive_count = 0, negative_count = 0;
//     for (int i = 0; i < length; i++)
//     {
//         if (array[i] >= 0)
//             positive_count++;
//         else
//             negative_count++;
//     }
//     printf("positive number count:%d\n", positive_count);
//     printf("negative number count :%d\n", negative_count);
// }

// int main()                                   //ascending order
// {
//     int array[] = {5, 3, 7, 1, 9, 4};
//     int length = sizeof(array) / sizeof(int);
//     int i;
//     for (i = 0; i < length; i++)
//     {
//         for (int j = i + 1; j < length; j++)
//         {
//             if (array[i] > array[j])
//             {
//                 int temp = array[i];
//                 array[i] = array[j];
//                 array[j] = temp;
//             }
//         }
//     }
//     printf("ascending order:");
//     for (i = 0; i < length; i++)
//     {
//         printf("%d ", array[i]);
//     }
// }

// int main()                                               //decending order
// {
//     int array[] = {5, 3, 7, 1, 9, 4};
//     int length = sizeof(array) / sizeof(int);
//     int i;
//     for (i = 0; i < length; i++)
//     {
//         for (int j = i + 1; j < length; j++)
//         {
//             if (array[i] < array[j])
//             {
//                 int temp = array[i];
//                 array[i] = array[j];
//                 array[j] = temp;
//             }
//         }
//     }
//     printf("decending order:");
//     for (i = 0; i < length; i++)
//     {
//         printf("%d ", array[i]);
//     }
// }

// int main()                                                       //fibonacci
// {
//     int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int length = sizeof(array) / sizeof(length);
//     int first_number = 1, second_number = 2, next_number;
//     for (int i = 2; i < length; i++)
//     {
//         next_number = first_number + second_number;
//         first_number = second_number;
//         second_number = next_number;
//     }
//     printf("%d", next_number);
// }


int main()                                              //absolute
{
    int number=-35;
    int number1=(-1)*number;
    number=abs(number1);
    printf("%d",number1);
}