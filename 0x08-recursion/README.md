# 0x08. C - Recursion

## Resources

- Read or watch:
  - [0x08. Recursion, introduction](https://intranet.alxswe.com/rltoken/dzZB83Hm3lO7dScjhebAxw)
  - [What on Earth is Recursion?](https://intranet.alxswe.com/rltoken/xYjKl3024oN58Bi_621_vQ)
  - [C - Recursion](https://intranet.alxswe.com/rltoken/u4ojc5CZpf4qiuQvmXCiOA)
  - [C Programming Tutorial 85, Recursion pt.1](https://intranet.alxswe.com/rltoken/Wv-wffgpXelN9ZTrbmiOyA)
  - [C Programming Tutorial 86, Recursion pt.2](https://intranet.alxswe.com/rltoken/7GVdI-KT-M1vOIzwEjSahQ)

## Tasks

### [Task 0]

### [Task 1]

### [Task 2]

### [Task 3]

### [Task 4]

## Project Requirements and Learning Objectives

### General

- **Allowed editors:** vi, vim, emacs
- **Compiler:** Ubuntu 20.04 LTS, gcc with options: -Wall -Werror -Wextra -pedantic -std=gnu89
- **File Endings:** All files should end with a new line
- **README.md:** A README.md file is mandatory at the root of the project folder
- **Coding Style:** Code should follow the Betty style, checked using betty-style.pl and betty-doc.pl
- **Global Variables:** Not allowed
- **Functions per File:** No more than 5 functions per file
- **Standard Library:** Not allowed (e.g., printf, puts, etc.)
- **_putchar:** Allowed
- **_putchar.c:** You don't need to push _putchar.c; it will be provided
- **Headers:** Prototypes of all functions and _putchar should be included in main.h, and don't forget to push the header file
- **Loops:** You are not allowed to use any kind of loops
- **Static Variables:** Not allowed

### Learning Objectives

- Understand what recursion is
- Learn how to implement recursion
- Identify when to use recursion
- Identify when not to use recursion

### Copyright - Plagiarism

- You must come up with solutions for the tasks to meet the learning objectives
- Plagiarism is strictly forbidden and will result in removal from the program
----------------------------------------------------------------------------------------------------------------------------------------

## Tasks

### Task 0: She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget
**Mandatory**

Write a function that prints a string, followed by a new line.

- Prototype: `void _puts_recursion(char *s);`
- FYI: The standard library provides a similar function: `puts`. Run `man puts` to learn more.

### Task 1: Why is it so important to dream? Because, in my dreams we are together
**Mandatory**

Write a function that prints a string in reverse.

- Prototype: `void _print_rev_recursion(char *s);`

### Task 2: Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange
**Mandatory**

Write a function that returns the length of a string.

- Prototype: `int _strlen_recursion(char *s);`
- FYI: The standard library provides a similar function: `strlen`. Run `man strlen` to learn more.

### Task 3: You mustn't be afraid to dream a little bigger, darling
**Mandatory**

Write a function that returns the factorial of a given number.

- Prototype: `int factorial(int n);`
- If `n` is lower than 0, the function should return -1 to indicate an error.
- Factorial of 0 is 1.

### Task 4: Once an idea has taken hold of the brain it's almost impossible to eradicate
**Mandatory**

Write a function that returns the value of x raised to the power of y.

- Prototype: `int _pow_recursion(int x, int y);`
- If `y` is lower than 0, the function should return -1.
- FYI: The standard library provides a different function: `pow`. Run `man pow` to learn more.

### Task 5: Your subconscious is looking for the dreamer
**Mandatory**

Write a function that returns the natural square root of a number.

- Prototype: `int _sqrt_recursion(int n);`
- If `n` does not have a natural square root, the function should return -1.
- FYI: The standard library provides a different function: `sqrt`. Run `man sqrt` to learn more.

### Task 6: Inception. Is it possible?
**Mandatory**

Write a function that returns 1 if the input integer is a prime number, otherwise return 0.

- Prototype: `int is_prime_number(int n);`
-----------------------------------------------------
## Task 7: They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything
### Advanced

Write a function that returns `1` if a string is a palindrome and `0` if it is not.

**Prototype:** `int is_palindrome(char *s);`

- An empty string is considered a palindrome.

---

## Task 8: Inception. Now, before you bother telling me it's impossible...
### Advanced

Write a function that compares two strings and returns `1` if the strings can be considered identical, otherwise return `0`.

**Prototype:** `int wildcmp(char *s1, char *s2);`

- `s2` can contain the special character `*`.
- The special character `*` can replace any string (including an empty string).

---------------------------------------------------------------------------------------------
## "main.c files to test codes"==>contain files to test codes of evry tasks
## results.txt ==> for how the codes should work
