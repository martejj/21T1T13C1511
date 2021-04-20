#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 100

struct student {
    char name[MAX_NAME]; // 100 bytes
    int zid;             // 4 bytes    -> 112 bytes
    double ass1_mark;    // 8 bytes
    struct student *next;
};

struct student *create_student(char name[MAX_NAME], int zid, double ass1_mark);
void give_full_marks(struct student *s);

int main(void) {
    
    struct student *harrison = create_student("Harrison", 5214808, 100.0);
    printf("%s: ass1: %lf, zid: %d\n", harrison->name, harrison->ass1_mark, harrison->zid);
    
    struct student *andrew = create_student("Andrew", 5214807, 101.0);
    
    andrew->next = harrison;
    
    struct student *marc = create_student("Marc", 5214806, 5.0);
    
    andrew->next->next = marc;
    
    struct student *curr;
    
    while(??) {
    
    }
    
    return 0;
}

void give_full_marks(struct student *s) {
    // (*s).ass1_mark = 100.0; <-- Longhand
    s->ass1_mark = 100.0;
}

struct student *create_student(char name[MAX_NAME], int zid, double ass1_mark) {
    struct student *s = malloc(sizeof(struct student));
    
    s->zid = zid;
    s->ass1_mark = ass1_mark;
    strcpy(s->name, name);
    s->next = NULL;
    
    return s;
}
