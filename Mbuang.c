#include <stdio.h>
#include <string.h>

int main ()
{
  char str[101];
  char s[101];
  scanf("%s", &str);
  strcpy(s,str);
  int i;
  for (i = 0 ; i < 3 ; i++)
    if (strncmp (s[i],"R2xx",2) == 0)
    {
      printf ("found %s\n",str[i]);
    }
  return 0;
}