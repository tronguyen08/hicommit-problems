#include <stdio.h>

int main() {
  float t;
  scanf("%f", &t);

  if (t < 15) {
    printf("LANH");
  } else if (t < 25) {
    printf("MAT");
  } else if (t < 25) {
    printf("NONG");
  } else if ( t < 35) {
    printf("RAT_NONG");
  }
  return 0;
}