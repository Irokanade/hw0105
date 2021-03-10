//
//  mystring.c
//  hw0105
//
//  Created by Michael Leong on 2021/3/6.
//

#include "mystring.h"
#include <string.h>

char *mystrchr(const char *s, int c) {
    for(char *i = s; *i != 0; i++) {
        if(*i == c) {
            return i;
        }
    }
    return NULL;
}

char *mystrrchr(const char *s, int c) {
    char *result = NULL;
    
    for(char *i = s; *i != 0; i++) {
        if(*i == c) {
            result = i;
        }
    }
    
    return result;
}

size_t mystrspn(const char *s, const char *accept) {
    size_t result = 0;
    
    for(const char *i = s; *i != 0; i++) {
        //printf("value of i: %c\n", *i);
        for(const char *j = accept; *j != 0; j++) {
            //printf("value of i: %c\n", *i);
            //printf("value of j: %c\n", *j);
            if(*i == *j) {
                result++;
                break;
            }
        }
    }
    return result;
}

size_t mystrcspn(const char *s, const char *reject) {
    size_t result = 0;
    
    for(const char *i = s; *i != 0; i++) {
        for(const char *j = reject; *j != 0; j++) {
            if(*i == *j) {
                return  result;;
            }
        }
        result++;
    }
    return result;
}

char *mystrpbrk(const char *s, const char *accept) {
    char *result = NULL;
    
    for(const char *i = s; *i != 0; i++) {
        for(const char *j = accept; *j != 0; j++) {
            if(*i == *j) {
                result = i;
                return result;
            }
        }
    }
    
    return result;
}

char *mystrstr(const char *haystack , const char *needle) {
    
    for(char *i = haystack; *i != 0; i++) {
        if(strncmp(i, needle, strlen(needle)) == 0) {
            return i;
        }
    }
    
    return NULL;
}

char *mystrtok(char *str, const char *delim) {
    static char *lastResult;
    char *startSearch;
    char token[2049] = {0};
    
    if(str == NULL) {
        startSearch = lastResult;
    } else {
        startSearch = str;
        lastResult = str;
    }
    
    for(char *i = startSearch; *i != 0; i++) {
        for(char *j = delim; *j != 0; j++) {
            if(*i == 0) {
                printf("null character\n");
            }
            if(*i == *j) {
                //printf("i-lastResult: %ld\n", i-lastResult);
                strncpy(token, lastResult, i-lastResult);
                //printf("Token: \"%s\"\n", token);
                lastResult = i + 1;
                if(*token == 0) {
                    continue;
                } else {
                    return token;
                }
            }
        }
    }
    
    return NULL;
}
