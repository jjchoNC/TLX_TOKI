#include <stdio.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    char a[N][M];
    for (int i = 0; i < N; i++)
    {
        scanf("%s", a[i]);
    }

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (a[i][j] == 'x')
            {
                if (a[i-1][j] ==  '0' && (i - 1) >=  0)
                {
                    count++;
                }

                if (a[i-1][j+1] == '0' && (i - 1) >= 0 && j+1 < M)
                {
                    count++;
                }
                
                if (a[i][j+1] ==  '0' && j+1 < M)
                {
                    count++;
                }

                if (a[i+1][j+1] == '0' && i+1 < N && j+1 < M)
                {
                    count++;
                }

                if (a[i+1][j] ==  '0' && i+1 < N)
                {
                    count++;
                }

                if (a[i+1][j-1] == '0' && i+1 < N && j-1 >= 0)
                {
                    count++;
                }
                
                if (a[i][j-1] ==  '0' && j-1 >= 0)
                {
                    count++;
                }

                if (a[i-1][j-1] == '0' && i-1 >= 0 && j-1 >= 0)
                {
                    count++;
                }
                
            }
            
        }
    }
    printf("%d", count);
}