#include <stdio.h>

int main() {
    int x1,y1,x2,y2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    int jarak;
    if (x2 >= x1)
    {
        if (y2 >= y1)
        {
            jarak = (x2 - x1) + (y2 - y1);
        }
        
        else
        {
            
            jarak = (x2 - x1) + (y1 - y2);
        }
        
    }

    else
    {
        if (y2 >= y1)
        {
            jarak = (x1 - x2) + (y2 - y1);
        }
        
        else
        {
            
            jarak = (x1 - x2) + (y1 - y2);
        }
        
    }

    printf("%d", jarak);
    return 0;
}