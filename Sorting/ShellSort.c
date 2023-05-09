/**
 *  Time Complexity: O(nlogn) Best and Average cases => n^1.25
 *                   O(n^2) Worst cases => n(logn)^2
 *  Space Complexity: O(1)     
 *  Stability: No
 */

#include "1Header.h"
#include <stdio.h>
#include <stdlib.h>


void shell_sort(list l){
    //index
    long i, j;   
    long h, m, k = 0; 

    long elem, *vet = malloc(sizeof(long));
    vet[k]= 1;

    //intervals vector
    while(vet[k] < l.size){
        k++;
        vet = realloc(vet, sizeof(long) * (k+1));
        vet = 3 * vet[k-1] + 1; //Knuth
    }
    k--;

    for(; k>=0; k--){
        h = vet[k];
        for(m = 0; m < h; m++){
            for(i = h + m; i < l.size; i+=h){
                elem = l.data[i];
                for(j = i-h; j>=0 && l.data[j]> elem; j -=h )
                    l.data[j+h] = l.data[j];
                
                l.data[j+h] = elem;
    }}}
    
    free(vet);
}