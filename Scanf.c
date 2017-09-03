#include <stdio.h>
int main(void) {    char str[50];
printf("請輸入 1 到 5 的字元：");    scanf("%[1-5]", str);    printf("輸入的字元為 %s\n", str);
fflush(stdin); // 清除輸入緩衝區
printf("請輸入 XYZ 任一字元：");    scanf("%[XYZ]", str);    printf("輸入的字元為 %s\n", str);
return 0;}
