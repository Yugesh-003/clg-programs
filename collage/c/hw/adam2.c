#include <stdio.h>

int main() {
    int rev = 0, num, no, o_no, sqr, revsqr = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &no);

    o_no = no;             // Original number
    sqr = no * no;         // Square of the original number

    // Reverse the original number
    while (no > 0) {
        rev = rev * 10 + no % 10;
        no /= 10;
    }

    temp = rev * rev;      // Square of the reversed number

    // Reverse the square of the reversed number
    while (temp > 0) {
        revsqr = revsqr * 10 + temp % 10;
        temp /= 10;
    }

    // Print the results
    printf("Original square: %d\n", sqr);
    printf("Reversed square of reversed number: %d\n", revsqr);

    // Check if the original square is equal to the reversed square of the reversed number
    if (sqr == revsqr)
        printf("Adam number%d\n",o_no);
    else
        printf("Not an Adam number%d\n",o_no);

    return 0;
}
