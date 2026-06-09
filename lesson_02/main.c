#include <stdio.h>
#include <stdbool.h>

int main(){
    // int age = 25; // Declaring an integer variable named 'age' and initializing it with the value 25
    // int year = 2025;
    // int quantity = 2; // Declaring an integer variable named 'quantity' and initializing it with the value 10
    // float gpa = 2.5; // Declaring a float variable named 'height' and initializing it with the value 5.9
    // float price = 19.99; // Declaring a float variable named 'price' and initializing it with the value 19.99
    // float temperature = -10.1; // Declaring a float variable named 'temperature' and initializing it with the value 36.5
    // double pi = 3.14159265358979 ; // Declaring a double variable named 'pi' and initializing it with the value of pi
    // double e = 2.718281828459045; // Declaring a double variable named 'e' and initializing it with the value of e
    // char grade = 'A'; // Declaring a char variable named 'grade' and initializing it with the value 'A'   
    // char symbol = '!'; // Declaring a char variable named 'symbol' and initializing it with the value '$'
    // char currency = '$'; // Declaring a char variable named 'currency' and initializing it with the value '$'
    // char name[] = "Bro code"; // Declaring a char array named 'name' and initializing it with the string "Bro code"
    // char food[] = "Pizza"; // Declaring a char array named 'food' and initializing it with the string "Pizza"
    // char email[] = "fake123@gmail.com"; // Declaring a char array named 'email' and initializing it with the string "fake123@gmail.com"
    bool isOnline = false; // Declaring a boolean variable named 'isOnline' and initializing it with the value true
    bool isStudent = true; // Declaring a boolean variable named 'isStudent' and initializing it with the value false
    bool forsale = true; // Declaring a boolean variable named 'forsale' and initializing it with the value true

    // printf("You are %d years old.\n", age); // Printing a message that includes the value of 'age' using the %d format specifier
    //printf("The year is %d.\n", year); // Printing a message that includes the value of 'year' using the %d format specifier
    //printf("You have ordered %d x items.\n", quantity); // Printing a message that includes the value of 'quantity' using the %d format specifier
    //printf("Your gpa is: %f\n", gpa); // Printing the value of 'height' using the %.1f format specifier for one decimal place
    //printf("The price is: $%f\n", price); // Printing the value of 'price' using the %.2f format specifier for two decimal places
    //printf("The temperature is: %f°F\n", temperature); // Printing the value of 'temperature' using the %.1f format specifier for one decimal place
    //printf("The value of pi is: %lf\n", pi); // Printing the value of 'pi' using the %lf format specifier for a double
    //printf("The value of e is: %lf\n", e); // Printing the value of 'e' using the %lf format specifier for a double
    //printf("Your grade is %c\n", grade); // Printing the value of 'grade' using the %c format specifier
    //printf("You favorite symbol is %c\n", symbol); // Printing the value of 'symbol' using the %c format specifier
    //printf("Hello %s\n", name); // Printing the value of 'name' using the %s format specifier
    //printf("You favorite food is %s\n", food); // Printing the value of 'food' using the %s format specifier
    //printf("Your email is %s\n", email); // Printing the value of 'email' using the %s format specifier
    if (isOnline) {
        printf("You are online\n"); // Printing a message if 'isOnline' is true
    } else {
        printf("You are offline\n"); // Printing a message if 'isOnline' is false
    }
    if (isStudent) {
        printf("You are a student\n"); // Printing a message if 'isStudent' is true
    } else {
        printf("You are not a student\n"); // Printing a message if 'isStudent' is false
    }
    if (forsale) {
        printf("This item is for sale\n"); // Printing a message if 'forsale' is true
    } else {
        printf("This item is not for sale\n"); // Printing a message if 'forsale' is false
    }
    return 0;
}