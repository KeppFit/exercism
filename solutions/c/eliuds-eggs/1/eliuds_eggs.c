#include "eliuds_eggs.h"
#include "stdio.h"
//
const int ERROR = -1;
int egg_count(int decimal){
    if (decimal < 0) {return ERROR;}
//
    int count = 0;
    while(decimal != 0){
        count += (decimal & 1);
        decimal >>= 1;
    }
    return count;
}
