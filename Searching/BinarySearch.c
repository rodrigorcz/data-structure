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
    recusive_binary_search(vet, 0, size-1, elem);
}

int recusive_binary_search(int *vet, int top, int bot, int elem){
    int mid;

    if(bot>=top)
        return (bot == top && elem == vet[bot]) ? bot : -1;

    mid = bot + (top - bot)/2;

    if(elem == vet[mid])
        return mid;

    return( elem < vet[mid]) ? recusive_binary_search(vet, bot, mid-1, elem) : recusive_binary_search(vet, mid+1, top, elem);
}

int iterative_binary_search(int *vet, int elem, int size){
   int bot, top, mid;
    
    bot = 0;
    top = size - 1;

    while (bot <= top) {
        mid = bot + (top - bot) / 2;
        
        if (vet[mid] == elem)
            return mid; 
        
        if (vet[mid] > elem)
            top = mid - 1; 
        else
            top = mid + 1; 
    
    return -1; 
}

