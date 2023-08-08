#include <stdio.h>
int main() 
{
    int myArray[10];
    for (int i = 0; i < 10; i++) 
    {
        myArray[i] = i + 1;
    }
    for (int i = 0; i < 10; i++) 
    {
        printf(" %d", myArray[i]);
    }
    return 0;
}