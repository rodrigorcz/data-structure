/**
 *  Linear Searching:
 * 
 *  -Advantages: the list does not need to sorted and not affected by insertions an deletions 
 * 
 *  -Disadvantages: slow searching of large list
 * 
 *  -Complexity: O(n)
 */


#include <stdio.h>
#include <stdlib.h>

//return -1 = value is not present in the array

int sequential_search(int *vet, int size, int elem){
    int pos;
    for(pos = 0; pos<size; pos++)
        if(vet[pos] == elem)
            break;
    return (pos < size) ? pos : -1; 
}

int sentinel_sequential_search(int *vet, int size, int elem){
    int pos;
    vet[size] = elem; //sentinel 
    for(pos = 0; vet[pos]!=elem; pos++)
    return (pos < size) ? pos : -1; 
}