#include "jollyjumper.h"
#include <stdbool.h>
#include <stdlib.h>

int isJollyJumber(const int seq[], int size) {
bool diffs_found[size]; //array to keep track of differences. 
diffs_found[0] = true; //a jolly jumper must have a difference above 0. 

for (int j = 1; j < size; j++ ) {
    diffs_found[j] = false; //initializing all diffs as false. except 0. 
}

for (int i = 0; i < size; i++) { 
    int x;
    x = seq[i] - seq[i+1]; //finding difference between elements next to eachother. 
    if(abs(x) <= size)  //taking the difference as an abs. value as the difference need to be positive. 
        diffs_found[abs(x)] = true; 
}

for (int k = 0; k < size; k++) {
    if (diffs_found[k] == false) { //if not all elements is true, the seq is not a jolly jumper. 
        return 0;
    }
}
return 1;
}

