#include <stdio.h>

/* Format specifier = Special tokens that begin with a % symbol,
                      followed by a character that specifies the data type
                      and optional modifiers (width, precision, flags).
                      They control how data is displayed or interpreted.
*/

int main(){
 /*
    int age = 25;
    float price = 19.99;
    double pi = 3.14159265;
    char currency = '$';
    char name[] = "Bro Code";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);

    // width
    int num1 = 1;
    int num2 = 10;
    int num3 = -100;

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);
    printf("===========\n");

    printf("%4d\n", num1);
    printf("%4d\n", num2);
    printf("%4d\n", num3);
    printf("===========\n");

    printf("%-4d\n", num1);
    printf("%-4d\n", num2);
    printf("%-4d\n", num3);
    printf("===========\n");

    printf("%04d\n", num1);
    printf("%04d\n", num2);
    printf("%04d\n", num3);
    printf("===========\n");

    printf("%+4d\n", num1);
    printf("%+4d\n", num2);
    printf("%+4d\n", num3);
    printf("===========\n");
*/
    // precision
    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;
/*
    printf("%f\n", price1);
    printf("%f\n", price2);
    printf("%f\n", price3);
    printf("===========\n");

    printf("%.2f\n", price1);
    printf("%.2f\n", price2);
    printf("%.2f\n", price3);
    printf("===========\n");
*/
    printf("%.1f\n", price1);
    printf("%.1f\n", price2);
    printf("%.1f\n", price3);
    printf("===========\n");

    printf("%+7.2f\n", price1);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);
    printf("===========\n");

    return 0;
}
