#include <stdio.h>
#include <string.h>
int
main ()
{
  char s[100];
  int c = 0, n;
  scanf ("%c", s);
  n = strlen (s);
  for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
	{
	  if (s[i] == s[j])
	    s[j] = '#';
	}
    }
  for (int i = 0; i < n; i++)
    {
      if (s[i] != '#')
	   c++;
    }
  printf ("%d", c);
  return 0;
}
