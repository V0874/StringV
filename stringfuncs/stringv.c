#include "stringv.h"
#include <string.h>

int string_length(const char *s)
{
    int length = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

int find_first_char(const char* s, const char t){
    for (int i = 0; i < (int)string_length(s); i++){
        if(s[i] == t){
            printf("The first occurence of %c is at index %d", t, i);
            return i;
        }
    }
}

int find_last_char(const char* s, const char t){
    for (int i = 0; i < string_length(s); i++){
        for (int j = string_length(s) - 1; j > i; --j){
            if(s[j] == t) {
                printf("The last occurence of %c is at index %d", t, j);
                return j;
            }
        }
    }
}

char* copy_str(const char* s){
    char* t = malloc(string_length(s) + 1);
    for (int i = 0; i < string_length(s); i++){
        t[i] = s[i];
        
    }
    t[string_length(s)] = '\0';
    return t;
}

char* concat_string(const char* s, const char* t){
    char* p = malloc(string_length(s) + string_length(t) + 1);
    for (int i = 0; i < string_length(s); i++){
        p[i] = s[i];
    }
    for (int j = 0; j < string_length(t); j++){
        p[string_length(p)] = t[j];
    }
    p[string_length(p)] = '\0';
    printf("%sNew string built is ", p);
    return p;
}

char* reverse_string(const char* s){
    char* p = malloc(string_length(s) + 1);
    for(int i = 0, j = string_length(s) - 1; j >= 0; j--, i++){
        p[i] = s[j];
    }
    p[string_length(p)] = '\0';
    printf("Reversed string is %s\n", p);
    return p;
}

int compare_string(const char* s, const char* p){
    int i = string_length(s);
    int j = string_length(p);
    if (i != j){
        return 0;
    } else {
        for (int k = 0; k < i && k < j; k++){
            if (s[k] != p[k]){
              return 0; 
            }
        }
    }
    return 1;
}

char* mem_copy(const char* s, char* p, usize t){
    for(int i = 0; i < t; i++){
        p[i] = s[i];
    }
    return p;
}

char* copy_chars(const char* s, char* p, int t){
    for(int k = 0; k < t; k++){
        p[k] = s[k];
    }
    p[t] = '\0';
    printf("%s", p);
    return p;
}

char* concat_chars(const char* s, char* p, int t){
    int i = string_length(s);
    for (int k = 0; k < i; k++){
        p[k] = s[k];
    }
    for (int k = 0; k < t; k++, i++){
        p[i] = s[k];
    }
    p[i] = '\0';
    printf("%s", p);
    return p;
}

int compare_nchars(const char* s, const char* p, usize t){
    for(int i = 0; i < t; i++){
        if(s[i] != p[i]){
            return 0;
        }
    }
    return 1;
}

char* find_substring(const char *string, char *sub){
    int strlen = string_length(string);
    int sublen = string_length(sub);
    char* p;

    for(int i = 0; i <= strlen - sublen; i++){
        int j;
        for(j = 0; j < sublen; j++){
            if(string[i+j] != sub[j]){
                break;
            }
        }
        if (j == sublen){
            return (char *)(string + i);
        }
    }
    return NULL;
}

int isUpper(int s){
    if(s >= 'A' && s <= 'Z'){
        return 1;
    }
    return 0; 
}

int isLower(int s){
    if(s >= 'a' && s <= 'z'){
        return 1;
    }
    return 0;
}

int charToUpper(int s){
    if(isLower(s)){
        s -= 32;
    }
    return s;
}

int charToLower(int s){
    if(isUpper(s)){
        s += 32;
    }
    return s;
}

char* strToUpper(char* s){
    int strlen = string_length(s);
    for(int i = 0; i < strlen; i++){
        s[i] = charToUpper(s[i]);
    }
    return s;
}

char* strToLower(char* s){
    int strlen = string_length(s);
    for(int i = 0; i < strlen; i++){
        s[i] = charToLower(s[i]);
    }
    return s;
}