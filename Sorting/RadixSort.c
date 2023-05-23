/**
 *  Time Complexity: O(n+k)
 *  Space Complexity: O(max)     
 *  Stability: Yes
 */

#include "1Header_Sort.h"
#include <stdio.h>
#include <stdlib.h>

char return_digit(long elem, char i){
    while (i > 0) {
        x /= 10;
        i--;
    }
    return x % 10;
}

int get_max(list l){
    long max =l.data[0];

    for(int i = 0; i<l.size; i++){
        if(l.data[i] > max )
            max = l.data[i];
    }
    return max;
}

void radix_sort(list l){
    long *queue[10], max;
    long size_que[]={0,0,0,0,0,0,0,0,0,0};
    char q, k, m, sort;
    long i, j;

    for (q = 0; q<10; q++)
        queue[q] = malloc(sizeof(long) * SIZE_MAX);

    max = get_max(l);

    // number of digits of max
    m=1;
    while(max >= 10){
        max /= 10;
        m++;
    }

    for(k = 0; k<m; k++){
        //insert elements on list
        for(i = 0; i<l.size;i++){
            q = return_digit(l.data[i], k);
            queue[q][size_que[q]] = l.data[i];
            size_que[q]++;
        }

        //remove elements on list
        sort = 1, j= 0;
        for(q = 0; q<10; q++){
            for(i = 0; i<size_que[q]; i++){
                l.data[j] = queue[q][i];
            
                if(j > 0 && l.data[j] < l.data[j - 1])
                    sort = 0; 
                    
                j++;
            }
            size_que[q] = 0;
        }
        //check if is already sorted
        if(sort == 1)
            break;
    }

    for (q = 0; q < 10; q++)
        free(queue[q]);      
}