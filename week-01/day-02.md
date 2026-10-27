# Day 02: Data Types, Constants, and Variables

## 1. How Computers Store Data

### 1.1 Memory

A computer uses memory to store data.

컴퓨터는 데이터를 저장하기 위해 메모리(Memory)를 사용한다.

**RAM (Random Access Memory)** is the main memory used by running programs. It temporarily stores data that the computer is working with.

RAM은 프로그램이 실행되는 동안 필요한 데이터를 임시로 저장하는 주기억장치다.

Memory is organized into addressable units. In most modern systems, each byte has its own memory address.

메모리는 주소를 통해 구분할 수 있다. 일반적인 컴퓨터에서는 각 바이트(Byte)에 메모리 주소가 부여된다.

A memory address does not mean that data must always be stored one byte at a time. A variable can use multiple bytes.

메모리 주소가 바이트 단위로 부여된다고 해서 모든 데이터가 반드시 1바이트씩 저장되는 것은 아니다. 변수는 여러 바이트를 사용할 수 있다.

### 1.2 Bit and Byte

A **bit** is the smallest unit of information. It can store either `0` or `1`.

비트(Bit)는 정보의 최소 단위이며, `0` 또는 `1`을 저장할 수 있다.

| Number of bits | Number of possible combinations |
|---|---:|
| 1 bit | 2 |
| 2 bits | 4 |
| 3 bits | 8 |
| 8 bits | 256 |

Each additional bit doubles the number of possible combinations.

비트가 하나씩 늘어날 때마다 표현할 수 있는 조합의 수는 2배가 된다.

For example, two bits can represent four combinations:

```text
00
01
10
11
```

A **byte** is commonly made up of 8 bits.

**1 Byte = 8 Bits**

With 8 bits, we can represent 256 different bit patterns.

### 1.3 Memory Units

| Unit | Size |
|---|---:|
| 1 KB | 1,024 bytes |
| 1 MB | 1,024 KB |
| 1 GB | 1,024 MB |
| 1 TB | 1,024 GB |
| 1 PB | 1,024 TB |
| 1 EB | 1,024 PB |

These are binary-based sizes commonly used in traditional memory calculations.

참고: 저장장치 제조사가 사용하는 단위에서는 1 KB를 1,000 bytes로 계산하기도 한다. 정확한 구분이 필요할 때는 KiB, MiB, GiB 같은 단위도 사용한다.

### 1.4 Signed and Unsigned Numbers

An integer type can represent signed or unsigned values.

정수형 자료형은 부호가 있는 값과 부호가 없는 값을 표현할 수 있다.

- **Signed**: Can represent negative and positive values.
- **Unsigned**: Can represent zero and positive values only.

부호 있는 정수형은 음수와 양수를 모두 표현할 수 있다. 부호 없는 정수형은 음수를 표현하지 않는다.

For an 8-bit integer:

| Type | Typical range |
|---|---|
| Signed 8-bit integer | -128 to 127 |
| Unsigned 8-bit integer | 0 to 255 |

An unsigned 8-bit value has 256 possible values, from 0 to 255.

