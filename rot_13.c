#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv)
{
  int i;
  char l;
  
  i = 0;
  if (argc != 2)
    write(1,"\n",1);
  
  
  else
  {
    
    while(argv[1][i])
    {
      if((argv[1][i] >= 'a' && argv[1][i] <= 'm') || (argv[1][i] >= 'A' && argv[1][i] <= 'M'))
            l = argv[1][i] + 13;
	  else if((argv[1][i] >= 'n' && argv[1][i] <= 'z') || (argv[1][i] >= 'N' && argv[1][i] <= 'Z'))
            l = argv[1][i] - 13;
	  else
			l = argv[1][i];
      write(1,&l,1);
      i++;
    }   
      write(1,"\n",1);
   
  }
   return (0);
}
    
