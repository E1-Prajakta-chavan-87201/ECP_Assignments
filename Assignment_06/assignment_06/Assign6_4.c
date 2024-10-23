#include <stdio.h>
#include <stdbool.h>


bool is_in_string(const char *str, char ch) {
    while (*str != '\0') {
        if (*str == ch) {
            return true;
        }
        str++;
    }
    return false;
}

void remove_chars(char *string2, const char *string1) {
    char *src = string2;  
    char *dst = string2;

    while (*src != '\0') {
       
        if (!is_in_string(string1, *src)) {
            *dst = *src;
            dst++;
        }
        src++;
    }
    *dst = '\0';
}

int main() {
   
    char string2[] = "Hello, World!";
    const char string1[] = "oW";

    printf("Original String2: %s\n", string2);

   
    remove_chars(string2, string1);

    printf("Modified String2: %s\n", string2);

    return 0;
}

