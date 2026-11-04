#include <stdio.h>

int main() {
  float dtb;
  int drl;
  scanf("%f", &dtb);
  scanf("%d", &drl);
  if (dtb >= 9.0) {
    printf("XUAT_SAC");
  } else if(8.0 <= dtb < 9.0) {
    printf("GIOI");    
  } else if(7.0 <= dtb < 8.0) {
    printf("KHA");
  } else if(dtb < 7.0) {
    printf("KHONG_DAT");
  } if (drl >= 90) {
    printf("XUAT_SAC");
  } else if(80 <= drl < 90) {
    printf("GIOI");
  } else if(70 <= drl < 80) {
    printf("KHA");
  } else {
    printf("KHONG_DAT");
  }

  if (dtb >= 9.0, drl >= 90) {
    printf("HOC_BONG_XUAT_SAC");
  } else if() {
    printf("HOC_BONG_GIOI");
  } else if() {
    printf(""HOC_BONG_KHA);
  } else {
    printf("KHONG_DAT");
  }
  return 0;
}