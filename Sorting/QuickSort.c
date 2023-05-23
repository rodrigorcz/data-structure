/**
 *  Time Complexity: O(nlogn)  Best and Average cases
 *                   O(n^2)    Worts case: smallest or largest indexed element as pivot
 *  Space Complexity: O(logn)     
 *  Stability: No
 */

#include "1Header_Sort.h"
#include <stdio.h>
#include <stdlib.h>

void quick_sort(list l){
    recursive_quick(l, 0, l.size-1);
}

void recursive_quick(list l, long ini, long end){
    long j, i, aux;

    if(ini >= end)
        return;

    i = ini;

    for(j = ini; j < end; j++)
        if(l.data[j] < l.data[end]){
            //swap l.data[i] with l.data[end]
            aux = l.data[i];
            l.data[i] = l.data[j];
            l.data[j] = aux;
            i++;
        }

    aux = l.data[i];
    l.data[i] = l.data[end];
    l.data[end] = aux;

    recursive_quick(l, ini, i-1);
    recursive_quick(l, i+1, end);
}