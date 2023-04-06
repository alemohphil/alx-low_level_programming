#include <stdio.h>
#include <string.h>

int is_palindrome(char *s);

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    if (is_palindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    return 0;
}

int is_palindrome(char *s) {
    int i, j;
    int len = strlen(s) - 1; // -1 to ignore the newline character added by fgets
    for (i = 0, j = len - 1; i <= len/2; i++, j--) {
        if (s[i] != s[j]) {
            return 0; // not a palindrome
        }
    }
    return 1;
}
