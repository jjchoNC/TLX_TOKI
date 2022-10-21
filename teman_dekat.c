#include <stdio.h>
#include <math.h>

int main(){
    int N;
    int D;
    scanf("%d %d\n", &N, &D);
    int xmax1 = 0;
    int xmax2 = 0;
    int xmin1 = 100;
    int xmin2 = 100;
    int ymax1 = 0;
    int ymax2 = 0;
    int ymin1 = 100;
    int ymin2 = 100;
    int y[N];
    for (int i = 0; i < N; i++)
    {   
        int x;
        scanf("\n%d %d", &x, &y[i]);
        if (x >= xmax1)
        {
            xmax2 = xmax1;
            xmax1 = x;
        }

        if (y[i] >= ymax1)
        {
            ymax2 = ymax1;
            ymax1 = y[i];
        }

        if (y[i] <= ymin2)
        {
            ymin2 = ymin1;
            ymin1 = y[i];
        }

        if (x <= xmin2)
        {
            xmin2 = xmin1;
            xmin1 = x;
        }

    }

    long long min = 100;
    for (int i = 0; i < N-1; i++)
    {
        for (int j = 1-i; j < N; j++)
        {
            if (y[j]-y[i] <= min)
            {
                min = y[j]-y[i];
            }
        }
        
    }
    printf("%d", min);
    long long max = abs(pow(xmax1 - xmin2, D) + pow(ymax1 - ymin2, D));
    printf("\n%lld %lld", min, max);
}