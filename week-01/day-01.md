# Day 1. C Language Basics

## 1. Output (출력)

Output means showing information to the user.

C provides several functions for output.

- `printf()`: Prints text and values.
- `puts()`: Prints a string and adds a new line.
- `putchar()`: Prints one character.

Example:

```c
#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");
    puts("Hello, C!");
    putchar('A');

    return 0;
}
```

## 2. Constants (상수)

A constant is a value that does not change during its use as a constant.

Common examples include:

- Integer constant: `10`
- Character constant: `'A'`
- String literal: `"Hello"`

Note:
- `'A'` is a character constant.
- `"ABC"` is a string literal.
- In C, a string literal is different from a single character constant.

## 3. Operators (연산자)

Operators are symbols that perform operations.

Examples:

- `+`: Addition
- `-`: Subtraction
- `*`: Multiplication
- `/`: Division
- `%`: Remainder

Example:

```c
int a = 10;
int b = 3;

printf("%d\n", a + b);  // 13
printf("%d\n", a - b);  // 7
printf("%d\n", a * b);  // 30
printf("%d\n", a / b);  // 3
printf("%d\n", a % b);  // 1
```

Note: When both operands are integers, `/` performs integer division.

## 4. Variables (변수)

A variable is a named place to store a value.

Variables let us store data and use it in calculations.

Examples:

```c
int sum = 10;
double money = 100.5;
char letter = 'A';
```

- `int`: Stores integers.
- `double`: Stores floating-point numbers.
- `char`: Stores a character value.

## 5. Conditional Statements (조건문)

Conditional statements let a program choose what to do.

Common examples:

- `if`
- `switch`

Example:

```c
int age = 20;

if (age >= 18) {
    printf("You are an adult.\n");
}
```

## 6. Loops (반복문)

Loops repeat a task.

Common examples:

- `for`
- `while`
- `do...while`

Example:

```c
for (int i = 0; i < 3; i++) {
    printf("%d\n", i);
}
```

## 7. High-Level and Low-Level Languages

### High-Level Languages (고급 언어)

High-level languages use forms that are easier for people to read and understand.

Examples:
- C
- Java
- C#

C is often described as a middle-level language because it supports both high-level programming and low-level operations.

### Low-Level Languages (저급 언어)

Low-level languages are closer to the instructions used by a computer.

Example:
- Assembly language

## 8. Statements in C (C언어의 서술문)

A statement is an instruction in a program.

### 8.1 Expression Statement (수식 서술문)

An expression statement contains an expression and usually ends with a semicolon.

Example:

```c
sum = a + b;
```

### 8.2 Compound Statement (복합 서술문)

A compound statement groups statements inside `{ }`.

Example:

```c
{
    int a = 1;
    int b = 2;
    printf("%d\n", a + b);
}
```

A compound statement does not need a semicolon after its closing `}`.

### 8.3 Selection Statement (선택 서술문)

A selection statement chooses what to do based on a condition.

Examples:
- `if`
- `switch`

### 8.4 Iteration Statement (반복 서술문)

An iteration statement repeats code.

Examples:
- `for`
- `while`
- `do...while`

### 8.5 Labeled Statement (라벨 서술문)

A labeled statement gives a name to a position in the code.

It can be used with `goto`.

Example:

```c
start:
    printf("Hello\n");
```

Using `goto` too often can make code hard to understand, so it is usually best to avoid it when a clearer option is available.

### 8.6 Jump Statement (분기 서술문)

Jump statements change the normal flow of a program.

Examples:
- `break`: Exits a loop or a `switch` statement.
- `continue`: Skips the rest of the current loop iteration and moves to the next one.
- `return`: Ends a function and may return a value.
- `goto`: Jumps to a labeled statement.

### 8.7 Comments (주석문)

Comments explain code. The compiler ignores comments.

Single-line comment:

```c
// This is a comment.
```

Multi-line comment:

```c
/*
This is a comment.
It has multiple lines.
*/
```

C does not support nested block comments.

## 9. Reserved Words (예약어)

Reserved words have special meanings in C.

They cannot be used as ordinary variable or function names.

Examples:
- `int`
- `if`
- `return`
- `while`

## 10. How a C Program Becomes an Executable

A C program usually goes through these steps:

**Source File → Compilation → Object File → Linking → Executable File**

### 10.1 Source File (`.c`)

A source file contains code written by a programmer.

Example:
- `main.c`

### 10.2 Object File (`.obj` or `.o`)

An object file contains compiled code.

The compiler creates an object file from a source file.

- Windows tools often use `.obj`.
- Many Unix-like systems use `.o`.

Object files help developers build programs from multiple source files.

### 10.3 Executable File (`.exe` on Windows)

An executable file is a program that the operating system can run.

The linker combines object files and required libraries to create an executable.

### What Is a Build?

A build is the process of preparing a program so it can run.

It commonly includes compiling and linking. Development tools may also perform other steps.

## 11. Creating a C Project in Visual Studio

1. Open Visual Studio.
2. Select **File → New → Project**.
3. Choose a suitable C/C++ project template.
4. Enter the project name and location.
5. Choose the required project settings.
6. Add a source file.
7. Make sure the file uses the `.c` extension for C code.

Note: The exact steps can differ between Visual Studio versions and project templates.

## Key Takeaways

- Output functions show information to the user.
- Variables store values.
- Operators perform calculations.
- Conditional statements choose what to do.
- Loops repeat tasks.
- Statements are instructions in a C program.
- A compiler translates source code into object code.
- A linker combines object files and libraries to create an executable.
