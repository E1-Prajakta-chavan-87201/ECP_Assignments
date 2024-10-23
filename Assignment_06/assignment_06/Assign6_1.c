#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];
    char str4[100] = "HelloWorld";
    char str5[100] = "HELLO";
    char *result;
    

    printf("a. strlen(): Length of str1 = %lu\n", strlen(str1));


    strcpy(str3, str1);
    printf("b. strcpy(): Copied str1 into str3 = %s\n", str3);

  
    strcat(str1, str2);
    printf("c. strcat(): Concatenated str1 and str2 = %s\n", str1);

   
    int cmp_result = strcmp(str1, str2);
    printf("d. strcmp(): Comparison result between str1 and str2 = %d\n", cmp_result);

   
    int cmp_case_insensitive = strcasecmp(str1, str5);
    printf("e. stricmp(): Case-insensitive comparison between str1 and str5 = %d\n", cmp_case_insensitive);

    
    char reverse_str[100];
    strcpy(reverse_str, str1);  
    int len = strlen(reverse_str);
    for (int i = 0; i < len / 2; i++) {
        char temp = reverse_str[i];
        reverse_str[i] = reverse_str[len - i - 1];
        reverse_str[len - i - 1] = temp;
    }
    printf("f. strrev(): Reversed str1 = %s\n", reverse_str);

    
    char *chr_result = strchr(str1, 'W');
    if (chr_result) {
        printf("g. strchr(): First occurrence of 'W' in str1 = %s\n", chr_result);
    } else {
        printf("g. strchr(): 'W' not found in str1\n");
    }

 
    result = strstr(str4, "World");
    if (result) {
        printf("h. strstr(): Substring 'World' found in str4 = %s\n", result);
    } else {
        printf("h. strstr(): 'World' not found in str4\n");
    }

 
    strncpy(str3, str2, 3);
    str3[3] = '\0';  
    printf("i. strncpy(): First 3 characters of str2 copied to str3 = %s\n", str3);

  
    strncat(str1, str2, 3);
    printf("j. strncat(): First 3 characters of str2 concatenated to str1 = %s\n", str1);

   
    int cmp_n_result = strncmp(str1, str2, 3);
    printf("k. strncmp(): Compare first 3 characters of str1 and str2 = %d\n", cmp_n_result);

   
    char sentence[] = "Hello,World,Welcome,to,C";
    char *token = strtok(sentence, ",");
    printf("l. strtok(): Tokenized sentence: ");
    while (token != NULL) {
        printf("%s ", token);
        token = strtok(NULL, ",");
    }
    printf("\n");

    return 0;
}

