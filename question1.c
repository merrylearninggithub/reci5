#include <stdio.h>

#define MAX_SIZE 100

int main(){
    int arr1[MAX_SIZE];
    int arr2[MAX_SIZE];
    int i, n;
    int *ptr = arr1;

    printf("Enter the size of source array: ");
    scanf("%d", &n);

    printf("Enter the elements of source array: ");
    for(i = 0; i < n; i++){
        scanf("%d", (ptr + i));
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
