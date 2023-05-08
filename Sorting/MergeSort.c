/**
 *  Time Complexity: O(nlogn)  
 *  Space Complexity: O(n)     
 *  Stability: Yes
 */

#include "1Header.h"
#include <stdio.h>
#include <stdlib.h>

void merge_sort(list l){
    recursive_merge(l, 0, l.size - 1);
}

void recursive_merge(list l, long ini, long end){
    long mid, l1, l2, lc;

    if(ini == end)
        return;
    
    mid = (ini + end)/2 ;
    recursive_merge(l, ini, mid);
    recursive_merge(l, mid+1, end);

    l1 = lc = ini;
    l2 = mid +1;

    while(l1 <= mid && l2 <=end)
        l.copy[lc++] = (l.data[l1]<l.data[l2]) ? l.data[l1++] : l.data[l2++];

    while(l1<=mid)
        l.copy[lc++] = l.data[l1++];
    while(l2<=end)
        l.copy[lc++] = l.data[l2++];

    //overwriting the original list
    for(lc = l1; lc <= end; lc++)
        l.data[lc] = l.copy[lc];
}