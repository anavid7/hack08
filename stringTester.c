#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "string_utils.h"



int main(int argc, char **argv) {




  char a = 'a';
  char z = 'z';
  int size = 300;
  char * str = (char *)malloc(sizeof(char) * size);
  strcpy(str, "All the world's a stage, and all the men and women merely players: they have their exits and their entrances; and one man in his time plays many parts, his acts being seven ages. William Shakespeare");
  str[6] = '\0';
  char *copy = replaceCharCopy(str, a, z);
  printf("%s\n", copy);




  //replaceCharCopy(const char *str, char oldChar, char newChar);




  //removeChar(char *str, char c);




  //removeCharCopy(const char *str, char c);



  //lengthSplit(const char *str, int n);






















return 0;
}
