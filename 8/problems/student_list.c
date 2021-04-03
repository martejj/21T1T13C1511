#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 100

struct student {
    int zid;
    double ass1Mark;
    char name[MAX_NAME];
    struct student *next;
};

int numberStudentsInClass(struct student *head) {

    int numStudents = 0;
    
    // Initialization
    // int i = 0;
    struct student *curr = head; // current
    while (curr != NULL) { // Condition
        numStudents++;
        // Increment of condition
        // i++;
        curr = curr->next;
    }
    
    return numStudents;
    
}

int main(void) {
    
    struct student *chicken = malloc(sizeof(struct student));
    strcpy(chicken->name, "Chicken");
    
    struct student *frankie = malloc(sizeof(struct student));
    frankie->zid = 523156;
    strcpy(frankie->name, "Frankie");
    
    struct student *harrison = malloc(sizeof(struct student));
    strcpy(harrison->name, "Harrison");
    
    chicken->next = frankie;
    frankie->next = harrison;
    harrison->next = NULL;
    
    printf("%s\n", chicken->name);
    printf("%s\n", chicken->next->name);
    printf("%d\n", chicken->next->zid);
    printf("%s\n", chicken->next->next->name);
    
    // linked list
    
}

