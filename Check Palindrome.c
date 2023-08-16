#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    while (num != 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }
    return 0;
}
