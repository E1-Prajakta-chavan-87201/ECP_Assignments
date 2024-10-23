#include <stdio.h>


int str_length(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}


int is_match(const char *str, const char *find) {
    int i = 0;
    while (find[i] != '\0') {
        if (str[i] != find[i]) {
            return 0;
        }
        i++;
    }
    return 1;
}


void str_copy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; 
}


void str_concat(char *dest, const char *src) {
    int i = 0, j = 0;


    while (dest[i] != '\0') {
        i++;
    }

   
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}


void find_and_replace(char *source, const char *find, const char *replace) {
    char result[1024];
    int i = 0, result_index = 0;
    int find_len = str_length(find);
    int replace_len = str_length(replace);

    result[0] = '\0'; 

    while (source[i] != '\0') {
        
        if (is_match(&source[i], find)) {
          
            int j = 0;
            while (replace[j] != '\0') {
                result[result_index++] = replace[j++];
            }

          
            i += find_len;
        } else {
            result[result_index++] = source[i++];
        }
    }
    result[result_index] = '\0'; 

   
    str_copy(source, result);
}

int main() {
    char source[1024] = "This is test time";
    const char *find = "is";
    const char *replace = "was";

    printf("Original Source: %s\n", source);

    find_and_replace(source, find, replace);

    printf("Modified Source: %s\n", source);

    return 0;
}

