#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    // 1. Check the size of the array and the size of an integer
    printf("Size of the array: %lu bytes\n", sizeof(arr));
    printf("Size of an integer: %lu bytes\n", sizeof(int));

    // 2. Print the address of all the elements in the array
    for(int i = 0; i < 5; i++) {
        printf("Address of arr[%d]: %p\n", i, (void*)&arr[i]);
    }

    return 0;
}
