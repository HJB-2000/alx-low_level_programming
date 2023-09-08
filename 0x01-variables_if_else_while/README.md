# Resources

**Read or watch:**

- [Everything you need to know to start with C.pdf](https://intranet.alxswe.com/rltoken/PkAydT3D9u5pN3nPCAlNZQ) (You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: 
  - "comments"
  - "Data types | Integer types"
  - "Declaration"
  - "Characters"
  - "Arithmetic operators"
  - "Variables assignments"
  - "Comparisons"
  - "Logical operators"
  - "if, if…else"
  - "while loops".)

- [Keywords and identifiers](https://intranet.alxswe.com/rltoken/58ThnAAxwJv5s_ceKMMPhw)
- [integers](https://intranet.alxswe.com/rltoken/2sXkmDiD7BF7pNIOxMQWFA)
- [Arithmetic Operators in C](https://intranet.alxswe.com/rltoken/S-b9MN2iELhSEwCI093Vzw)
- [If statements in C](https://intranet.alxswe.com/rltoken/CU6mSX1qdZKOhDEgmToUGA)
- [if…else statement](https://intranet.alxswe.com/rltoken/O1N-qacaTC-BHXm3Dp3eUA)
- [Relational operators](https://intranet.alxswe.com/rltoken/O1N-qacaTC-BHXm3Dp3eUA)
- [Logical operators](https://intranet.alxswe.com/rltoken/TaX_y6ll4cRfxCrxG8ZuNQ)
- [while loop in C](https://intranet.alxswe.com/rltoken/mwx2_bj3gIFEgCqdwdTp4w)
- [While loop](https://intranet.alxswe.com/rltoken/MW4Ob-6JLWt7Zn6vZ0EsBw)

**man or help:**

- ascii (You do not need to learn about scanf, getc, getchar, EOF, EXIT_SUCCESS, time, rand, srand, RAND_MAX, for loops, do...while loops, functions.)

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

**General**

- What are the arithmetic operators and how to use them
- What are the logical operators (sometimes called boolean operators) and how to use them
- What the relational operators and how to use them
- What values are considered TRUE and FALSE in C
- What are the boolean operators and how to use them
- How to use the if, if ... else statements
- How to use comments
- How to declare variables of types char, int, unsigned int
- How to assign values to variables
- How to print the values of variables of type char, int, unsigned int with printf
- How to use the while loop
- How to use variables with the while loop
- How to print variables using printf
- What is the ASCII character set
- What are the purpose of the gcc flags -m32 and -m64

## Copyright - Plagiarism

You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives. You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work. You are not allowed to publish any content of this project. Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

**General**

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use system
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
-------------------------------------------------------------------------------------------------------------------------------------------------
# Tasks

## Task 0: Positive or Negative
**Mandatory**

This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print whether the number stored in the variable `n` is positive or negative.

- [Source Code](https://github.com/alx-tools/0x01.c/blob/master/0-positive_or_negative_c)
- The variable `n` will store a different value every time you run this program.
- You don't have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code.

- The output of the program should be:
* The number, followed by
* if the number is greater than 0: `is positive`
* if the number is 0: `is zero`
* if the number is less than 0: `is negative`
followed by a new line
**Repo:**
- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: 0-positive_or_negative.c

## Task 1: The Last Digit
**Mandatory**

This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable `n`.

- [Source Code](https://github.com/alx-tools/0x01.c/blob/master/1-last_digit_c)
- The variable `n` will store a different value every time you run this program.
- You don't have to understand what `rand`, `srand`, and `RAND_MAX` do. Please do not touch this code.

The output of the program should be:
- The string `Last digit of`, followed by
`n`, followed by
- the string `is`, followed by
- if the last digit of `n` is greater than 5: the string `and is greater than 5`
- if the last digit of `n` is 0: the string `and is 0`
- if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`
- followed by a new line

**Repo:**
- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: 1-last_digit.c

## Task 2: I sometimes suffer from insomnia...
**Mandatory**

Write a program that prints the alphabet in lowercase, followed by a new line.

- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden).
- All your code should be in the main function.
- You can only use putchar twice in your code.

**Repo:**
- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: 2-print_alphabet.c

## Task 3: alphABET
**Mandatory**

Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden).
- All your code should be in the main function.
- You can only use putchar three times in your code.

**Repo:**
- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: 3-print_alphabets.c
## Task 4: When I was having that alphabet soup...
**Mandatory**

Write a program that prints the alphabet in lowercase, followed by a new line.

- Print all the letters except q and e.
- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden).
- All your code should be in the main function.
- You can only use putchar twice in your code.

**Repo:**
- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: 4-print_alphabt.c

## Task 5: Numbers
**Mandatory**

Write a program that prints all single-digit numbers of base 10 starting from 0, followed by a new line.

- All your code should be in the main function.

**Repo:**
- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: 5-print_numbers.c

## Task 6: Numberz
**Mandatory**

Write a program that prints all single-digit numbers of base 10 starting from 0, followed by a new line.

- You are not allowed to use any variable of type char.
- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden).
- You can only use putchar twice in your code.
- All your code should be in the main function.

**Repo:**
- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: 6-print_numberz.c

## Task 7: Smile in the mirror
**Mandatory**

Write a program that prints the lowercase alphabet in reverse, followed by a new line.

- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden).
- All your code should be in the main function.
- You can only use putchar twice in your code.

**Repo:**
- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: 7-print_tebahpla.c

## Task 8: Hexadecimal
**Mandatory**

Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden).
- All your code should be in the main function.
- You can only use putchar three times in your code.

**Repo:**
- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: 8-print_base16.c

## Task 9: Patience, persistence and perspiration...
**Mandatory**

Write a program that prints all possible combinations of single-digit numbers.

- Numbers must be separated by ",," followed by a space.
- Numbers should be printed in ascending order.
- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden).
- All your code should be in the main function.
- You can only use putchar four times maximum in your code.
- You are not allowed to use any variable of type char.

**Repo:**
- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: 9-print_comb.c
