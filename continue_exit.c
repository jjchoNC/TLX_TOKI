#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int q = 1;
    for (int i = 1; i <= a; i++)
    { 
        if (i == 10*q)
        {   q++;
            continue;
        }

        else if (i == 42)
        {
            printf("ERROR");
            break;
        }
        
        else
        {
            printf("%d\n",i);
        }    
    }
    
}