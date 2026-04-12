#include <stdio.h>

int isPalindrome(int num) {
    int rev = 0, rem, original = num;

    while(num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    return (original == rev);
}

int main() {
    int n = 121;

    if(isPalindrome(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}