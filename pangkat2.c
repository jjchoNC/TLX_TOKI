#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    while (a % 2 == 0)
    {   
        a /= 2;
    }

    if (a != 1)
    {
        printf("bukan");
    }

    else
    {
        printf("ya");
    }
    return 0;
}