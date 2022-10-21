#include <stdio.h>
#include <stdlib.h>

int N;
int Q;
int arr[2][1001];

void s(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    scanf("%d", &N);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    scanf("%d", &Q);
    for (int i = 0; i < Q; i++)
    {
        char buff1[5], buff2[5];
        int x, y;
        scanf("%s %d %s %d", buff1, &x, buff2, &y);

        int p = buff1[0] - 'A';
        int q = buff2[0] - 'A';
        x--;
        y--;
        s(&arr[p][x], &arr[q][y]);
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d", arr[i][j]);
            if (j + 1 < N)
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
    
}