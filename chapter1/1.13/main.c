#include <stdio.h>

#define IN 1 //внутри слова
#define OUT 0 //вне слова
#define MAXLEN 10
//подсчет строк, слов и симвлов
void main()
{
  int i, j, c, len, maxlen, state;
  state = OUT;
  len = 0;
  int lenwords[MAXLEN];

  for (i = 0; i < MAXLEN; ++i)
      lenwords[i] = 0;

  while((c = getchar()) != EOF) {
      if (c == ' ' || c == '\t' || c == '\n') {
          if (state == IN) {
              if (len<MAXLEN)
                  lenwords[len]+= 1;
              len = 0;
              state = OUT;
          }
      }
      else {
          len+= 1;
          state = IN;
      }
  }

  for (i = 0; i < MAXLEN; ++i) {
      len = lenwords[i];
      printf("%d: ", i);
      for (j = 0; j < len; ++j) {
          putchar('*');
      }
      putchar('\n');
  }
}
