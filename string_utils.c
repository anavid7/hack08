#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "string_utils.h"

void replaceChar(char *s, char oldChar, char newChar) {
  int i;
  for (i=0; i<strlen(s); i++) {
    if (s[i] == oldChar) {
      s[i] = newChar;
    }
  }
  return;
}


char * replaceCharCopy(const char *s, char oldChar, char newChar) {
  int length = strlen(s);
  char* copy = (char *)malloc(sizeof(char) * length);
  copy = strcpy(copy, s);
  replaceChar(copy, oldChar, newChar);
return copy;
}

void removeChar(char *s, char c) {
  for(int i = 0; i < strlen(s); i++) {
    int j = 0;
    if(s[i] == c) {
      for(int j = i; j < strlen(s); j++) {
  	       s[j] = s[j + 1];
         }
         j = i;
         while(s[j] == c) {
           for(int j = i; j < strlen(s); j++) {
  	          s[j] = s[j + 1];
              }
            }
          } else if(s[i] == '\0') {
            for(int j = i; j < strlen(s); j++) {
  	             s[j] = '\0';
               }
              }
            }
            return;
          }

char * removeCharCopy(const char *s, char c) {
  char *NewCopy = (char *) malloc(sizeof(char) * (strlen(s) + 1));
    strcpy(NewCopy, s);
    removeChar(NewCopy, c);
    return NewCopy;
  }

char **lengthSplit(const char *s, int n) {
int lengthSplit1 = strlen(s);
int rows = ceil(1.0  * lengthSplit1 / n);
char **matrix = (char **)malloc(sizeof(char*) * (rows));
  for(int i = 0; i < rows; i++) {
      matrix[i] = (char *)malloc(sizeof(char) * n);
    }
  int k = 0;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < n; j++) {
        matrix[i][j] = s[k];
        k++;
        matrix[i][n] = '\0';
      }
    }
  return matrix;
}
