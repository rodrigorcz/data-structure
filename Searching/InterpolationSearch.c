#include <stdio.h>
#include <stdlib.h>

int interpolation_search(int *vet, int elem, int size){
    int bot, top, mid;
    
    bot = 0;
    top = size - 1;

    while (bot <= top) {
        mid = bot + (top - bot)*((elem - vet[bot])/(vet[top]-vet[bot]));
        
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

