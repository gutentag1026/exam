#include <stdio.h>
#include <unistd.h>
int main(int argc, char **argv)
{
  int i;
  int j;
  int s[256];
  i = 0;
  j = 0;
  while (i <256)
  {
    s[i] = 0;
    i++;
  
  }

  if (argc != 3)
    write(1, "\n", 1);
  else
  {
    i = 0;
    while(argv[2][i])
    {
        s[(int)(argv[2][i])] = 1;
         i++;
    }
    i = 0;
    while (argv[1][i])
    {
        if (s[(int)(argv[1][i])] == 1)
        {
          write(1,&argv[1][i],1);
          s[(int)(argv[1][i])] = 0;
        }
        i++;
    }
	write(1,"\n",1);
  }
  return (0);
}
