#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 100

struct student {
    int zid; // 4 bytes
    double ass1Mark; // 8 bytes
    char name[MAX_NAME]; // 100 bytes
}; // 112 bytes


int main(void) {
    
    // Making just a plain struct 
    
    //   type   // // name//
    struct student frankie; // C creates space for the struct
    
    
    frankie.zid = 5333333;
    frankie.ass1Mark = 99.9;
    // frankie.name = "Frankie"; <-- not this
    strcpy(frankie.name, "Frankie");
    
    // Pass by value
    
    // Making a pointer to a struct
    struct student *chicken = malloc(sizeof(struct student));
    
    chicken->zid = 5132441;
    chicken->ass1Mark = 50.0;
    strcpy(chicken->name, "Chicken");
    
    setMarkTo100(chicken);
    
    printf("%lf\n", chicken->ass1Mark);
    /*
    int array[10];
    array[0] = 10; // Setting
    int valueAtZero = array[0]; // Getting
    */
}

