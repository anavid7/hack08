#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "string_utils.h"



int main(int argc, char **argv) {




  char a = 'a';
  char z = 'z';
  int size = 200;
  char * str = (char *)malloc(sizeof(char) * size);
  strcpy(str, "All the world's a stage, and all the men and women merely players: they have their exits and their entrances; and one man in his time plays many parts, his acts being seven ages. William Shakespeare");
  str[197] = '\0';
  //removeCharCopy(str, a);
  char *copy = removeCharCopy(str, a);
  printf("%s\n", copy);
  // printf("%s\n", str);




  //replaceCharCopy(const char *str, char oldChar, char newChar);




  //removeChar(char *str, char c);




  //removeCharCopy(const char *str, char c);



  //lengthSplit(const char *str, int n);






















return 0;
}
