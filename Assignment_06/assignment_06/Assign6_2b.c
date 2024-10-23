#include <stdio.h>

char* my_strcpy(char *dest, const char *src) {
    char *ptr = dest; 


    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    
   
    *dest = '\0';

    return ptr; 
}

int main() {
    
    const char src[] = "Hello, World!";
    char dest[50]; 

   
    my_strcpy(dest, src);

 
    printf("Source: %s\n", src);
    printf("Destination after copy: %s\n", dest);

    return 0;
}

