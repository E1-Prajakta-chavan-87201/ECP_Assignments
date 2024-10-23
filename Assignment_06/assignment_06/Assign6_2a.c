#include <stdio.h>
size_t my_strlen(const char* str) {
    size_t length = 0;
    
   
    while (str[length] != '\0') {
        length++;
    }
    
    return length;
}

int main() {
   
    const char str[] = "Hello, World!";
    
 
    size_t length = my_strlen(str);
    
  
    printf("Length of the string \"%s\" is: %lu\n", str, length);
    
    return 0;
}

