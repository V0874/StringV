#include "stringv.h"
#include <string.h>

int sleng(const char *string){
    int slen = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        slen++;
    }
    return slen;
}

int find_first_char(const char* string, const char v){
    int slen = sleng(string);
    for (int i = 0; i < slen; i++){
        if(string[i] == v){
            printf("The first occurence of %c is at index %d", v, i);
            return i;
        }
    }
}

int find_last_char(const char* string, const char v){
    int slen = sleng(string);
    for (int i = 0; i < slen; i++){
        for (int j = sleng(string) - 1; j > i; --j){
            if(string[j] == v) {
                printf("The last occurence of %c is at index %d", v, j);
                return j;
            }
        }
    }
}

char* copy_str(const char* string, char* v){
    int slen = sleng(string);
    for (int i = 0; i < slen; i++){
        v[i] = string[i];
        
    }
    v[slen] = '\0';
    return v;
}

char* concat_string(const char* string, const char* v, char* p){
    int slen = sleng(string);
    int slenV = sleng(v);
    for (int i = 0; i < slen; i++){
        p[i] = string[i];
    }
    for (int j = 0; j < slenV; j++){
        p[sleng(p)] = v[j];
    }
    p[sleng(p)] = '\0';
    printf("%sNew string built is ", p);
    return p;
}

char* reverse_string(char* string){
    int slen = sleng(string);
    for(int i = 0, j = slen - 1; j >= i; j--, i++){
        char temp = string[j];
        string[j] = string[i];
        string[i] = temp;
    }
    return string;
}

int compare_string(const char* string, const char* v){
    int i = sleng(string);
    int j = sleng(v);
    if (i != j){
        return 0;
    } else {
        for (int k = 0; k < i && k < j; k++){
            if (string[k] != v[k]){
              return 0; 
            }
        }
    }
    return 1;
}

char* mem_copy(const char* string, char* v, usize t){
    for(int i = 0; i < t; i++){
        v[i] = string[i];
    }
    return v;
}

char* copy_chars(const char* string, char* v, int t){
    for(int i = 0; i < t; i++){
        v[i] = string[i];
    }
    v[t] = '\0';
    printf("%s", v);
    return v;
}

char* concat_chars(const char* string, char* v, int t){
    int slen = sleng(string);
    for (int i = 0; i < slen; i++){
        v[i] = string[i];
    }
    for (int i = 0; i < t; i++, slen++){
        v[slen] = string[i];
    }
    v[slen] = '\0';
    printf("%s", v);
    return v;
}

int compare_nchars(const char* string, const char* v, usize t){
    for(int i = 0; i < t; i++){
        if(string[i] != v[i]){
            return 0;
        }
    }
    return 1;
}

char* find_substring(const char *string, char *v){
    int slen = sleng(string);
    int sublen = sleng(v);
    char* p;

    for(int i = 0; i <= slen - sublen; i++){
        int j;
        for(j = 0; j < sublen; j++){
            if(string[i+j] != v[j]){
                break;
            }
        }
        if (j == sublen){
            return (char *)(string + i);
        }
    }
    return NULL;
}

int isUpper(int v){
    if(v >= 'A' && v <= 'Z'){
        return 1;
    }
    return 0; 
}

int isLower(int v){
    if(v >= 'a' && v <= 'z'){
        return 1;
    }
    return 0;
}

int charToUpper(int v){
    if(isLower(v)){
        v -= 32;
    }
    return v;
}

int charToLower(int v){
    if(isUpper(v)){
        v += 32;
    }
    return v;
}

char* strToUpper(char* string){
    int slen = sleng(string);
    for(int i = 0; i < slen; i++){
        string[i] = charToUpper(string[i]);
    }
    return string;
}

char* strToLower(char* string){
    int slen = sleng(string);
    for(int i = 0; i < slen; i++){
        string[i] = charToLower(string[i]);
    }
    return string;
}

int isSpace(int v){
    if(v >= '\t' && v <= '\r' || v == ' '){
        return 1;
    }
    return 0;
}

char* strTrimSpace(const char* string, char* v){
    int slen = sleng(string);
    int j = 0;
    for(int i = 0; i < slen; i++){
        if(!isSpace(string[i])){
            v[j] = string[i];
            j++;

            if(isSpace(string[i+1])){
                v[j] = ' ';
                j++;
            }
        }
    }
        v[j] = '\0';
        return v;
}

char* intToStr(int v, char* string, int base){
    int digit;
    int secDigit;
    int i = 0;
    while(v > 0){
        digit = v % base;
        secDigit = v / base;
        digit += '0';
        string[i] = digit;
        v = secDigit;
        i++;
    }
    reverse_string(string);
    string[i] = '\0';
    return string;
}