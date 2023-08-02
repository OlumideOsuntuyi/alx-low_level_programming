# C Recursion Project

This project contains a set of C programs that demonstrate the concept of recursion. Recursion is a powerful technique in programming where a function calls itself to solve a problem. The project includes various recursive functions that solve different tasks using this approach.

## Recursive Functions

The main.h header file contains the function prototypes for the following recursive functions:

1. `_puts_recursion`: Recursively prints a string followed by a new line.
2. `_print_rev_recursion`: Recursively prints a string in reverse.
3. `_strlen_recursion`: Recursively calculates the length of a string.
4. `factorial`: Recursively calculates the factorial of a given integer.
5. `_pow_recursion`: Recursively calculates the value of x raised to the power of y.
6. `_sqrt_recursion`: Recursively finds the natural square root of a number.
7. `is_prime_number`: Recursively checks if a number is a prime number.
8. `is_palindrome`: Recursively checks if a string is a palindrome.
9. `wildcmp`: Recursively compares two strings with wildcard support (*).

## Usage

To use these recursive functions, include the main.h header file in your C program and link the corresponding C file that contains the implementation of the required function. For example, to use the `_puts_recursion` function, you would include the main.h header and compile your code along with the `_puts_recursion.c` file.

```c
#include "main.h"

int main(void) {
    char *str = "Hello, Recursion!";
    _puts_recursion(str);
    return (0);
}

