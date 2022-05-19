#include <stdio.h>
#define pi 3.14
void rectangle(float length, float width)
{
    float area = length * width;
    float perimeter = 2 * (length + width);
    printf("rectangle area :%f\n", area);
    printf("perimeter of rectangle:%f\n", perimeter);
}
void circle(float radius)
{
     float area = (float)(pi * radius * radius);
     float perimeter = 2 * pi * radius;
     printf("area and perimeter of circle:%f\n%f\n",area,perimeter);
}
void right_Angled_triangle(float height,float width)
{
    float area=0.5*width*height;
    printf("arear of right angled triangle:%f\n",area);
}
void square(int side)
{
    float area=side*side;
    float perimeter=4*side;
    printf("area of square:%f\n",area);
    printf("perimeter of square:%f\n",perimeter);
}
int main()
{
    float length = 6.5;
    int width = 5;
    int radius=6;
    float height=7.5;
    int side=7;
    rectangle(length, width);
    circle(radius);
    right_Angled_triangle(height,width);
    square(side);
}