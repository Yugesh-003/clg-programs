//max of given numbers using pointers

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *ptr, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for n integers
    ptr = (int *)malloc(n * sizeof(int));

    // Input the elements
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }

    // Initialize max with the first element
    max = *ptr;

    // Find the maximum element
    for (i = 1; i < n; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    printf("The maximum element is: %d\n", max);
}
