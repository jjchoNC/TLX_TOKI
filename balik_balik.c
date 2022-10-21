#include <stdio.h>

int walik(int a){
    int temp = a;
    int ret = 0;

    while (temp > 0)
    {
        ret = (ret*10) + (temp % 10);
        temp = temp/10;
    }
    
    return ret;
}

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int c = walik(a) + walik(b);
    printf("%d", walik(c));
}