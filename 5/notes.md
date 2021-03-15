# Tutorial 5 Notes

## Noteworthy points

* RECORD
* Today we will cover pointers, memory and some misc bits
* Mid term break next week!
* Commenting

## Q1 - Notes on functions - What do the following snippets of code print?

<br>

```c

    void my_function(int a) {
        a += 1;
    }

    int main(void) {
        int b = 0;
        my_function(b);
        printf("%d", b);
    }

```

<details>

`0`, the function call is pass by value (it makes a copy)

<summary>Answer</summary>

</details>

<br>

```c


    void my_function(int a) {
        a += 1;
    }

    int main(void) {
        int a = 0;
        my_function(b);
        printf("%d", b);
    }

```

<details>

`0`, Even if they are the same name! The only way to actually update the main function's value is with a return value or a pointer.

<summary>Answer</summary>

</details>

<br>

```c

    #define SIZE 5

    void my_function(int a[SIZE]) {
        a[0] += 1;
    }

    int main(void) {
        int array[SIZE] = {0, 0, 0, 0, 0};
        my_function(array);
        printf("%d", array[0]);
    }

```

<details>

`1`, an array is pass by reference in C.

<summary>Answer</summary>

</details>

<br>

## Q2 - Pass by reference vs. Pass by value

![Pass by reference vs Pass by value](images/pass.gif)

<br>

## Q3 - Which of the following functions would be possible to write? If they are not possible to write, discuss what you could to to make them work.

<br>

### Q3a - `int array_length(int nums[])`

Write a function with the prototype `int array_length(int nums[])` that returns the length of the inputted array.

<details>
<summary>Answer</summary>
You can not write such a function in C.
It is not possible for a C function to determine the length of an array it has been passed.

Programmers usually do one of 3 things.

* Pass the array length as another parameter to the function.
* Use a special value in an array element to mark the finish of the array - e.g. 0 if the array need contain only positive ints
* Pass an array of a specific length to the function - e.g. always pass arrays of 20 elements
For functions you write in this course, you should opt for option (a).
</details>

<br>

### Q3b - `int test_all_positive(int nums[])`

Write a function with the prototype `int test_all_positive(int nums[])` that returns 1 if all elements are positive and 0 otherwise.

<details>
<summary>Answer</summary>
You can not write such a function in C.
It is not possible for a C function to determine the length of an array it has been passed, so thus it cannot know how many to loop over.

Programmers usually do one of 3 things.

* Pass the array length as another parameter to the function.
* Use a special value in an array element to mark the finish of the array - e.g. 0 if the array need contain only positive ints
* Pass an array of a specific length to the function - e.g. always pass arrays of 20 elements
For functions you write in this course, you should opt for option (a).
</details>

<br>

### Q3c - `int test_all_initialized(int length, int nums[])`

Write a function with the prototype `int test_all_initialised(int n, int nums[n])` that returns 1 if all elements of array nums are initialized, otherwise returns 0.

<details>
<summary>Answer</summary>
You can not write such a function in C.
It is not possible at runtime in C to determine if a variable has been initialized

C programmers must take care to ensure that all variables, including array elements, are appropriately initialized.
</details>

<br>

### Q3d - `int test_all_positive(int length, int nums[])`

Write a function with the prototype `int test_all_positive(int n, int nums[n])` that returns 1 if all elements are positive and 0 otherwise.

<br>

## Q4 - What is a 2D array?

<details>

An array of arrays - see example in class

Recall that an array is a collection of elements with the same data type. A 2D array is an array where each element itself is an array. It can be thought of like a grid, where the number of rows is the number of elements in the outer array.

Each inner array is a row of the grid and the number of columns is the number of elements in each inner array. Note that all of the "inner" arrays must be the same size and type.

<summary>Answer</summary>

</details>

<br>

## Q5 - 7by7.c

The following code prints a 7x7 grid of 1's. Instead make it use a 2d array.

```c

    #include <stdio.h>

    #define SIZE 7

    int main(void) {
        int row, column;

        row = 0;
        while (row < SIZE) {
            column = 0;
            while (column < SIZE) {
                printf("1");
                column = column + 1;
            }
            printf("\n");
            row = row + 1;
        }

        return 0;
    }

```

<br>

## Q6 - scalar_multiply.c

Write a function that takes in a 2d array of ints and multiplies every value in the array by a given int.
It will have this prototype 

```c 
    void scalar_multiply(int rows, int columns, int matrix[rows][columns],  int scalar)
```

<br>

## Q7 - What is a pointer? How can you declare and initialise a pointer?

<details>
<summary>Answer</summary>

A pointer is a variable that can hold a memory address. It is always aimed at a particular variable type.

A * is used to declare a variable as a pointer. For example, to declare a pointer to an int:

```c
int *pointer_name;
```

A pointer is most often aimed at a particular variable. The & operator can be used to find the address of a variable.

</details>

<br>

## Q8 - What do & and * do? Where have we been using it and why?

<details>
<summary>
Answer
</summary>

`&` is called the referencer. Given a variable, it gets where that variable is stored in the computer.

`*` is called the dereferencer. Given a pointer, it goes to that location in the computer and gets the value there.

Non-pointer variables in C are pass by value. This means that if you give a regular variable to scanf without the & symbol then scanf will be unable to change that variable.

Giving scanf the address of the variable instead with the & symbol allows scanf to directly access the piece of memory that variable occupies, and allows scanf to directly modify the variable. This behaviour is called pass by reference.

</details>

<br>

## Q9 - What will happen when each of the following statements is executed (in order)?

See webcms.



## Q10 - sum_nums.c

Write a void function which places the sum of two numbers inside a variable passed in by reference. It should have the following prototype `void sum_nums(int a, int b, int *sum);`

## Q11 - max.c

Write a void function which returns the address of the greater of two integers passed by reference with the prototype `int *max(int *a, int *b);`


# Bonus/past questions

## Q10) quadratic.c

Write a program that reads in a quadratic and prints out its solutions. Use a function to solve the quadratic.

```c
$ ./solve_quadratic
    Enter a quadratic of the form a*x^2 + b*x + c = 0\n
    a: 1
    b: 2
    c: 1
    The roots are x1 = -1 and x2 = -1
```

## Q7) 

This C code:
```c
    int x;
    int a[6];

    x = 10;
    a[3 * 2] = 2 * 3 * 7;
    printf("%d\n", x);
```

mysteriously printed 42. 

How could this happen when x is clearly assigned only the value 10?
How does the output change if we create a another int after the array?
How can you easily detect such errors before they have mysterious effects?