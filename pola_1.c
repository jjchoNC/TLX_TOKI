#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int c = b;
    for (int i = 1; i <= a; i++)
    {   
        if (i == b)
        {
            printf("* ");
            b  = b + c;
        }

        else
        {
            printf("%d ", i);
        }
    }
}