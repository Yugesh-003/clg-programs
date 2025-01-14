#include <stdio.h>

// Function to reverse a number
int reverse(int num) 
{
    int rev = 0;
    while (num > 0) 
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

// Main function to check if the number is an Adam number
int main() 
{
    int num, rev_num, sq_num, rev_sq_num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    rev_num = reverse(num);

    // Square the original number and the reversed number
    sq_num = num * num;
    rev_sq_num = rev_num * rev_num;

    // Reverse the square of the reversed number
    rev_sq_num = reverse(rev_sq_num);

    // Check if the square of the original number is equal to the reverse of the square of the reversed number
    if (sq_num == rev_sq_num) {
        printf("%d is an Adam number.\n", num);
    } else {
        printf("%d is not an Adam number.\n", num);
    }

    return 0;
}
