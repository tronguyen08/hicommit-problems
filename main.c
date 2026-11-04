#include <stdio.h>

int main() {
  float dtb;
  int drl;
  float xlhl;
  int xlhk;
  scanf("%f", &dtb);
  scanf("%d", &drl);
  scanf("%f", &xlhl);
  scanf("%d", xlhk);
  if (dtb >= 9.0) {
     xlhl = 1;
    printf("XUAT_SAC");
  } else if(8.0 <= dtb < 9.0) {
    xlhl = 2;
    printf("GIOI");    
  } else if(7.0 <= dtb < 8.0) {
    xlhl = 3;
    printf("KHA");
  } else {
    xlhl = 4;
    printf("KHONG_DAT");
  } 
  
  if (drl >= 90) {
    xlhk = 1;
    printf("XUAT_SAC");
  } else if(80 <= drl < 90) {
    xlhl = 2;
    printf("TOT");
  } else if(70 <= drl < 80) {
    xlhk = 3;
    printf("KHA");
  } else {
    xlhk = 4;
    printf("KHONG_DAT");
  } 
  if (xlhl == 1 && xlhk == 1) {
    printf("HOC_BONG_XUAT_SAC");
  } else if(xlhl == 2 && (xlhk == 1 || xlhk == 2) || (xlhl == 1 && xlhk == 2)) {
    printf("HOC_BONG_GIOI");
  } else if(xlhl == 3 && (xlhk == 1 || xlhk == 2 || xlhk == 3) || xlhl == 2 && xlhk == 3 || xlhl == 1 && xlhk == 3) {
    printf("HOC_BONG_KHA");
  } else {
    printf("KHONG_DAT")
  }
  
  return 0;
}