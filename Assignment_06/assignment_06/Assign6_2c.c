#include <stdio.h>


char* my_strcat(char *dest, const char *src) {
    char *ptr = dest;

    
    while (*dest != '\0') {
        dest++;
    }

    
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    
    
    *dest = '\0';

    return ptr;  
}

int main() {
    
    char dest[100] = "Hello, ";
    const char src[] = "World!";

    
    my_strcat(dest, src);

   
    printf("Destination after concatenation: %s\n", dest);

    return 0;
}

