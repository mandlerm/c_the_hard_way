#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {

  int numbers[4] = { 0 };
  char name[4]= {'m'} ;


  // printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]) ;
  // printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
  // printf("name: %s\n", name);


  numbers[0] = 1;
  numbers[1] = 234542656;
  numbers[2] = 3092938;
  numbers[3] = 423432;

  name[0] = 'Z';
  name[1] = 'e';
  name[2] = ' d';
  name[3] = '\0';

  int cpy[4] ;
  printf("nums is: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
  memcpy(cpy, numbers, 6);
  printf("cpy is: %d %d %d %d\n", cpy[0], cpy[1], cpy[2], cpy[3]);
  // printf("memCpy %s\n", name+2);
  //
  // printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
  // printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
  // printf("name each: %d %d %d %d\n", name[0], name[1], name[2], name[3]);
  // printf("name: %s\n", name);

  char *another = name;

  // printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);

  return 0;
}
