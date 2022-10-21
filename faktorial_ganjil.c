#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int hasil = n;
    for (int i = n-1; i >= 1; i--)
    {
        if (i % 2 == 0)
        {
            hasil *= i/2;
        }
        
        else
        {
            hasil *= i;
        }
        
    }
    printf("%d", hasil);
}