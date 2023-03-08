#include "towerah.h"

/*
 * * ispalindrome - compares the string itself if its halfly equal
 *
 *
 *
 *
 *
 */

bool ispalindrome(char str[]){
    bool res;
    if (*str == 0 || *(str + 1) == 0)
        return 1;
    else{
        res = ispalindrome(str + 1);
