#include <stdio.h>

int main () {
    char degree;
    double a;
    double switcher;

    printf("Select unit you want to convert from (c/f):\t");
    scanf(" %c", &degree); 

    printf("Enter the temperature:\t");
    scanf("%lf", &a);

    switch (degree) {
        case 'c':
            switcher = a + 273.15;
            printf("The temperature is %.2f Kelvin\n", switcher);
            break;
        case 'f':
            switcher = (a - 32) * 5/9 + 273.15;
            printf("The temperature is %.2f Kelvin\n", switcher);
            break;
        default:
            printf("Invalid input. Please enter 'c' for Celsius or 'f' for Fahrenheit.\n");
            break;
    }

    return 0;
}
