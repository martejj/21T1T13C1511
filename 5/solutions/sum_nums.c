

void sum_nums(int a, int b, int *sum) {

    *sum = a + b;

}

int sum;
sum_nums(10, 20, &sum);

int sum_nums(int a, int b) {
    return a + b;
}

int sum = sum_nums(10, 20);

