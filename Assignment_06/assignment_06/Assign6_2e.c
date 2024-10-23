#include <stdio.h>
#include <ctype.h>  

int my_stricmp(const char *str1, const char *str2) {
   
    while (*str1 && *str2) {
       
        char c1 = tolower((unsigned char)*str1);
        char c2 = tolower((unsigned char)*str2);
        
        if (c1 != c2) {
            return c1 - c2;
        }

        str1++;
        str2++;
    }
    
    
    return tolower((unsigned char)*str1) - tolower((unsigned char)*str2);
}

int main() {
   
    const char str1[] = "Hello";
    const char str2[] = "hello";
    const char str3[] = "HELLO";
    const char str4[] = "world";
    
  
    int result1 = my_stricmp(str1, str2);
    int result2 = my_stricmp(str1, str3);
    int result3 = my_stricmp(str1, str4);

 
    printf("Comparison between \"%s\" and \"%s\": %d\n", str1, str2, result1);
    printf("Comparison between \"%s\" and \"%s\": %d\n", str1, str3, result2);
    printf("Comparison between \"%s\" and \"%s\": %d\n", str1, str4, result3);

    return 0;
}

