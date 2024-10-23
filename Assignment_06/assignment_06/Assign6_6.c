#include <stdio.h>
#include <ctype.h>


int my_atoi(const char *str) {
    int result = 0;   
    int sign = 1;   
    int index = 0;   

   
    while (isspace(str[index])) {
        index++;
    }

    
    if (str[index] == '-') {
        sign = -1;   
        index++;
    } else if (str[index] == '+') {
        index++; 
    }

    
    while (isdigit(str[index])) {
        result = result * 10 + (str[index] - '0'); 
        index++;
    }

    return result * sign;  
}

int main() {
  
    const char str1[] = "  -12345";
    const char str2[] = "67890";
    const char str3[] = "42abc";  

 
    int num1 = my_atoi(str1);
    int num2 = my_atoi(str2);
    int num3 = my_atoi(str3);


    printf("String: \"%s\" -> Integer: %d\n", str1, num1);
    printf("String: \"%s\" -> Integer: %d\n", str2, num2);
    printf("String: \"%s\" -> Integer: %d\n", str3, num3);

    return 0;
}

