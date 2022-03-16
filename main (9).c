/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
