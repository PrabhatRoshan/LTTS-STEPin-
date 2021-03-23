#include<stdio.h>
#include<conio.h>
#include "add.c"
#include "sub.c"
#include "mul.c"
#include "div.c"


int main(){
    complex_t number1, number2, result;
    number1.real=10;
    number1.imaginary=-8;
    number2.real=4;
    number2.imaginary=-6;

    result=sum(number1, number2);
    printf("addition of both number is: %f %fi\n",result.real, result.imaginary);

    result=sub(number2, number2);
    printf("substraction of both number is: %f %fi\n",result.real, result.imaginary);
    
    result=mul(number1, number2);
    printf("multiplication of both number is: %f %fi\n",result.real, result.imaginary);
    
    result=div(number1, number2);
    printf("division of both number is: %f %fi",result.real, result.imaginary);

    return 0;
}