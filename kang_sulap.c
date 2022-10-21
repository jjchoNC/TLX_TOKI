#include <stdio.h>


int main(){
    int n;
    scanf("%d", &n);
    int a[2][n];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int t;
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++)
    {   int temp;
        char p,q;
        int x,y;
        scanf("\n%c %d %c %d", &p, &x, &q, &y);

        if ((p && q) != ('A' || 'B'))
        {
            return 0;
        }
        

        else if (p == 'A' && q == 'B')
        {   
            temp = a[0][x-1];
            a[0][x-1] = a[1][y-1];
            a[1][y-1] = temp;
        }
        
        else if (p == 'B' && q == 'A')
        {
            temp = a[1][y-1];
            a[1][y-1] = a[0][x-1];
            a[0][x-1] = temp;
        }

        else if (p == 'A' && p == q)
        {
            temp = a[0][x-1];
            a[0][x-1] = a[0][y-1];
            a[0][y-1] = temp;
        }

        else if (p == 'B' && p == q)
        {
            temp = a[1][x-1];
            a[1][x-1] = a[1][y-1];
            a[1][y-1] = temp;
        }
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
