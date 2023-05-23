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
#include <stdbool.h>

/* 
    Sequential Search Methods

    Return the position of the element if it is found or return -1
*/

int sequential_search(int *vet, int size, int elem){
    int pos;
    for(pos = 0; pos<size; pos++)
        if(vet[pos] == elem)
            return pos;
    return -1; 
}

int sentinel_sequential_search(int *vet, int size, int elem){
    int pos;
    vet[size] = elem; //sentinel in last position
    for(pos = 0; vet[pos]!=elem; pos++)
    return (pos < size) ? pos : -1; 
}

/* 
    Self Organization Methods 

    Improve efficiency of linear search moving frequently items toward the head of the list
    
*/

bool move_to_front_search(int *vet, int size, int elem){
    int aux1, aux2, i;
    for(i = 0; i< size; i++){
        if(vet[i] == elem){
            aux1 = elem;
            for(int j = 0; j<i;j++){
                aux2 = vet[j+1];
                vet[j+1] = vet [j]; 
                vet[j] = aux2;
            }
            return true;
        }
    }
    return false;
}

bool transpose_search(int *vet, int size, int elem){
    int aux, i;

    for(i = 0; i<size; i++)
        if(vet[i] == elem){
            aux = vet[i-1];
            vet[i-1] = vet[i];
            vet[i] = aux;
            return true;
        }
    return false;
}