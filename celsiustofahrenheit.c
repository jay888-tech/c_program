#include<stdio.h>
// convert the temp from celsius to fahrenheit 
int main() {
    float celsius,fahrenheit,temp;
    printf("enter the temp in celsius:");
    scanf("%f",&celsius);
    fahrenheit=(9.0/5.0*celsius+32);
    printf("the temp in fahrenheit is:%f\n",fahrenheit);
    printf("enter the temp in fahrenheit:");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5.0/9.0;
    printf("the temp in celsius is:%f",celsius);
    return 0;
}