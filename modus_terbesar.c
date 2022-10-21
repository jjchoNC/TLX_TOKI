#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int b[1001] = {0};
    for (int i = 0; i < a; i++)
    {   int c;
        scanf("%d", &c);
        b[c] += 1;
    }  

    int temp = 0;
    int max = 0;
    for (int i = 1; i <= 1000; i++)
    {
        if (b[i] >= max)
        {   max = b[i];
            temp = i;
        }     
    }
    printf("%d", temp);
}