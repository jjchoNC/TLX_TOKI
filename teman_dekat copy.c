#include <stdio.h>
#include <math.h>

int min = 2000000;
int max = 2000000;
int n;


int kecilx(int y[]){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 1 + i; j < n; j++)
        {
            if (abs(y[i] - y[j]) < min)
            {
                min = abs(y[i] - y[j]);
            }
        }        
    }
    int temp = min;
    min = 2000000;
    int kecily = temp;
    return kecily;
}

int kecily(int x[]){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 1 + i; j < n; j++)
        {
            if (abs(x[i] - x[j]) < min)
            {
                min = abs(x[i] - x[j]);
            }
        }        
    }
    int temp = min;
    min = 2000000;
    int kecilx = temp;
    return kecilx;
}

int main (){
    int d;
    scanf("%d %d\n", &n, &d);
    int x[n]; int y[n];
    for (int i = 0; i < n; i++)
    {
        scanf("\n%d %d", &x[i] , &y[i]);
    }
    
}