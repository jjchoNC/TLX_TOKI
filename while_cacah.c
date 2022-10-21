#include <stdio.h>

int main () {
    int a;
    int b = 0;
    while (scanf("%d", &a) != EOF)
    {
        b += a;
    }
     printf("%d\n", b);  
}
 