#include <stdio.h>

int main () {
    int a;
    scanf("%d", &a);
    int b = 0;
    for (int i = 1; i <= a; i++)
    {   for (int j = 0; j < i; j++)
    {
        printf("%d", b);
        b++;

        if (b > 9)
        {
            b *= 0;
        } 
    }
    
        printf("\n");
    }
    
}