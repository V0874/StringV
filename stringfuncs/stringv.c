#include "stringv.h"
#include <stdio.h>
#include <stdlib.h>

int string_length(char *s)
{
    int length;
    for (int i = 0; s[i] != '\0'; i++)
    {
        length = i + 1;
    }
    return length;
}

char find_first_char(char* s, char t){
    for (int i = 0; i < (int)string_length(s); i++){
        if(s[i] == t){
            printf("The first occurence of %c is at index %d", t, i);
            return i;
        }
    }
}

char find_last_char(char* s, char t){
    for (int i = 0; i < string_length(s); i++){
        for (int j = string_length(s) - 1; j > i; --j){
            if(s[j] == t) {
                printf("The last occurence of %c is at index %d", t, j);
                return j;
            }
        }
    }
}

char* copy_str(char* s){
    char* t = malloc(string_length(s) + 1);
    for (int i = 0; i < string_length(s); i++){
        t[i] = s[i];
        
    }
    t[string_length(s)] = '\0';
    printf("New string built is ", t);
    return t;
}

char* concat_string(char* s, char* t){
    char* p = malloc(string_length(s) + string_length(t) + 1);
    for (int i = 0; i < string_length(s); i++){
        p[i] = s[i];
    }
    for (int j = 0; j < string_length(t); j++){
        p[string_length(p)] = t[j];
    }
    p[string_length(p)] = '\0';
    printf("New string built is ", p);
    return p;
}

char* reverse_string(char* s){
    char* p = malloc(string_length(s) + 1);
    for(int i = 0, j = string_length(s) - 1; j >= 0; j--, i++){
        p[i] = s[j];
    }
    p[string_length(p)] = '\0';
    printf("Reversed string is %s\n", p);
    return p;
}

int compare_string(char* s, char* t){
    int i = string_length(s);
    int j = string_length(t);
    if (i != j){
        return 0;
    } else {
        for (int k = 0, m = 0; k < i  && m < j; k++, m++){
            if (s[k] != t[m]){
              return 0; 
            }
        }
    }
    return 1;
}
