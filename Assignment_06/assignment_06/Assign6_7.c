#include <stdio.h>

void decimal_to_roman(int num, char *roman) {
   
    const char *roman_literals[] = {
        "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"
    };
    const int roman_values[] = {
        1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1
    };

    int i = 0;  
    roman[0] = '\0';  

    
    while (num > 0) {
        while (num >= roman_values[i]) {
            num -= roman_values[i];
            strcat(roman, roman_literals[i]);
        }
        i++;
    }
}


int roman_to_decimal(const char *roman) {
  
    const char *roman_literals[] = {
        "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"
    };
    const int roman_values[] = {
        1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1
    };

    int i = 0, decimal = 0, length = strlen(roman);
    while (i < length) {
      
        for (int j = 0; j < 13; j++) {
            int len = strlen(roman_literals[j]);
            if (strncmp(&roman[i], roman_literals[j], len) == 0) {
                decimal += roman_values[j];
                i += len;
                break;
            }
        }
    }

    return decimal;
}

int main() {
    int num = 1987;
    char roman[100] = "";


    decimal_to_roman(num, roman);
    printf("Decimal %d to Roman numeral: %s\n", num, roman);

  
    int decimal = roman_to_decimal(roman);
    printf("Roman numeral %s to Decimal: %d\n", roman, decimal);

    return 0;
}

