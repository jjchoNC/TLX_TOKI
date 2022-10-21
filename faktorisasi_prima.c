#include <stdio.h>
#include <math.h>

int faktorp(int a){
    int temp = a;
    int b = 1;
    for (int i = 2; i <= sqrt(a); i++)
    { 
        int pangkat = 0;
        while (a % i == 0)
        { 
            pangkat++;
            a /= i;   
        }

        if (pangkat > 1)
        {  
            printf("%d^%d ", i, pangkat);

            if (a > 1)
            {
                printf("x ");
            }    
        }

        else if (pangkat == 1 && a > 1)
        {
            printf("%d x ", i);
        }     
    }
    
if (a > 1)
{
    printf("%d", a);
}

}

int main(){
    int n;
    scanf("%d", &n);
    faktorp(n);
}