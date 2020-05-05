#include <stdio.h>

int main(int argc, char* argv[] )
{
  int i = 0;

  for(i=1; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  char *states[] = {
    "California", "Oregon", "Washington", "Texas", NULL
  } ;

  // states[4] = null


  int num_states = 5 ;
  int j;
  for(i=0,  j = 10; i<num_states; i++, j--) {
    printf("states %d - %d: %s\n", i, j, states[i]);
  }

  states[2] = states[2];
  printf("%s %s", argv[2], states[2]);
  return 0;
}
