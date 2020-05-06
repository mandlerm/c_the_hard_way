#include <stdio.h>
#include <ctype.h>

int main(void) {
  int a = 0 ;
  char c = 'c';
  char str[] = "Hello";
  char blk = ' ';

  if(isalpha(a)) printf("a is alpha\n");
  if(isblank(a)) printf("a is blank\n");

  if(isalpha(c)) printf("c is alpha\n");
  if(isblank(c)) printf("c is blank\n");

  if(isalpha(str[0])) printf("str[0] alpha\n");
  if(isblank(str[0])) printf("str[0] blank\n");

  if(isalpha(blk)) printf("blk's  alpha\n");
  if(isblank(blk)) printf("blk's blank\n");

  if (isupper('a')) printf("a upper\n");
  if (isupper('A')) printf("A upper\n");

  if (islower('a')) printf("a lower\n");

  return 0;
}
