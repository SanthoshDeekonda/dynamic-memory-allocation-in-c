#include <stdio.h>
#include <stdlib.h>

int main(){


    int size;

    //getting user input
    printf("\nEnter the size: ");
    scanf("%d", &size);

    //dynamically allocating memory using malloc()
    int* ptr = (int*)malloc(size*sizeof(int));
    
    //adding data to the allocated memory using ptr pointer
    for(int i=0; i<size; i++){
        ptr[i] = i;
        printf("\n%d -> %p", *(ptr+i), ptr+i); //poiner arithmetic
    }
    
    return 0;
}