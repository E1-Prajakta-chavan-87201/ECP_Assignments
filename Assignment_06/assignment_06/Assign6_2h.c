#include <stdio.h>

char* my_strstr(const char *str, const char *substr)
    if (*substr == '\0') {
        return (char*)str;
    }

    
    while (*str != '\0') {
        
        const char *s1 = str;
        const char *s2 = substr;

        while (*s1 == *s2 && *s2 != '\0') {
            s1++;
            s2++;
        }

       
        if (*s2 == '\0') {
            return (char*)str;
        }

    
        str++;
    }

    
    return NULL;
}

int main() {
   
    const char str[] = "Hello, World!";
    const char substr1[] = "World";
    const char substr2[] = "Hello";
    const char substr3[] = "Earth";

   
    char *result1 = my_strstr(str, substr1);
    char *result2 = my_strstr(str, substr2);
    char *result3 = my_strstr(str, substr3);

  
    if (result1) {
        printf("Substring \"%s\" found in \"%s\" at position: %ld\n", substr1, str, result1 - str);
    } else {
        printf("Substring \"%s\" not found in \"%s\"\n", substr1, str);
    }

    if (result2) {
        printf("Substring \"%s\" found in \"%s\" at position: %ld\n", substr2, str, result2 - str);
    } else {
        printf("Substring \"%s\" not found in \"%s\"\n", substr2, str);
    }

    if (result3) {
        printf("Substring \"%s\" found in \"%s\" at position: %ld\n", substr3, str, result3 - str);
    } else {
        printf("Substring \"%s\" not found in \"%s\"\n", substr3, str);
    }

    return 0;
}

