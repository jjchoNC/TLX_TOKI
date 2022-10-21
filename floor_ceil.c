#include <stdio.h>
#include <math.h>

int main() {
    double a;
    scanf("%lf", &a);
    int bulat = trunc(a);
    if (a == bulat)
    {
        printf("%d %d", bulat, bulat);
    }
    
    else if (a < 0)
    {
        printf("%d %d", bulat-1, bulat);
    }
    
    else
    {
        printf("%d %d", bulat, bulat + 1);
    } 
}