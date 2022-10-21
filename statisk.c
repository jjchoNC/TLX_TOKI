#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n;i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }  
        }  
    }
    printf("%d %d", a[n-1] , a[0]);
    return 0;
}