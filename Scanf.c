#include <stdio.h>
int main(void) {    char str[50];
printf("�п�J 1 �� 5 ���r���G");    scanf("%[1-5]", str);    printf("��J���r���� %s\n", str);
fflush(stdin); // �M����J�w�İ�
printf("�п�J XYZ ���@�r���G");    scanf("%[XYZ]", str);    printf("��J���r���� %s\n", str);
return 0;}
