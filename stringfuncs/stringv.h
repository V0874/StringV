#pragma once
#include "types.h"
#include <stdio.h>
#include <stdlib.h>

int string_length(const char* s);
int find_first_char(const char* s, const char t);
int find_last_char(const char* s, const char t);
char* copy_str(const char* s);
char* concat_string(const char* s, const char* t);
char* reverse_string(const char* s);
char* mem_copy(const char* s, char* p, usize t);
int compare_string(const char* s, const char* p);
char* copy_chars(const char* s, char* p, int t);
char* concat_chars(const char* s, char* p, int t);
int compare_nchars(const char* s, const char* p, usize t);
char* find_substring(const char* s, char* sub);
int isUpper(int s);
int isLower(int s);
int charToUpper(int s);
int charToLower(int s);
char* strToUpper(char* s);
char* strToLower(char* s);