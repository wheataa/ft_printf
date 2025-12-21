# ft_printf README.md

*This project has been created as part of the 42 curriculum by jwheatin.*

## Description 
Writes a library that contains ft_printf(), which mimics the printf() function from libc. It is a variadic function that is able to take a variable number of input arguments. The first arguments is a string, which may contain format specifiers cpsdiuxX% and subsequently corresponding variables may follow the string. It is able to print char, ptr, char*, dec and int, unsigned int, lowercase hexadecimal and uppercase hexadecimal.

## Instructions
In order to compile the files to produce a libftprintf.a library, simply use the `make` command (or `make all`). `make clean` deletes all object files during compilation, `make fclean` deletes all object files and the libftprintf.a library. `make re` deletes all files from `make fclean` and recompiles the object files and library.

## Resources
Behaviour of the libc `printf()` function: `man 3 printf`.
Introduction to `va_list` and its corresponding macros from `man stdarg`: `va_start()`, `va_arg()` and `va_end()`. This also includes a useful example.
AI was used to check understanding of how `va_arg` works.

## Algorithm and Data Structure:

### Overall Code Structure
In `ft_printf(const char *str, ...)`, `va_list ap` is defined and then initialised using `va_start(ap, str)`. The input string is looped through, counting characters. When a % is encountered, `ft_select_format(va_list *ap, const char *str)` is called, which checks for a format specifier. If a valid format specifier is found, a relevant function is called to write the argument and count its printed characters. `&ap` is passed rather than `ap` itself, as otherwise when `va_arg` is called inside a helper function, it is on a copy of `ap` rather than `ap` itself. `va_end` is called at the end.

### Printing Strings and Characters
Printing strings or characters is straightforward. They are similar functions to those of Libft, but also count and return the number of characters printed. An edge case includes a `NULL` string.

### Printing Decimal Numbers
For printing numbers, `ft_itoa()` from Libft was used but with type `long` as input to deal with `INT_MIN`. The string conversion of the number is freed after printing.

### Printing in Hexadecimal
For printing hexadecimal (uppercase, lowercase and pointers), `ft_putnbr_base()` was used with an additional input argument `unsigned int *counter`, which meant that the function continues to count and return the length of the total printed characters. An edge case includes a `NULL` pointer.
