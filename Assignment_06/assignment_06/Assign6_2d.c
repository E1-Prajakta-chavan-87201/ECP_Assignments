#include <stdio.h>

int my_strcmp(const char *str1, const char *str2) {
   
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }


    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

int main() {
   
    const char str1[] = "Hello";
    const char str2[] = "Hello";
    const char str3[] = "World";
    const char str4[] = "Hello, World!";
    
  
    int result1 = my_strcmp(str1, str2);
    int result2 = my_strcmp(str1, str3);
    int result3 = my_strcmp(str1, str4);

  
    printf("Comparison between \"%s\" and \"%s\": %d\n", str1, str2, result1);
    printf("Comparison between \"%s\" and \"%s\": %d\n", str1, str3, result2);
    printf("Comparison between \"%s\" and \"%s\": %d\n", str1, str4, result3);

    return 0;
}

