#include <stdio.h>

// Recursive function to print a string backward
void stringReverse(const char* str) {
    // Base case: stop recursion at the null terminator
    if (*str == '\0') {
        return;
    }

    // Recursive call with the next character
    stringReverse(str + 1);

    // Print the current character after the recursive call
    putchar(*str);
}

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present (from fgets)
    char* newline = str;
    while (*newline) {
        if (*newline == '\n') {
            *newline = '\0';
            break;
        }
        newline++;
    }

    // Call the stringReverse function
    printf("The string printed backward is: ");
    stringReverse(str);
    printf("\n");

    return 0;
}
