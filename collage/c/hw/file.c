#include<stdio.h>
int main()
{
    FILE *output;
    output = fopen ("io.txt","w");
    fputs (" cat \n",output);
    fclose(output);
    return 0;
}