#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,i;

    printf("\nEnter the number of blocks: ");
    scanf("%d", &n);


    //allocating 10 blocks of memory of int(4 bytes)
    int* ptr = (int*)calloc(10,sizeof(int));

    for(i=0;i<n;i++){
        printf("\n%d -> %p",ptr[i], ptr+i);
    }


    return 0;
}