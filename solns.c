/* Enter your solutions in this file */
#include <stdio.h>

int max(int x[], int y) {
  int larger = 0;
  for(int i = 0;i < y; i++){
    if(x[i] > x[i+1]) {
      larger = x[i];
      x[i] = x[i+1];
      x[i+1] = larger;
    }
  }
  return x[y-1];
}
int min(int x[], int y) {
  int smaller = 0;
  for(int i = 0;i < y; i++){
    if(x[i] < x[i+1]) {
      smaller = x[i];
      x[i] = x[i+1];
      x[i+1] = smaller;
    }
  }
  return x[0];
}




