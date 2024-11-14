
#include<stdio.h>
#include<conio.h>

void main(){
    // Write a program to print the sum of digit a given number.

int main() {
    int number, sum = 0, digits;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Use absolute value for negative numbers
   // number = (number < 0) ? -number : number;

    while (number > 0) {
        digits = number % 10;  // Get the last digit
        sum += digits;         // Add it to sum
        number /= 10;          // Remove the last digit
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
}
