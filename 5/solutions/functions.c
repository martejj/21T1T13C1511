
int main(void) {
    
    int array[] ={1,2,3};
    
    int all_postivie = test_all_positive(3, array);
      
    
}

int test_all_positive(int length, int nums[]) {
    
    int i = 0;
    
    while (i < length) {
        if (nums[i] < 0) {
            return 0;
        }
        i++;
    }
    
    return 1;
    
}