일반적인 8비트 부호 있는 정수는 2의 보수(Two's complement) 방식으로 표현한다.

```text
01111111 = 127
10000000 = -128
11111111 = -1
```

여기서 부호 있는 정수의 최댓값은 `127`, 최솟값은 `-128`이다.

### 1.5 Choosing a Suitable Data Size

A program should use an appropriate data type for the values it needs to store.

프로그램에서는 저장할 값의 범위에 맞는 자료형을 선택하는 것이 중요하다.

For example, a person's age is usually between 0 and 150.

일반적인 8비트 `unsigned char`는 0~255를 표현할 수 있으므로 이러한 범위의 나이를 저장할 수 있다.

However, the best type depends on the program and the requirements. In C, `int` is often a convenient choice for ordinary integer values.

자료형을 선택할 때는 메모리 크기뿐 아니라 값의 범위와 계산 방식도 고려해야 한다.

---

## 2. ASCII Code

Computers store and process data using binary values. Text characters also need a numeric representation.

컴퓨터는 숫자를 이용해 데이터를 처리하므로 문자도 숫자로 표현할 수 있어야 한다.

**ASCII** stands for American Standard Code for Information Interchange.

ASCII는 문자와 숫자 사이의 대응 관계를 정한 문자 인코딩 표준이다.

For example, in ASCII:

| Character | Decimal value |
|---|---:|
| `'A'` | 65 |
| `'B'` | 66 |
| `'a'` | 97 |
| `'b'` | 98 |
| `'0'` | 48 |

The character `'A'` and the integer `65` are different kinds of values in C, even though ASCII associates them.

C에서는 문자 상수 `'A'`를 사용할 수 있고, 일반적인 ASCII 환경에서 그 값은 65다.

```c
#include <stdio.h>

int main(void)
{
    char key = 'A';

    printf("%c\n", key);
    printf("%d\n", key);

    return 0;
}
```

Output:

```text
A
65
```

`%c` prints a character, while `%d` prints an integer representation.

참고: ASCII는 영어 알파벳과 기본 기호 등을 표현한다. 한국어 같은 다양한 문자를 표현하려면 UTF-8 등의 문자 인코딩이 필요하다.

---

## 3. Data Types in C

A **data type** tells the compiler what kind of value a variable can store.

자료형(Data Type)은 변수가 어떤 종류의 데이터를 저장하는지 나타낸다.

The type also affects how much memory the variable uses and which operations can be performed on it.

자료형에 따라 필요한 메모리 크기, 표현 가능한 값의 범위, 사용할 수 있는 연산 등이 달라진다.

### 3.1 Integer Types

C provides several integer types.

C 언어는 다양한 정수형 자료형을 제공한다.

| Type | Description |
|---|---|
| `char` | Character-sized integer type |
| `short` | Short integer type |
| `int` | Standard integer type |
| `long` | Long integer type |
| `long long` | At least as wide as `long` |

The keywords `signed` and `unsigned` specify whether a type can represent negative values.

` signed`는 음수를 표현할 수 있는 부호 있는 정수형을 나타내고, `unsigned`는 음수가 없는 정수형을 나타낸다.

Examples:

```c
signed char temperature = -2;
unsigned char age = 52;

short int dday = -20;

unsigned short int count = 500;
signed long int population = 100000L;
unsigned long int total = 200000UL;
```

These declarations show different integer types.

위 코드는 여러 정수형 자료형의 선언 예시다.

**Important:** The exact sizes of `short`, `int`, and `long` depend on the C implementation and platform.

`short`, `int`, `long`의 정확한 크기는 컴파일러와 시스템에 따라 다를 수 있다.

On many modern systems:

- `char` uses 1 byte.
- `short` commonly uses 2 bytes.
- `int` commonly uses 4 bytes.
- `long` may use 4 or 8 bytes.

These are common sizes, not universal guarantees for every C system.

### 3.2 Signed and Unsigned Examples

A signed integer can store negative values.

```c
signed char temperature = -2;
```

An unsigned integer cannot store negative values.

```c
unsigned char age = 52;
```

For an ordinary 8-bit `unsigned char`, the range is 0 to 255.

일반적인 8비트 환경에서 `unsigned char`는 0~255 범위의 값을 표현할 수 있다.

### 3.3 Short Forms

Some type declarations can be written in shorter forms.

일부 자료형 선언은 간단하게 줄여 쓸 수 있다.

```c
signed char a;
signed short int b;
signed int c;
signed long int d;
```

Common shorter forms:

```c
char a;
short b;
int c;
long d;
```

For ordinary integer types, `signed` can usually be omitted because `int`, `short`, and `long` are signed by default.

일반적인 정수형에서는 `signed`를 생략하면 기본적으로 부호 있는 정수형이 된다.

단, `char`는 컴파일러와 시스템에 따라 기본 부호 여부가 달라질 수 있다.

---

## 4. Floating-Point Types

C uses floating-point types to represent numbers with fractional parts.

C 언어에서는 소수 부분이 있는 숫자를 표현하기 위해 부동소수점 자료형을 사용한다.

The main floating-point types are:

- `float`
- `double`
- `long double`

### 4.1 Scientific Notation

A number can be written using a coefficient and a power of ten.

과학적 표기법은 숫자를 유효한 숫자 부분과 10의 거듭제곱으로 나타내는 방식이다.

For example:

```text
312.567 = 3.12567 × 10²
```

In C, floating-point constants can use `e` or `E`.

```c
double a = 0.15e3;
double b = 4.24e-10;
```

`0.15e3` means:

```text
0.15 × 10³ = 150
```

### 4.2 `float`

A `float` commonly uses 4 bytes.

`float`는 일반적인 시스템에서 4바이트를 사용한다.

It usually provides about 6–7 significant decimal digits of precision.

일반적으로 약 6~7자리의 유효 숫자를 표현할 수 있다.

```c
float temperature = 36.5f;
```

The `f` suffix indicates that `36.5f` is a `float` constant.

### 4.3 `double`

A `double` commonly uses 8 bytes.

`double`은 일반적인 시스템에서 8바이트를 사용한다.

It usually provides about 15–16 significant decimal digits of precision.

일반적으로 약 15~16자리의 유효 숫자를 표현할 수 있다.

```c
double pi = 3.141592653589793;
```

### 4.4 How Floating-Point Values Are Stored

In a common IEEE 754 representation:

| Type | Sign bit | Exponent bits | Fraction bits | Total |
|---|---:|---:|---:|---:|
| `float` | 1 | 8 | 23 | 32 bits |
| `double` | 1 | 11 | 52 | 64 bits |

- **Sign bit**: Represents the sign.
- **Exponent**: Helps represent the scale of the number.
- **Fraction**: Stores the significant digits of the number.

이 방식은 부동소수점 숫자를 저장하는 대표적인 구조다. 모든 C 시스템이 반드시 같은 표현 방식을 사용하는 것은 아니지만, 현대 컴퓨터에서는 IEEE 754가 널리 사용된다.

Floating-point numbers cannot represent every decimal number exactly.

부동소수점 자료형은 모든 소수를 정확하게 저장할 수 있는 것은 아니다. 따라서 계산 결과에 작은 오차가 생길 수 있다.

---

## 5. Constants

A **constant** is a value that does not change during a particular use in a program.

상수(Constant)는 프로그램에서 고정된 값으로 사용하는 데이터다.

C has several kinds of constants.

### 5.1 Integer Constants

Integer constants represent whole numbers.

```c
-5
0
1
2
```

### 5.2 Floating-Point Constants

Floating-point constants represent numbers with decimal parts or exponents.

```c
-5.1
0.17
0.15e+3
```

### 5.3 Integer Constants in Different Bases

C supports decimal, octal, and hexadecimal integer constants.

C 언어에서는 10진수, 8진수, 16진수로 정수를 표현할 수 있다.

**Decimal (10진수)**

```c
int a = 12;
```

**Octal (8진수)**

An octal integer constant starts with `0`.

```c
int a = 012;
```

`012` in octal is equal to `10` in decimal.

8진수 `012`는 10진수로 10이다.

**Hexadecimal (16진수)**

A hexadecimal integer constant starts with `0x` or `0X`.

```c
int a = 0x25;
int b = 0xFC;
```

Hexadecimal uses the digits `0–9` and letters `A–F`.

16진수는 0~9와 A~F를 사용한다.

### 5.4 Character Constants

A character constant is written using single quotes.

문자 상수(Character constant)는 작은따옴표로 감싼다.

```c
char first = 'A';
char digit = '2';
char symbol = '+';
```

A character constant is different from a string literal.

문자 상수와 문자열 리터럴(String literal)은 서로 다르다.

```c
'A'    // Character constant
"A"    // String literal
```

In a common ASCII environment, you can also use arithmetic with character constants.

```c
char key = 'A';
char next = 'A' + 1;
```

In an ASCII-compatible environment, `next` represents `'B'`.

ASCII 환경에서는 `'A'`에 1을 더하면 `'B'`에 해당하는 값이 된다.

### 5.5 String Literals

A string literal is a sequence of characters enclosed in double quotes.

문자열 리터럴(String literal)은 큰따옴표로 감싼 문자들의 나열이다.

```c
"Hello"
"Hello World"
```

C strings end with a special null character, `'\0'`.

C 언어의 문자열은 끝을 표시하기 위해 널 문자(`'\0'`)를 사용한다.

For example, `"Hi"` is stored using three characters:

```text
'H'  'i'  '\0'
```

---

## 6. Variables

A **variable** is a named storage location used to hold a value.

변수(Variable)는 값을 저장하기 위해 이름을 붙인 공간이다.

A variable's value can change while the program is running.

프로그램이 실행되는 동안 변수에 저장된 값은 바뀔 수 있다.

### 6.1 Variable Names

A variable name identifies a variable in the program.

변수 이름은 프로그램에서 변수를 구분하기 위해 사용한다.

Rules for variable names:

- They can contain letters, digits, and underscores (`_`).
- They cannot start with a digit.
- They cannot contain spaces.
- Uppercase and lowercase letters are different.
- C keywords cannot be used as variable names.

변수 이름을 정할 때 기억할 규칙이다.

```c
int myAge;
int total_score;
int score2;
```

Invalid examples:

```c
// int 2score;   // Cannot start with a digit
// int my age;   // Cannot contain a space
// int return;   // "return" is a keyword
```

### 6.2 Naming Styles

**Camel case**

The first word starts with a lowercase letter. Later words start with uppercase letters.

```c
int myAge;
int totalScore;
```

**Hungarian notation**

A prefix is added to show information about the variable, such as its type.

```c
char c_key;
long l_data;
int n_input;
```

Hungarian notation is a naming style, not a C language requirement.

헝가리안 표기법은 선택적인 이름 작성 방식이다. 모든 C 프로그램에서 반드시 사용해야 하는 규칙은 아니다.

### 6.3 Declaring Variables

A variable declaration tells the compiler the variable's type and name.

변수 선언(Variable declaration)은 컴파일러에게 변수의 자료형과 이름을 알려주는 것이다.

```c
int num;
```

This declares an integer variable named `num`.

```c
int data1, data2, data3;
```

You can declare multiple variables of the same type in one statement.

같은 자료형의 변수를 한 문장에서 여러 개 선언할 수 있다.

### 6.4 Initializing Variables

Initialization means giving a variable its first value.

초기화(Initialization)는 변수에 처음으로 값을 넣는 것이다.

```c
int value = 0;
```

A local variable that has not been initialized does not have a predictable value. Reading it before giving it a value can cause undefined behavior.

초기화하지 않은 지역 변수는 예측 가능한 값을 가진다고 보장할 수 없다. 값을 넣기 전에 읽으면 정의되지 않은 동작이 발생할 수 있다.

For example:

```c
int value = 0;
```

This initializes `value` to zero.

It is a good habit to initialize variables before using them.

변수를 사용하기 전에 적절한 값으로 초기화하는 습관을 들이는 것이 좋다.

---

## 7. Printing Variable Values

The `printf()` function prints formatted output.

`printf()` 함수는 지정한 형식에 맞춰 데이터를 출력한다.

Example:

```c
#include <stdio.h>

int main(void)
{
    int money = 3000;

    printf("The value of money is %d\n", money);

    return 0;
}
```

Output:

```text
The value of money is 3000
```

In this example:

- `#include <stdio.h>` includes declarations for standard input/output functions.
- `int main(void)` defines the program's entry-point function.
- `int money = 3000;` declares and initializes a variable.
- `%d` is used to print an integer.
- `\n` moves the output to a new line.
- `return 0;` indicates successful program termination.

각 문장이 어떤 역할을 하는지 이해하고 직접 코드를 실행해 보자.

---

## 8. Converting Binary to Hexadecimal

Hexadecimal is useful when working with binary data and bit-level operations.

16진수는 2진수 데이터를 읽거나 비트 단위 연산을 할 때 유용하다.

Each hexadecimal digit represents exactly four binary bits.

16진수 한 자리는 4비트에 대응한다.

| Binary | Hexadecimal |
|---|---|
| `0000` | `0` |
| `0001` | `1` |
| `0010` | `2` |
| `0011` | `3` |
| `0100` | `4` |
| `0101` | `5` |
| `0110` | `6` |
| `0111` | `7` |
| `1000` | `8` |
| `1001` | `9` |
| `1010` | `A` |
| `1011` | `B` |
| `1100` | `C` |
| `1101` | `D` |
| `1110` | `E` |
| `1111` | `F` |

### Example

Convert the binary number `11111111` to hexadecimal.

**Step 1:** Divide the binary digits into groups of four.

```text
1111 1111
```

**Step 2:** Convert each group.

```text
1111 = F
1111 = F
```

**Answer:**

```text
11111111 (binary) = FF (hexadecimal)
```

In C, you can write the hexadecimal value like this:

```c
int value = 0xFF;
```

---

## 9. Key Points to Remember

- **Bit**: The smallest unit of information; it can be `0` or `1`.
- **Byte**: Commonly consists of 8 bits.
- **RAM**: Memory used by running programs.
- **ASCII**: A character encoding standard for basic English characters and symbols.
- **Data type**: Defines the kind of value a variable can store.
- **Signed**: Can represent negative and positive values.
- **Unsigned**: Represents zero and positive values.
- **`int`**: A common integer type.
- **`float` and `double`**: Floating-point types.
- **Constant**: A value used as fixed data.
- **Variable**: A named storage location whose value can change.
- **Declaration**: Specifies a variable's type and name.
- **Initialization**: Gives a variable its initial value.
- **Hexadecimal**: A base-16 number system; one digit corresponds to four bits.

## 10. Practice

Try these exercises in `day-02.c`.

### Exercise 1: Variables

Declare an integer variable named `age` and initialize it to `24`.

Print its value using `printf()`.

### Exercise 2: Signed and Unsigned

Declare these variables:

```c
signed char temperature = -2;
unsigned char age = 52;
```

Print both values.

### Exercise 3: Floating-Point Types

Declare a `float` variable and a `double` variable.

Give each variable a decimal value and print both values.

Hint: Use `%f` for a `double` argument in `printf()`. A `float` argument is automatically promoted to `double` when passed to `printf()`.

### Exercise 4: Character Constants

Declare a character variable with the value `'A'`.

Print it once using `%c` and once using `%d`.

### Exercise 5: Number Systems

Convert these binary numbers to hexadecimal:

```text
1010
1111
10101111
```

Write your answers in comments in `day-02.c`.
