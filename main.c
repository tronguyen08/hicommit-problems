#include <stdio.h>

int main() {
  int distance, order_value;
  scanf("%d %d", &distance, &order_value);

  if (distance < 0 || order_value <= 0 ) {
    printf("INVALID");
  }
  return 0;
}