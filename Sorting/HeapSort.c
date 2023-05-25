/**
 *  Time Complexity: O(nlogn)
 *  Space Complexity: O(1)     
 *  Stability: No
 */

#include "1Header_Sort.h"
#include <stdio.h>
#include <stdlib.h>

void heapify(list l, long i, long sizeH){
    long fe, fd, mf, aux;
    
    fe = ( (i * 2 + 1) < sizeH) ? i * 2 + 1 : -1;
    fd = ( (i * 2 + 2) < sizeH) ? i * 2 + 2 : -1;
    
    if (fe == -1)
        return; 
    
    mf = (fd == -1 || l.data[fe] > l.data[fd]) ? fe : fd;
    
    if (l.data[i] >= l.data[mf])
        return; 

    //swap
    aux = l.data[i];
    l.data[i] = l.data[mf];
    l.data[mf] = aux;

    rearranjar_heap(l, mf, sizeH);
}

void build_heap(list l){
    for(long i = (l.size/2) - 1; i>=0;i--)
        heapify(l, i, l.size);
}

void heap_sort(list l){
    long sizeH, aux;

    build_heap(l);

    sizeH = l.size;
    for(long i = 0; i<l.size -1; i++){
        aux = l.data[0];
        l.data[0] = l.data[sizeH - 1];
        l.data[sizeH - 1] = aux;
        sizeH--;
        heapify(l, 0, sizeH);
    }
}


