#include <stdio.h>

int main(void) {
    int input = 0;

    printf("��J����ơG");
    scanf("%d", &input);

    printf("��J���_�ơH%c\n", input & 1 ? 'Y' : 'N');

    return 0;
}