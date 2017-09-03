#include <stdio.h>
#include <string.h>


// This function is for judging if the words entered by users are correct or not
int main(void) {
    int score;
    char answer[20];
    char question = {'r','u','e'};

    printf("Question: regret");
    printf("Please enter your answer here:");
    fgets(answer, 20, stdin);
    printf("Your answer is %s\n", answer);
    printf("The correct answer is \'rue\'");

    // 去除最後的換行字元
    answer[strlen(answer) - 1] = '\0';
    char *loc = strstr(question, answer);

    if(strcmp(answer, question) == 0) {
        if(loc == NULL) {
          printf("Incorrect Try again (Y/N)\n");
          }
        else {
          printf("Excellent You are right\n");
          }
    }
    else {
        printf("Incorrect Try again (Y/N)\n");
    }

    return 0;
}