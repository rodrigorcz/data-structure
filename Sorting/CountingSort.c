#include "Header.h"
#include <stdio.h>
#include <stdlib.h>

void counting_sort(list l){
    long max, i, j = 0; 
    max = l.data[0];

    for(i = 1; i<l.size ; i++)
        if(max < l.data[i])
            max = l.data[i];

    long *aux = calloc(max+1, sizeof(long));
    for(i = 0; i<l.size + 1; i++)
        aux[l.data[i]]++;

    for(i = 0; i<l.size +1; i++)
        while(aux[i] > 0){
            l.data[j++] = i;
            aux[i]--;
        }

    free(aux);
}

