# Tutorial 4 Notes

## Any questions from the lectures?

## Noteworthy points

* RECORD
* Assignment 1 is out - we will run over it quickly
* Help sessions
* Today we will cover a lot - functions, arrays, scanning in while loops

<br>

## Q1) Look at code.c and lets improve it

<details>
<summary>
Answer
</summary>

* Indentation
* Changing the structure of the if statements
* Variable names
* Using #defines instead of variables
* Comments

</details>

<br>

## Q2) What is an array?

<details>
<summary>
Answer
</summary>

An array is a collection of elements with the same data type. Each element is accessed providing the name of the array and an index. The index range is from 0 through to N-1, where N is the number of elements in the array. This is also known as zero-based indexing.

</details>

<br>

## Q3) Create an array called `zeroes` of size 7 and initialise all the elements to 0

<br>

## Q4) If an array is declared as `int zeroes[7];` and your program assigns a value to each element in the array, what is the problem with the statement `x = zeroes[7];`?

<details>
<summary>
Answer
</summary>

This is not allowed as arrays are zero-indexed, meaning that even though it has 7 spots in it, the last spot is at 6.

</details>

<br>

## Q5) squares.c

Create an array of the numbers 0 to 14, and then loop over those numbers, setting each spot to be equal to the square of its current value.

Print out the resulting array.

<br>

## Q6) What is a function?

<details>
<summary>
Answer
</summary>

Functions are code that is "called" and "returns". Each function will have an output type (that could be void) as well as some input parameters. The input parameters will be declared just like variables and the function will receive values for these when it is called.
It's important to remember that variables will be passed to a function by value, which means that the function itself will not be able to make changes to the variables that are passed to them and also that the input parameters are created when the function is called and will be destroyed when the function ends.

We use functions to separate code so that we don't have to write it repeatedly and we also don't have long or deep nested code clogging up our main.

</details>

<br>

## Q7) What is the syntax/structure of a function?

<details>
<summary>
Answer
</summary>

```c
    returnType name(parameter1, parameter2, ..., parameterN) {
        // code
        return value;
        // Where value is of type returnType
    }
```

</details>

<br>

## Q8) is_even.c

Create a function called `is_even` which takes in an integer and returns 1 if it is an even number, and 0 if it is not.

<br>

## Q9) first_plus_third.c

Write a function called `first_plus_third` that sums the first and third element of an array called `numbers` and returns the answer.

<br>

## Q10) Why do we prototype functions in c?

<details>
<summary>Answer</summary>
It's a legacy feature of c from decades ago. It allows the C compiler to go through the code exactly once, saving time as what now takes milliseconds to compile would have used to take hours. It is similar to asking why we need to declare a variable before we use it. Whenever the C compiler goes past a name like string it either decides it is a variable or whether the programmer has made a mistake, but C needs to check that the variable already exists so we define our variables before we use them. Prototyping works in the same way.
</details>

## Q11) scanf is a function - does it have a return type? How could we find out?

<details>
<summary>Answer</summary>

Yest, it does! it returns the number of successfully scanned integers. Check the man pages.

</details>

<br>

## Q12) echo.c

Discuss how we could create a loop that would continually read values in from standard input until the user inputs anything other than a number (or the input ends). Output the number the users inputs to the standard output.

<br>

## Q13) echo_array.c

Edit the code written in the previous question so that the integers scanned in are placed into an array called inputs of size 1000. You can assume no more than 1000 numbers will be entered.

<br>

# Past Questions/ Extra Questions

## Q12) Write a function called array_print to print out the array created in the previous question.

<details>
<summary>Answer</summary>

```c

    void array_print(int length, int array[]){
       int i = 0;
       while (i < length) {
          printf("%d ", array[i]);
          i++;
       }
    }

```

</details>



## Past question - read_ints.c

Write a program that repeatedly reads in integers until a non-integer is read in and then prints the number of integers read in. For example:

```c
    $ ./read_ints
    Please enter some integers:
    10 -90 100 999 78hello
    You entered 5 integers

    $ ./read_ints
    Please enter some integers:
    1 2 3 4 5 6 7 8 9
    10 11 12 hello
    You entered 12 integers
    
    $ ./read_ints
    Please enter some integers:
    1 2 3 4 5 6 7 8 9
    10 11 Control-D
    You entered 11 integers
```

How could we modify it to now fill an array? What about so it is in a function?


## More found here https://cgi.cse.unsw.edu.au/~cs1511/21T1/tut/04/questions