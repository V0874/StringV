#include "stringv.h"
#include <string.h>

int sleng(const char *s)
{
    int slen = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        slen++;
    }
    return slen;
}

int find_first_char(const char* s, const char v){
    int slen = sleng(s);
    for (int i = 0; i < slen; i++){
        if(s[i] == v){
            printf("The first occurence of %c is at index %d", v, i);
            return i;
        }
    }
}

int find_last_char(const char* s, const char v){
    int slen = sleng(s);
    for (int i = 0; i < slen; i++){
        for (int j = sleng(s) - 1; j > i; --j){
            if(s[j] == v) {
                printf("The last occurence of %c is at index %d", v, j);
                return j;
            }
        }
    }
}

char* copy_str(const char* s){
    int slen = sleng(s);
    char* v = malloc(slen + 1);
    for (int i = 0; i < slen; i++){
        v[i] = s[i];
        
    }
    v[slen] = '\0';
    return v;
}

char* concat_string(const char* s, const char* v){
    int slen = sleng(s);
    int slenV = sleng(v);
    char* p = malloc(slen + slenV + 1);
    for (int i = 0; i < slen; i++){
        p[i] = s[i];
    }
    for (int j = 0; j < slenV; j++){
        p[sleng(p)] = v[j];
    }
    p[sleng(p)] = '\0';
    printf("%sNew string built is ", p);
    return p;
}

char* reverse_string(const char* s){
    int slen = sleng(s);
    char* p = malloc(slen + 1);
    for(int i = 0, j = slen - 1; j >= 0; j--, i++){
        p[i] = s[j];
    }
    p[sleng(p)] = '\0';
    printf("Reversed string is %s\n", p);
    return p;
}

int compare_string(const char* s, const char* v){
    int i = sleng(s);
    int j = sleng(v);
    if (i != j){
        return 0;
    } else {
        for (int k = 0; k < i && k < j; k++){
            if (s[k] != v[k]){
              return 0; 
            }
        }
    }
    return 1;
}

char* mem_copy(const char* s, char* v, usize t){
    for(int i = 0; i < t; i++){
        v[i] = s[i];
    }
    return v;
}

char* copy_chars(const char* s, char* v, int t){
    for(int i = 0; i < t; i++){
        v[i] = s[i];
    }
    v[t] = '\0';
    printf("%s", v);
    return v;
}

char* concat_chars(const char* s, char* v, int t){
    int slen = sleng(s);
    for (int i = 0; i < slen; i++){
        v[i] = s[i];
    }
    for (int i = 0; i < t; i++, slen++){
        v[slen] = s[i];
    }
    v[slen] = '\0';
    printf("%s", v);
    return v;
}

int compare_nchars(const char* s, const char* v, usize t){
    for(int i = 0; i < t; i++){
        if(s[i] != v[i]){
            return 0;
        }
    }
    return 1;
}

char* find_substring(const char *s, char *v){
    int slen = sleng(s);
    int sublen = sleng(v);
    char* p;

    for(int i = 0; i <= slen - sublen; i++){
        int j;
        for(j = 0; j < sublen; j++){
            if(s[i+j] != v[j]){
                break;
            }
        }
        if (j == sublen){
            return (char *)(s + i);
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
    int slen = sleng(s);
    for(int i = 0; i < slen; i++){
        s[i] = charToUpper(s[i]);
    }
    return s;
}

char* strToLower(char* s){
    int slen = sleng(s);
    for(int i = 0; i < slen; i++){
        s[i] = charToLower(s[i]);
    }
    return s;
}

int isSpace(int s){
    if(s >= '\t' && s <= '\r' || s == ' '){
        return 1;
    }
    return 0;
}

char* strTrimSpace(const char* s, char* v){
    int slen = sleng(s);
    int j = 0;
    for(int i = 0; i < slen; i++){
        if(!isSpace(s[i])){
            v[j] = s[i];
            j++;
            if(isSpace(s[i+1])){
                v[j] = ' ';
                j++;
            }
        }
    }
        v[j] = '\0';
        return v;
}

