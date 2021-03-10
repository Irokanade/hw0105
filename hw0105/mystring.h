//
//  mystring.h
//  hw0105
//
//  Created by Michael Leong on 2021/3/6.
//

#ifndef mystring_h
#define mystring_h

#include <stdio.h>

char *mystrchr(const char *s, int c);
char *mystrrchr(const char *s, int c);
size_t mystrspn(const char *s, const char *accept);
size_t mystrcspn(const char *s, const char *reject);
char *mystrpbrk(const char *s, const char *accept);
char *mystrstr(const char *haystack , const char *needle);
char *mystrtok(char *str, const char *delim);

#endif /* mystring_h */
