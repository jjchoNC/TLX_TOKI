#include <stdio.h>

int faktorial(int n) {
    if (n == 1)
    {
        return 1;
    }

    else if (n % 2 == 0)
    {
        return (n/2) * faktorial(n-1);
    }
    
    else
    {
        return n * faktorial(n-1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int hasil = n;
    printf("%d", faktorial(n));
}