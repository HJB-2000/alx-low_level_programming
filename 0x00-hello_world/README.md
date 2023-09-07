## Resources

**Read or watch:**

- [Everything you need to know to start with C.pdf](https://intranet.alxswe.com/rltoken/P01aLj9BDfDUOv-y9x82Yw) (You do not have to learn everything in there yet, but make sure you read it entirely first)
- [Dennis Ritchie](https://intranet.alxswe.com/rltoken/YWFrRob_-Yo-_NQikMLI-g)
- ["C" Programming Language: Brian Kernighan](https://intranet.alxswe.com/rltoken/W4oygfMgAp5Hyc7o6QuSYQ)
- [Why C Programming Is Awesome](https://intranet.alxswe.com/rltoken/WYdE1novaWa0yt5fzGvLBw)
- [Learning to program in C part 1](https://intranet.alxswe.com/rltoken/aE_pZLbexuLroHA0FmjLbw)
- [Learning to program in C part 2](https://intranet.alxswe.com/rltoken/3a5y1N-0FlTaPbKRxlRLlQ)
- [Understanding C program Compilation Process](https://intranet.alxswe.com/rltoken/idYJyVfQRZ9e5aljiT5UKg)
- [Betty Coding Style](https://intranet.alxswe.com/rltoken/wJg_qB9ducisfVQNk62htg)
- [Hash-bang under the hood](https://intranet.alxswe.com/rltoken/zwv5CHLybXN6KFmsjbu_tg) (Look at only after you finish consuming the other resources)
- [Linus Torvalds on C vs. C++](https://intranet.alxswe.com/rltoken/JrokM8Pk6bd9wPqQvEfSAA) (Look at only after you finish consuming the other resources)

**man or help:**

- `gcc`
- `printf (3)`
- `puts`
- `putchar`

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

**General:**

- Why C programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan, and Linus Torvalds
- What happens when you type `gcc main.c`
- What is an entry point
- What is `main`
- How to print text using `printf`, `puts`, and `putchar`
- How to get the size of a specific type using the unary operator `sizeof`
- How to compile using `gcc`
- What is the default program name when compiling with `gcc`
- What is the official C coding style and how to check your code with `betty-style`
- How to find the right header to include in your source code when using a standard library function
- How does the `main` function influence the return value of the program

## Copyright - Plagiarism

You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives. You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work. You are not allowed to publish any content of this project. Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

**C:**

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file at the root of the repo, containing a description of the repository
- A `README.md` file, at the root of the folder of this project, containing a description of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use `system`
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`

**Shell Scripts:**

- Allowed editors: vi, vim, emacs
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your scripts should be exactly two lines long (`$ wc -l file` should print 2)
- All your files should end with a new line
- The first line of all your files should be exactly `#!/bin/bash`

## More Info

**Betty linter**

To run the Betty linter just with command `betty <filename>`:

1. Go to the Betty repository
2. Clone the repo to your local machine
3. `cd` into the Betty directory
4. Install the linter with `sudo ./install.sh`
5. `emacs` or `vi` a new file called betty, and copy the script below:

   ```bash
   #!/bin/bash
   # Simply a wrapper script to keep you from having to use betty-style
   # and betty-doc separately on every item.
   # Originally by Tim Britton (@wintermanc3r), multiargument added by
   # Larry Madeo (@hillmonkey)

   BIN_PATH="/usr/local/bin"
   BETTY_STYLE="betty-style"
   BETTY_DOC="betty-doc"

   if [ "$#" = "0" ]; then
       echo "No arguments passed."
       exit 1
   fi

   for argument in "$@" ; do
       echo -e "\n========== $argument =========="
       ${BIN_PATH}/${BETTY_STYLE} "$argument"
       ${BIN_PATH}/${BETTY_DOC} "$argument"
   done
* Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`
* Move the `betty` file into `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`
* You can now type `betty <filename>` to run the Betty linter!
_____________________________________________________________________________________________________________________________________________
## Tasks

### 0. Preprocessor (mandatory)
Write a script that runs a C file through the preprocessor and saves the result into another file.

The C file name will be saved in the variable `$CFILE`.
The output should be saved in the file `c`.

**GitHub repository:** `alx-low_level_programming`
**Directory:** `0x00-hello_world`
**File:** `0-preprocessor`

### 1. Compiler (mandatory)
Write a script that compiles a C file but does not link.

The C file name will be saved in the variable `$CFILE`.
The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
Example: if the C file is `main.c`, the output file should be `main.o`.

**GitHub repository:** `alx-low_level_programming`
**Directory:** `0x00-hello_world`
**File:** `1-compiler`

### 2. Assembler (mandatory)
Write a script that generates the assembly code of a C code and saves it in an output file.

The C file name will be saved in the variable `$CFILE`.
The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
Example: if the C file is `main.c`, the output file should be `main.s`.

**GitHub repository:** `alx-low_level_programming`
**Directory:** `0x00-hello_world`
**File:** `2-assembler`

### 3. Name (mandatory)
Write a script that compiles a C file and creates an executable named `cisfun`.

The C file name will be saved in the variable `$CFILE`.

**GitHub repository:** `alx-low_level_programming`
**Directory:** `0x00-hello_world`
**File:** `3-name`

### 4. Hello, puts (mandatory)
Write a C program that prints exactly "Programming is like building a multilingual puzzle," followed by a new line.

Use the function `puts`.
You are not allowed to use `printf`.
Your program should end with the value `0`.

**GitHub repository:** `alx-low_level_programming`
**Directory:** `0x00-hello_world`
**File:** `4-puts.c`

### 5. Hello, printf (mandatory)
Write a C program that prints exactly "with proper grammar, but the outcome is a piece of art," followed by a new line.

Use the function `printf`.
You are not allowed to use the function `puts`.
Your program should return `0`.
Your program should compile without warning when using the `-Wall` gcc option.

**GitHub repository:** `alx-low_level_programming`
**Directory:** `0x00-hello_world`
**File:** `5-printf.c`

### 6. Size is not grandeur, and territory does not make a nation (mandatory)
Write a C program that prints the size of various types on the computer it is compiled and run on.

You should produce the exact same output as in the example.
Warnings are allowed.
Your program should return `0`.
You might have to install the package `libc6-dev-i386` on your Linux to test the `-m32` gcc option.

**GitHub repository:** `alx-low_level_programming`
**Directory:** `0x00-hello_world`
**File:** `6-size.c`

### 7. Intel (advanced)
Write a script that generates the assembly code (Intel syntax) of a C code and saves it in an output file.

The C file name will be saved in the variable `$CFILE`.
The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
Example: if the C file is `main.c`, the output file should be `main.s`.

**GitHub repository:** `alx-low_level_programming`
**Directory:** `0x00-hello_world`
**File:** `100-intel`

### 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity (advanced)
Write a C program that prints exactly "and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

You are not allowed to use any functions listed in the NAME section of the `man (3) printf` or `man (3) puts`.
Your program should return `1`.
Your program should compile without any warnings when using the `-Wall` gcc option.

**GitHub repository:** `alx-low_level_programming`
**Directory:** `0x00-hello_world`
**File:** `101-quote.c`

