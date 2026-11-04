#include <stdio.h>

int main() {
  float dtb;
  int drl;
  float xlhl; // Có thể đổi thành int vì giá trị gán là số nguyên 1, 2, 3, 4
  int xlhk;
  
  scanf("%f", &dtb);
  scanf("%d", &drl);
  
  // Xét loại học lực (xlhl)
  if (dtb >= 9.0) xlhl = 1;
  else if (dtb >= 8.0) xlhl = 2; // Rút gọn vì dtb < 9.0 đã được check ở trên
  else if (dtb >= 7.0) xlhl = 3;
  else xlhl = 4; 
  
  // Xét loại hạnh kiểm/rèn luyện (xlhk)
  if (drl >= 90) xlhk = 1;
  else if (drl >= 80) xlhk = 2; // ĐÃ SỬA: xlhl thành xlhk
  else if (drl >= 70) xlhk = 3;
  else xlhk = 4;    
 
  // Xét điều kiện học bổng
  if (xlhl == 1 && xlhk == 1) {
    printf("HOC_BONG_XUAT_SAC\n");
  } 
  else if ((xlhl == 2 && xlhk <= 2) || (xlhl == 1 && xlhk == 2)) {
    printf("HOC_BONG_GIOI\n");
  } 
  else if ((xlhl == 3 && xlhk <= 3) || (xlhl == 2 && xlhk == 3) || (xlhl == 1 && xlhk == 3)) {
    printf("HOC_BONG_KHA\n");
  } 
  else {
    printf("KHONG_DAT\n");
  }
  
  return 0;
}
