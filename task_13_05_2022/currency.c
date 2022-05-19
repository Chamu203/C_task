#include <stdio.h>
void rupee_dollar_convert(float rupee)
{
    float doller = rupee / 78;
    printf("rupee to dollar:%f\n", doller);
}
void doller_rupee_convert(float doller)
{
    float rupee = 57679;
    printf("dollar to rupee:%f\n", rupee);
}
void meter_feet(float meter)
{
    float feet = meter * 3.26;
    printf("meters to feet:%f\n", feet);
}
void feet_meter(float feet)
{
    float meter = feet / 3.26;
    printf(" feet to meters:%f\n", meter);
}
void celcius_farenheit(float celcius)
{
    float farenhiet = (celcius * 1.8) + 35;
    printf("celcius to farenheit:%f\n", farenhiet);
}
void farenheit_celcius(float farenheit)
{
    float celcius = ((farenheit - 32) * 5) / 9;
    printf(" farenheit to celcius:%f\n", celcius);
}
void mph_kmph_convert(float mile_per_hour)
{
    float kilometers_per_hour = mile_per_hour * 1.609344;
    printf("MPH to KMPH:%f km/h\n", kilometers_per_hour);
}
void kmph_mph_convert(float kilometer_per_hour)
{
    float miles_per_hour = kilometer_per_hour / 1.609344;
    printf("MPH to KMPH:%f m/h\n", miles_per_hour);
    //
}
void gravitation(int mass1,int mass2,int r)
{
    float Gravitational_Constant = 6.67 * (10  ^(-11));
    float gravitational_force = (Gravitational_Constant * mass1 * mass2) / (r * r);
    printf("gravitational force betwwen two object is:%f\n", gravitational_force);
}
int main()
{
    float rupee = 5678;
    float doller = 67;
    float meter = 34.8668;
    float feet = 7.98978;
    float celcius = 67.98;
    float farenheit = 5.878;
    float mile_per_hour = 445.89;
    float kilometer_per_hour = 445.89;
    int mass1 = 20000000;
    int mass2 = 4000000;
    int r = 15;
    rupee_dollar_convert(rupee);
    doller_rupee_convert(doller);
    meter_feet(meter);
    feet_meter(feet);
    celcius_farenheit(celcius);
    farenheit_celcius(farenheit);
    mph_kmph_convert(mile_per_hour);
    kmph_mph_convert(kilometer_per_hour);
    gravitation(mass1,mass2,r);
}