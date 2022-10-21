#include <stdio.h>
#include <math.h>

int main(){
    int a;
    scanf("%d", &a);
    int const awal = a;
    int digit = 0;
    for (int i = a; i > 0; i/= 10)
    {
        digit++;
    }

    int each_digit[digit];
    for (int i = 0; i < digit; i++)
    {
        each_digit[digit-i-1] = a % 10;
        a /= 10;
    }
    
    int hasil = 0;

    for (int i = 0; i < digit; i++)
    {
        hasil += pow(each_digit[i],3);
    }
    
    if (hasil == awal)
    {
        printf("Bilangan Amstrong");
    }

    else
    {
        printf("Bukan");
    }
}