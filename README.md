*This project has been created as part of the 42 curriculum by jwheatin.*

Description: writes a library that contains ft_printf(), which mimics the printf() function from libc. Takes format specifiers cpsdiuxX% and corresponding data types as inputs and prints to the stdoutput.

Instructions: use command "make" to create libftprintf.a library. Un-comment main in ft_printf.c to test printf and compile ft*.
Other Makefile commands include standard "all", "clean", "fclean", "re".

Resources: man 3 printf, man stdarg.

Algorithm and data structure:
stdarg/va_arg was used as it allows an unknown number of arguments to be used without knowing how many beforehand - this is especially useful for recreating printf.

