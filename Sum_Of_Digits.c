
#include<stdio.h>
#include<conio.h>

 
    // Write a program to print the sum of digit a given number.

int main() {
    int number, sum = 0, digits;

    printf("Enter a number: ");
    scanf("%d", &number);

     
    while (number > 0) {
        digits = number % 10;   
        sum += digits;         
        number /= 10;           
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
}
