#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int main(){
    int arr1[MAX_SIZE];
    int arr2[MAX_SIZE];
    int i, n, val;
    int *ptr = arr1;
    FILE *fptr;
    fptr = fopen("input.txt", "r");

    if(fptr == NULL){
        printf("Error!");
        return EXIT_FAILURE;
    }

    i = 0;
    n = 0;
    while(fscanf(fptr, "%d", (ptr + i)) > 0){
        ++n;
        ++i;
    }

    for(i = 0; i < n; i++){
        arr2[i] = *(ptr + i);
    }

    printf("Destination array: ");
    for(i = 0; i < n; i++){
        printf("%d ", *(ptr + i));
    }
    printf("\n");
}
