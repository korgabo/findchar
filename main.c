#include <stdio.h>
#include "prog1.h"
#include <string.h>

int rfind_char(string s, char c){
    int hossz = strlen(s);
    for(int i = hossz; i > 0; --i){
        if(s[i] == c){
            return i;
        }
    }
    return -1;
}

int main()
{
    printf("A keresett C karakter a megadott sztringben a %d. helyen van.", rfind_char("asdasdasdasdasdsccadvasdcasdcsavacvxcvyxcvyxvxvxcv", 'c'));

    return 0;
}
