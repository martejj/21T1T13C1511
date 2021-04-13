void function2() {
    int d = 40;

}

int *function1() {
    int c = 30;
    return &c;
}

int main(void) {
    
    int i = 0;
    
    while (i < 10000) {
        
        int *my_int = malloc(sizeof(int));
        /// do operations
        i++;
    }
}
