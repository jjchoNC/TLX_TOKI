#include <stdio.h>

int main(){
    int a[100];
    int b = 0;
    while (scanf("%d",&a[b]) != EOF)
    { 
        b++;
    }

    for (int j = 0; j < b; j++)
    {
        printf("%d\n", a[b-j-1]);
    }
    
}