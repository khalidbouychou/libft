# libft

The aim of this project is to code a C library regrouping usual functions that you'll be allowed to use in all your other projects.\n

🚀 TLDR: this project consists of coding basic C functions (see below), which are then compiled
into a library for use in other projects of the cursus.
Functions from <ctype.h> library
ft_isascii - test for ASCII character.
ft_isalnum - alphanumeric character test.
ft_isalpha - alphabetic character test.
ft_isdigit - decimal-digit character test.
ft_isprint - printing character test (space character inclusive).
ft_tolower - upper case to lower case letter conversion.
ft_toupper - lower case to upper case letter conversion.
Functions from <stdlib.h> library
ft_atoi - convert ASCII string to integer.
ft_calloc - memory allocation.
Functions from <strings.h> library
ft_bzero - write zeroes to a byte string.
ft_memset - write a byte to a byte string.
ft_memchr - locate byte in byte string.
ft_memcmp - compare byte string.
ft_memmove - copy byte string.
ft_memcpy - copy memory area.
ft_memccpy - copy string until character found.
Functions from <string.h> library
ft_strlen - find length of string.
ft_strchr - locate character in string (first occurrence).
ft_strrchr - locate character in string (last occurence).
ft_strnstr - locate a substring in a string (size-bounded).
ft_strncmp - compare strings (size-bounded).
ft_strnrcmp - reversely compare strings (size-bounded).
ft_strdup - save a copy of a string (with malloc).
ft_strlcpy - size-bounded string copying.
ft_strlcat - size-bounded string concatenation.
Non-standard functions
ft_putchar_fd - output a character to given file.
ft_putstr_fd - output string to given file.
ft_putendl_fd - output string to given file with newline.
ft_putnbr_fd - output integer to given file.
ft_itoa - convert integer to ASCII string.
ft_substr - extract substring from string.
ft_strtrim - trim beginning and end of string with the specified characters.
ft_strjoin - concatenate two strings into a new string (with malloc).
ft_split - split string, with specified character as delimiter, into an array of strings.
ft_strmapi - create new string from modifying string with specified function.
Linked list functions
ft_lstnew - create new list.
ft_lstsize - count elements of a list.
ft_lstlast - find last element of list.
ft_lstadd_back - add new element at end of list.
ft_lstadd_front - add new element at beginning of list.
ft_lstdelone - delete element from list.
ft_lstclear - delete sequence of elements of list from a starting point.
ft_lstiter - apply function to content of all list's elements.
ft_lstmap - apply function to content of all list's elements into new list.
Note: functions marked with * are bonus functions (not mandatory by the project's subject).

Third-party testers
jtoty/Libftest
alelievr/libft-unit-test
Night-squad/libft-war-machine-v2019
t0mm4rx/libftdestructor
