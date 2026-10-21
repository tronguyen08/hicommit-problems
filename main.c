#include <stdio.h>

int main() {
  float t;
  scanf("%f", &t);

  if (t < 15) {
    printf("LANH");
  } else if ( 15 < t < 25) {
    printf("MAT");
  } else if (25 < t < 35) {
    printf("NONG");
  }
  return 0;
}