#include <stdio.h>

#define IN 1 //внутри слова
#define OUT 0 //вне слова
#define MAXLEN 10
//подсчет строк, слов и симвлов
void main()
{
  int i, j, c, lenw, maxlenw, state;
  state = OUT;
  maxlenw, lenw = 0;
  int lenwords[MAXLEN];

  for (i = 0; i < MAXLEN; ++i)
      lenwords[i] = 0;


  while((c = getchar()) != EOF) {
      if (c == ' ' || c == '\t' || c == '\n') {
          if (state == IN) {
              if (lenw<MAXLEN)
                  lenwords[lenw]+= 1;
              lenw = 0;
              state = OUT;
          }
      }
      else {
          lenw+= 1;
          if (lenw > maxlenw)
              maxlenw = lenw;
          state = IN;
      }
  }

  for (i = 0; i < maxlenw; ++i) {
      for (j = 0; j < MAXLEN; ++j)
          if (lenwords[j] > i)
              printf("* ");
      putchar('\n');
  }
}
