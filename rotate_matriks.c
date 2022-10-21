#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d", &y, &x);
    int a[y][x];
    int b[x][y];
    int p = y -1;
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            scanf("%d", &a[i][j]);
            b[j][p-i] = a[i][j];
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

}