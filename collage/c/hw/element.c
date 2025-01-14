#include<stdio.h>

int main() 
{
    int target, n;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the list of elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Target num: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] + arr[j] == target) {
                printf("Pair found at indices %d and %d\n", i, j);
                return 0;
            }
        }
    }

    printf("No pair found\n");
    return 0;
}
