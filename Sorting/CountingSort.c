/**
 *  Time Complexity: O(n)
 *  Space Complexity: O(max)     
 *  Stability: Yes
 */

#include "1Header.h"
#include <stdio.h>
#include <stdlib.h>

void counting_sort(list l){
    long max, i, j = 0; 
    max = l.data[0];

    //finding the largest element
    for(i = 1; i<l.size ; i++)
        if(max < l.data[i])
            max = l.data[i];

    //store the count of each element
    long *aux = calloc(max+1, sizeof(long));
    for(i = 0; i<l.size ; i++)
        aux[l.data[i]]++;

    //overwriting the original list
    for(i = 0; i<l.size +1; i++)
        while(aux[i] > 0){
            l.data[j++] = i;
            aux[i]--;
        }

    free(aux);
}

