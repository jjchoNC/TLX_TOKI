#include <stdio.h>

int main(){
    int n,m,masing,sisa;
    scanf("%d %d",&n,&m);
    masing = n / m;
    sisa = n % m;
    printf("masing-masing %d\n", masing);
    printf("bersisa %d", sisa);
    return 0;
}