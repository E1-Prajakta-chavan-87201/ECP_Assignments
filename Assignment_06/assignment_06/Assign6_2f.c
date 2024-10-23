#include <stdio.h>
#include <string.h>


char* my_strrev(char *str) {
    int start = 0;
    int end = strlen(str) - 1;  
    char temp;

    
    while (start < end) {
        
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        
        start++;
        end--;
    }

    return str; 
}

int main() {
   
    char str[] = "Hello, World!";

  
    printf("Original String: %s\n", str);
    my_strrev(str);
    printf("Reversed String: %s\n", str);

    return 0;
}

