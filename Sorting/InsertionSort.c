/**
 *  Time Complexity: O(n) Best case: List already sorted
 *                   O(n^2) Worst and Average cases
 *  Space Complexity: O(1)     
 *  Stability: Yes
 */

#include "1Header_Sort.h"
#include <stdio.h>
#include <stdlib.h>

void insertion_sort(list l){
    long i, j, aux;

    for(i = 1; i < l.size; i++){
        aux = l.data[i]; 
        for(j = i - 1; j >= 0 && aux < l.data[j]; j--)
            l.data[j+1] = l.data[j];

        l.data[++j] = aux;
    }
}