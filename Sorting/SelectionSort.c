/**
 *  Time Complexity: O(n^2)
 *  Space Complexity: O(1)     
 *  Stability: No
 */

#include "1Header_Sort.h"
#include <stdio.h>
#include <stdlib.h>

void selection_sort(list l){
    long min, minID, i, j;

    for(i = 0; i < l.size - 1; i++){
        min = l.data[i];
        minID = i;

        //finding the minimum element and his position
        for(j = i + 1; j<l.size ; j++)
            if(l.data[j] < min){
                min = l.data[j];
                minID = j;
            }

        //swap the position  
        l.data[minID] = l.data[i];
        l.data[i] = min;
    }
}