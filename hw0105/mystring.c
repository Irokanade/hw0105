//
//  mystring.c
//  hw0105
//
//  Created by Michael Leong on 2021/3/6.
//

#include "mystring.h"

char *mystrchr(const char *s, int c) {
    char *result = NULL;
    static char *lastResult;
    char *startSearch;
    
    if(s == NULL) {
        startSearch = lastResult;
    } else {
        startSearch = s;
    }
    
    for(char *i = startSearch; *i != 0; i++) {
        if(*i == c) {
            result = i;
            lastResult = result;
            return result;
        }
    }
    
    return result;
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
    
}
