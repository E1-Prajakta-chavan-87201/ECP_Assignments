#include <stdio.h>

void remove_char(char *str, char ch) {
    char *src = str;  
    char *dst = str;  

    while (*src != '\0') {
        if (*src != ch) {
            *dst = *src;  
            dst++;
        }
        src++;  
    }
    *dst = '\0';  
}

int main() {
   
    char str[] = "Hello, World!";
    char ch = 'o';

    printf("Original String: %s\n", str);

    
    remove_char(str, ch);

  
    printf("Modified String: %s\n", str);

    return 0;
}

