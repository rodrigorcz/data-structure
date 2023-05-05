/**
 *  Time Complexity: O(n) Best case: List already sorted
 *                   O(n^2) Worst and Average cases
 *  Space Complexity: O(1)     
 *  Stability: Yes
 */

#include "1Header.h"
#include <stdio.h>
#include <stdlib.h>


void bubble_sort(list l){
    long aux, swt, i, j;
    
    for(i = 1; i<l.size; i++){
        swt = 0;
        for(j = 0; j<l.size - i; j++){
            if(l.data[j] > l.data[j+1]){
                aux = l.data[j];
                l.data[j] = l.data[j+1];
                l.data[j+1] = aux;
                swt = 1;
            }  
        }
        if(swt == 0)
            break;
    }
}