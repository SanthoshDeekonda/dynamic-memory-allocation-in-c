#include <stdio.h>
#include <stdlib.h>


int main(){

    //allocating memory 
    int* ptr = (int*)malloc(4);

    printf("%zu bytes", sizeof(*ptr));
    *ptr = 10;
    printf("\n%d", *ptr);
    
    free(ptr);

    printf("\n%d", *ptr);

    return 0;   

}