/**
 *  Binary Searching:
 * 
 *  -Advantages: efficient and simple
 * 
 *  -Disadvantages: the list needs to be sorted
 * 
 *  -Complexity: O(nlogn)
 */

#include <stdio.h>
#include <stdlib.h>

int binary_search(int *vet, int elem, int size){
    int bot, top, mid;
    
    bot = 0;
    top = size - 1;

    while (bot <= top) {
        mid = bot + (top - bot) / 2;
        
        //elem is in the middle
        if (vet[mid] == elem)
            return mid; 
        
        if (vet[mid] > elem) 
            top = mid - 1; //search at the bottom
        else              
            bot = mid + 1; //search at the top   
    }
    return -1; 
}

