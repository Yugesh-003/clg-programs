//minimum using pointers
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    int *ptr, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", (ptr+i));
    }
    min = *ptr;
    for (i = 1; i < n; i++) 
    {

        if (*(ptr + i) < min) 
        {
            min = *(ptr + i);
        }
    }

    printf("The minimum element is: %d\n", min);

    return 0;
}
