# 42-printf
The goal of this project is to reprogram printf() as an opportunity to improve programming skills.

## Features
- The printf()function of libc is emulated.
- The prototype of ft_printf() is:
      `int ft_printf(char const *, ...);`
- The buffer management of the original printf() is not implemented.
- The following conversions are implemented:
     - %c:  Prints a single character.
     - %s:  Prints a string (as defined by default in C).
     - %p:  The void * pointer given as an argument is printed in hexadecimal format.
     - %d:  Prints a decimal number (base 10).
     - %i:  Prints a base 10 integer.
     - %u:  Prints a decimal number (base 10) without a sign.
     - %x:  Prints a hexadecimal number (base 16) in lowercase.
     - %X:  Prints a hexadecimal number (base 16) in uppercase.
     - %:   % to print the percentage symbol.
