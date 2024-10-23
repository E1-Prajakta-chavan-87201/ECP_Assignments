#include <stdio.h>
#include <string.h>


void convert_to_words(int num, char *words);
void append_number_words(int num, char *words);


const char *single_digits[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
const char *two_digits[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
const char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
const char *thousands[] = {"", "Thousand", "Million", "Billion"};


void append_number_words(int num, char *words) {
    if (num == 0) return;

    if (num >= 100) {
        int hundreds = num / 100;
        strcat(words, single_digits[hundreds]);
        strcat(words, " Hundred ");
        num %= 100;
    }

    if (num >= 20) {
        int tens_place = num / 10;
        int units_place = num % 10;
        strcat(words, tens[tens_place]);
        if (units_place > 0) {
            strcat(words, " ");
            strcat(words, single_digits[units_place]);
        }
    } else if (num >= 10) {
        strcat(words, two_digits[num - 10]);
    } else if (num > 0) {
        strcat(words, single_digits[num]);
    }
}

void convert_to_words(int num, char *words) {
    if (num == 0) {
        strcpy(words, "Zero");
        return;
    }

    int segment_count = 0;
    char segment_words[100];

    while (num > 0) {
        int segment = num % 1000;
        num /= 1000;

        segment_words[0] = '\0';
        append_number_words(segment, segment_words);

        if (strlen(segment_words) > 0) {
            if (segment_count > 0) {
                strcat(segment_words, " ");
                strcat(segment_words, thousands[segment_count]);
            }
            strcat(segment_words, " ");
            strcat(words, segment_words);
        }
        segment_count++;
    }

    

    char final_words[1000];
    int i, j, k;

    for (i = 0, j = strlen(words) - 1; i < j; i++, j--) {
        char temp = words[i];
        words[i] = words[j];
        words[j] = temp;
    }
}

int main() {
    int num = 123456789;
    char words[1000] = "";

   
    convert_to_words(num, words);

 
    printf("Number %d in words: %s\n", num, words);

    return 0;
}

