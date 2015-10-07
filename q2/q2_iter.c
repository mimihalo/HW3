#include "q2_iter.h"

char smallest_character(char str[], char c)
{
    int i=0;
    while(str[i]!='\0') {
        if(str[i]>c)
            return str[i];
        i++;
    }
    return str[0];
}

