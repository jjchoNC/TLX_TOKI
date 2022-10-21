#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += b[i];
    }
    printf("%d", total);
}