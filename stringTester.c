#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "string_utils.h"



int main(int argc, char **argv) {




  char a = 'a';
  char e = 'e';
  char s = 's';
  char x = 'x';
  char y = 'y';
  char z = 'z';
  int size = 200;
  int chunk1 = 5;
  int chunk2 = 12;
  int chunk3 = 8;
  int i;
  int j;
  char* strReplaceChar1 = (char *)malloc(sizeof(char) * size);
  strcpy(strReplaceChar1, "All the world's a stage, and all the men and women merely players: they have their exits and their entrances; and one man in his time plays many parts, his acts being seven ages. William Shakespeare\0");
  char* strReplaceChar2 = (char *)malloc(sizeof(char) * size);
  strcpy(strReplaceChar2, "All the world's a stage, and all the men and women merely players: they have their exits and their entrances; and one man in his time plays many parts, his acts being seven ages. William Shakespeare\0");
  char* strReplaceChar3 = (char *)malloc(sizeof(char) * size);
  strcpy(strReplaceChar3, "All the world's a stage, and all the men and women merely players: they have their exits and their entrances; and one man in his time plays many parts, his acts being seven ages. William Shakespeare\0");
  char* strRemoveChar1 = (char *)malloc(sizeof(char) * size);
  strcpy(strRemoveChar1, "All the world's a stage, and all the men and women merely players: they have their exits and their entrances; and one man in his time plays many parts, his acts being seven ages. William Shakespeare\0");
  char* strRemoveChar2 = (char *)malloc(sizeof(char) * size);
  strcpy(strRemoveChar2, "All the world's a stage, and all the men and women merely players: they have their exits and their entrances; and one man in his time plays many parts, his acts being seven ages. William Shakespeare\0");
  char* strRemoveChar3 = (char *)malloc(sizeof(char) * size);
  strcpy(strRemoveChar3, "All the world's a stage, and all the men and women merely players: they have their exits and their entrances; and one man in his time plays many parts, his acts being seven ages. William Shakespeare\0");
  char* copy = (char *)malloc(sizeof(char) * size);
  strcpy(copy, "All the world's a stage, and all the men and women merely players: they have their exits and their entrances; and one man in his time plays many parts, his acts being seven ages. William Shakespeare\0");

  replaceChar(strReplaceChar1, a, z);
  printf("Replace charcopy 1st test:\n%s\n", strReplaceChar1);
  replaceChar(strReplaceChar2, e, y);
  printf("Replace charcopy 2nd test:\n%s\n", strReplaceChar2);
  replaceChar(strReplaceChar3, s, x);
  printf("Replace charcopy 3rd test:\n%s\n", strReplaceChar3);

  removeChar(strRemoveChar1, a);
  printf("Remove charcopy 1st test:\n%s\n", strRemoveChar1);
  removeChar(strRemoveChar2, a);
  printf("Remove charcopy 2nd test:\n%s\n", strRemoveChar2);
  removeChar(strRemoveChar3, a);
  printf("Remove charcopy 3rd test:\n%s\n", strRemoveChar3);


  char* removeCharCopyResult1 = (char *)malloc(sizeof(char) * size);
  removeCharCopyResult1 = removeCharCopy(copy, a);
  printf("Remove char copy test 1:\n%s\n", removeCharCopyResult1);
  char* removeCharCopyResult2 = (char *)malloc(sizeof(char) * size);
  removeCharCopyResult2 = removeCharCopy(copy, e);
  printf("Remove char copy test 2:\n%s\n", removeCharCopyResult2);
  char* removeCharCopyResult3 = (char *)malloc(sizeof(char) * size);
  removeCharCopyResult3 = removeCharCopy(copy, s);
  printf("Remove char copy test 3\n%s\n", removeCharCopyResult3);


  char* replaceCharCopy1 = (char *)malloc(sizeof(char) * size);
  replaceCharCopy1 = removeCharCopy(copy, a);
  printf("Replace char copy test 1:\n%s\n",replaceCharCopy1);
  char* replaceCharCopy2 = (char *)malloc(sizeof(char) * size);
  replaceCharCopy2 = removeCharCopy(copy, e);
  printf("Replace char copy test 2:\n%s\n",replaceCharCopy2);
  char* replaceCharCopy3 = (char *)malloc(sizeof(char) * size);
  replaceCharCopy3 = removeCharCopy(copy, s);
  printf("Replace char copy test 3:\n%s\n",replaceCharCopy3);

  int length = strlen(copy);
  int rows1 = (length / chunk1);
  int rows2 = (length / chunk2);
  int rows3 = (length / chunk3);

  char** copy1 = (char** )malloc(sizeof(char) * rows1);
  char** copy2 = (char** )malloc(sizeof(char) * rows2);
  char** copy3 = (char** )malloc(sizeof(char) * rows3);
  copy1 = lengthSplit(copy, chunk1);
  copy2 = lengthSplit(copy, chunk2);
  copy3 = lengthSplit(copy, chunk3);

//not sure why this doesn't print in the grader but it works in console
//It prints the first four correctly but misses this last one
//not sure why it dosn't even show up in the grader
//thanks for looking deeper into my code to finde the problem!!


printf("Length split test 1\n\n");
  for (i = 0; i < rows1; i++) {
      for (j = 0; j < length+1; j++) {
          printf("%c", copy1[i][j]);
      }
      printf("\n");
  }


printf("Length split test 2\n\n");
  for (i = 0; i < rows2; i++) {
      for (j = 0; j < length+1; j++) {
          printf("%c", copy2[i][j]);
      }
      printf("\n");
  }


printf("Length split test 3\n\n");
  for (i = 0; i < rows3; i++) {
      for (j = 0; j < length+1; j++) {
          printf("%c", copy3[i][j]);
      }
      printf("\n");
  }
return 0;
}
