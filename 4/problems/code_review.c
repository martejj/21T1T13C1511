// Header comment
//  zID 
// when made
// what it does

#include <stdio.h>

int main(void) {
    int start_highschool = 7; 
    int end_highschool = 12; 
    int year;
  
    printf("What year are you in? ");
    
    scanf("%d", &year);
    
    if (year >= start_highschool && year <= end_highschool){
        printf("You are in high school\n");
    } else {
        printf("You are not in high school\n");
    }
    
    return 0;
}
