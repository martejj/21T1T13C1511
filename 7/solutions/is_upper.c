#include <stdio.h>

int isUpper(int ch);

int main(void) {
    
    int answer1 = isUpper('A');
    if (answer1 != 1) {
        printf("You failed the A test!!\n");
    }
    
    int answer2 = isUpper('!');
    if (answer2 != 0) {
        printf("You failed the ! test!!\n");
    }
    
    int answer3 = isUpper('a');
    if (answer3 != 0) {
        printf("You failed the a test!!\n");
    }
    
}

int isUpper(int ch) {
    
    if (ch >= 'A' && ch <= 'Z') {
        return 1;
    }
    
    return 0;
    
}
