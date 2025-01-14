//intro to dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num, *ptr;

    printf("How many numbers : ");
    scanf("%d",&num);

    //to allocate the desiered size (num) of memory to ptr
    ptr = (int *)malloc(sizeof(num));

    //to accept the numbers 
    printf("Enter the numbers : \n");
    for (int i = 0; i < num; i++){
        scanf("%d", (ptr + i));
    }

    printf("The numbers are : \n");
    for (int i = 0; i < num; i++){
        printf("%d\n", *(ptr + i));
    }

}