#pragma once
#include "types.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int sleng(const char* string);
int find_first_char(const char* string, const char v);
int find_last_char(const char* string, const char v);
char* copy_str(const char* string, char* v);
char* concat_string(const char* string, const char* v, char* p);
char* reverse_string(char* string);
char* mem_copy(const char* string, char* v, usize t);
int compare_string(const char* string, const char* v);
char* copy_chars(const char* string, char* v, int t);
char* concat_chars(const char* string, char* v, int t);
int compare_nchars(const char* string, const char* v, usize t);
char* find_substring(const char* string, char* v);
int isUpper(int v);
int isLower(int v);
int charToUpper(int v);
int charToLower(int v);
char* strToUpper(char* string);
char* strToLower(char* string);
int isSpace(int v);
char* strTrimSpace(const char* string, char* v);
char* intToStr(int v, char* string, int base);