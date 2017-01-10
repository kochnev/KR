#include <stdio.h>
//Подсчет строк входного потока
typedef int bool;

#define true 1
#define false 0

void main()
{
  int c;
  bool is_space = false;

  while ((c = getchar()) != EOF)
      if (c == ' ') {
          if (is_space == false) {
              is_space = true;
              putchar(c);
          }
      }
      else {
          is_space = false;
          putchar(c);
      }


}
