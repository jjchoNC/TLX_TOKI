#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int a;
    for (int i = 0; i < n; i++)
    {   int b = 1;
        scanf("%d", &a);
        for (int i = 2; i <= sqrt(a); i++)
        {
            if (a % i == 0 && a != 2)
            {
                b = 0;
            }
        }

        if (b == 1 && a > 1)
        {
            printf("YA\n");
        }

        else
        {
            printf("BUKAN\n");
        }
    }
}