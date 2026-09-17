#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter a number: ");
    scanf("%d", &num2);
    
    num1 += num2;
    num2 = num1 - num2;

    num1 = num1 - num2;

    printf("New number: %d, %d", num1, num2);

}