#include <stdio.h>

int main(void) {
    int input = 0;

    printf("輸入正整數：");
    scanf("%d", &input);

    printf("輸入為奇數？%c\n", input & 1 ? 'Y' : 'N');

    return 0;
}