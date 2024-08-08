#include <stdio.h>
#include <stdlib.h>


int main(){

    int n,i,j;
    printf("Enter the size: ");
    scanf("%d", &n);

    //allocating memory for n integers
    int* ptr = (int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++){
        ptr[i] = i;
        printf("\n%d -> %p", ptr[i], ptr+i);
    }

    n = n+5;

    //reallocating memory for the exsisting data to add more data
    ptr = (int*)realloc(ptr,n*sizeof(int));
    for(int j = i; j<n; j++){
        ptr[j]=j;
    }


    //printing the data
    printf("\nafter reallocating\n");
    for(int k=0;k<n;k++){
        printf("\n%d->%p",ptr[k],ptr+i);
    }



    return 0;
}