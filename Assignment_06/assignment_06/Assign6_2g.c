#include <stdio.h>
char* my_strchr(const char *str, int ch) {
   
    while (*str != '\0') {
        if (*str == (char)ch) {
            return (char*)str;  
        }
        str++;  
    }

    
    if (ch == '\0') {
        return (char*)str;  
    }

    return NULL; 
}

int main() {
 
    const char str[] = "Hello, World!";
    char ch = 'W';

 
    char* result = my_strchr(str, ch);

   
    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", ch, result - str);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}

