/// Function to swap two numbers using a temporary variable

#include <stdio.h>

void swapWithTemp(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swapWithTemp(&num1, &num2);
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
