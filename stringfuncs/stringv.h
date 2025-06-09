#pragma once
#include "types.h"

int string_length(const char* s);
int find_first_char(const char* s, const char t);
int find_last_char(const char* s, const char t);
char* copy_str(const char* s);
char* concat_string(const char* s, const char* t);
char* reverse_string(const char* s);
char* mem_copy(const char* s, char* p, uint32);
int compare_string(const char* s, const char* t);
char* copy_chars(const char* s, char* p, int t);
char* concat_chars(const char* s, char* p, int t);