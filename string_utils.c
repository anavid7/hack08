#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "string_utils.h"




// void replaceChar(char *s, char oldChar, char newChar) {
//   int i;
//   int length = strlen(s);
//   for (i=0; i<length; i++) {
//     if (s[i] == oldChar) {
//       s[i] = newChar;
//     }
//   }
// }
// char * replaceCharCopy(const char *s, char oldChar, char newChar) {
//   int length = strlen(s);
//   char* copy = (char *)malloc(sizeof(char) * length+1);
//   copy = strcpy(copy, s);
//   replaceChar(copy, oldChar, newChar);
// return copy;
// }

void removeChar(char *s, char c) {
  int i;
  int x = 0;
  int length = strlen(s);
  for (i=0; i<length; i++) {
    if (s[i] != c) {
      s[x] = s[i];
      x++;
    }
  }
}
//
// char * removeCharCopy(const char *s, char c) {
//   char *copy = (char *)malloc(sizeof(char) * length+1);
//   char *strcpy = (char *copy, const char *s);
//   removeChar(copy, c);
// return copy;
// }
//
// char **lengthSplit(const char *s, int n) {
//   int length = strlen(s);
//   int rows = length / n;
//   int **matrix = (int *)malloc(sizeof(char) * rows)
//   int i;
//   int x;
//   int z = 0;
//   for (i=0; i<rows; i++) {
//     for (x=0; x<n; x++) {
//       matrix[i][x] = s[z];
//       z++;
//     }
//   }
//   return matrix;
// }
