#include <stdio.h>
//Подсчет строк входного потока

void main()
{
  int c, nl, tab, space;
  nl = 0;
  space = 0;
  tab = 0;
  
  while ((c = getchar()) != EOF)
      if (c ==   '\n')
          ++nl;
      else if (c == '\t')
          ++tab;
      else if (c == ' ')
          ++space;
  printf("Количество строк = %d\n", nl);
  printf("Количество табуляций = %d\n", tab);
  printf("Количество пробелов = %d\n", space);
}
