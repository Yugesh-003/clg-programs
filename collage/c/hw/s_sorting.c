//sort given n names 
#include <stdio.h>
#include <string.h>

int main()
{

    int n; 
    char names[100][100], temp[100];

    printf("Enter the number of names: ");
    scanf("%d", &n);
    
    printf("Enter the names:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
    }

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (strcmp(names[i], names[j]) > 0){
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nSorted names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
