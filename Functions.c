#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 10;
    int result = add(num1, num2);
    printf("Result: %d\n", result);
    return 0;
}
