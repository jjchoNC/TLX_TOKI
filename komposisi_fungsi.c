#include <stdio.h>
#include <stdlib.h>

int hitung(int a, int b, int c){
    c = abs(a*c + b);
    return c;
}

int fungsi(int a, int b, int c, int k){
    if (k == 1)
    {
        return c;
    }
    
    else
    {
        for (int i = 1; i < k; i++)
        {   
            c = hitung(a,b,c);
        }
    }
    return c;
}

int main(){
    int a,b,x,k;
    scanf("%d %d %d %d",&a,&b,&k,&x);
    int c = abs(a*x + b);
    printf("%d", fungsi(a,b,c,k));
    return 0;
}