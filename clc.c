#include <stdio.h>

int main() {
    int a;
    int b; 
    char equa;
    int c;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter type of equation (+, -, x, /): ");
    scanf(" %c", &equa); 

    switch (equa) {
        case '+':
            c = a + b;
            break;
        case '-':
            c = a - b;
            break;
        case 'x':
            c = a * b;
            break;
        case '/':
            if (b != 0) {
                c = a / b;
            } else {
                printf("Division by zero is not allowed.\n");
                return 1;
            }
            break;
        default:
            printf("Wrong expression.\n");
            return 1;
    }
    
    printf("%d %c %d = %d\n", a, equa, b, c);
    return 0;
}
