#include <stdio.h>

int main(int argc, char* argv[])
{
  int i = 0;

  if(argc == 1) {
    printf("You only have one arg -- boo to you!");
  } else if (argc > 1 && argc < 7) {
    printf("Here are your arguments: \n");
    for (i = 0 ; i < argc - 1 ; i++) {
      printf("%s ", argv[i+1]);
    }
    printf("\n");
  }
  else {
    printf("You havec too many args. Go away!\n");
  }
  return  0;
}
