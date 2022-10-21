#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int a;
    for (int i = 0; i < n; i++)
    { 
        int b = 0;
        scanf("%d", &a);
        for (int i = 1; i <= sqrt(a); i++)
        {
            if (a % i == 0)
            {
                b++;
            }
        }

        if (b <= 2 && a >= 1)
        {
            printf("YA\n");
        }

        else
        {
            printf("BUKAN\n");
        }
    }
}