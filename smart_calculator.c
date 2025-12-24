#include <stdio.h>
#include <ctype.h>
#include <math.h>

float addition(float a, float b){ return a + b; }
float subtraction(float a, float b){ return a - b; }
float multiplication(float a, float b){ return a * b; }

int division(float a, float b, float *result){
    if(b == 0) return 0;
    *result = a / b;
    return 1;
}

float power(float a, float b){ return pow(a, b); }

int square_root(float a, float *result){
    if(a < 0) return 0;
    *result = sqrt(a);
    return 1;
}

int main(){
    char input;
    float a, b, result;

    printf("********** WELCOME **********\n");

    do {
        printf("\nCalculator Menu:\n");
        printf("A) Addition (+)\n");
        printf("B) Subtraction (-)\n");
        printf("C) Multiplication (*)\n");
        printf("D) Division (/)\n");
        printf("E) Power (^)\n");
        printf("F) Square Root\n");
        printf("X) Exit\n");
        printf("Choose: ");

        scanf(" %c", &input);
        input = tolower(input);

        switch(input){

            case 'a':
                printf("Enter two numbers: ");
                scanf("%f%f", &a, &b);
                printf("Result: %.2f\n", addition(a,b));
                break;

            case 'b':
                printf("Enter two numbers: ");
                scanf("%f%f", &a, &b);
                printf("Result: %.2f\n", subtraction(a,b));
                break;

            case 'c':
                printf("Enter two numbers: ");
                scanf("%f%f", &a, &b);
                printf("Result: %.2f\n", multiplication(a,b));
                break;

            case 'd':
                printf("Enter two numbers: ");
                scanf("%f%f", &a, &b);
                if(division(a,b,&result))
                    printf("Result: %.2f\n", result);
                else
                    printf("Error: Division by zero\n");
                break;

            case 'e':
                printf("Enter base and power: ");
                scanf("%f%f", &a, &b);
                printf("Result: %.2f\n", power(a,b));
                break;

            case 'f':
                printf("Enter number: ");
                scanf("%f", &a);
                if(square_root(a, &result))
                    printf("Result: %.2f\n", result);
                else
                    printf("Error: Negative numbers not allowed\n");
                break;

            case 'x':
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(input != 'x');

    return 0;
}
