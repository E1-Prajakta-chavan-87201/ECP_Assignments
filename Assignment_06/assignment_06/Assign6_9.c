#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void find_and_replace(char *source, const char *find, const char *replace) {
    char buffer[1024]; 
    char *pos, temp[1024];
    int index = 0;
    int find_len = strlen(find);
    int replace_len = strlen(replace);

    
    buffer[0] = '\0';

   
    if (find_len == 0) {
        strcpy(buffer, source);
        return;
    }

    while ((pos = strstr(source, find)) != NULL) {
        
        strncpy(temp, source, pos - source);
        temp[pos - source] = '\0';
        
        
        strcat(temp, replace);
        
      
        strcat(temp, pos + find_len);
        
   
        strcpy(buffer, temp);
        
    
        source = buffer;
    }

    
    strcpy(source, buffer);
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

