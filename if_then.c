#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if (a > 0 && a < 10)
    {
        printf("satuan");
    }

    else if (a >= 10 && a < 100)
    {
        printf("puluhan");
    }

    else if (a >= 100 && a < 1000)
    {
        printf("ratusan");
    }

    else if (a >= 1000 && a < 10000)
    {
        printf("ribuan");
    }

    else if (a >= 10000 && a < 100000)
    {
        printf("puluhribuan");
    }   
}