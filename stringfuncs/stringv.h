#pragma once
#include "types.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int sleng(const char* s);
int find_first_char(const char* s, const char v);
int find_last_char(const char* s, const char v);
char* copy_str(const char* s);
char* concat_string(const char* s, const char* v);
char* reverse_string(const char* s);
char* mem_copy(const char* s, char* v, usize t);
int compare_string(const char* s, const char* v);
char* copy_chars(const char* s, char* v, int t);
char* concat_chars(const char* s, char* v, int t);
int compare_nchars(const char* s, const char* v, usize t);
char* find_substring(const char* s, char* v);
int isUpper(int s);
int isLower(int s);
int charToUpper(int s);
int charToLower(int s);
char* strToUpper(char* s);
char* strToLower(char* s);
int isSpace(int s);
char* strTrimSpace(const char* s, char* v);