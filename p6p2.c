#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0, isPalindrome = 1;

    printf("Enter any string: ");
    scanf("%s", str);

    /* Find length manually */
    while (str[j] != '\0') {
        j++;
    }
    j--;  // last index

    /* Check palindrome */
    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        printf("The given string is a Palindrome.");
    else
        printf("The given string is not a Palindrome.");

    return 0;
}