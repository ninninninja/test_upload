#include <stdio.h>

int main(void) {
    char c = '\'';
    printf("��޸��r�� %c \n", c);
    printf(" \" \062 �� \x48\x45\x4c\x4c\x4f\x21 \" \n");

    return 0;
}