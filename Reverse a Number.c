#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int reversedNum = reverseNumber(num);
    printf("Reversed number: %d\n", reversedNum);
    return 0;
}
