*This proyect has been created like part of 42 curriculum by gfiguero.*

# Description:
Library for manipulation of string (char *) and other kinds of pointer lists and use of linked list of structures.

# Instructions:
You may install this repository by cloning it in a UNIX around. In case of you are not in a UNIX enviroment
you are not going to be able to use the functionalitys includes in unistd.h. Be sure your OS have the POSIX standart.

For compiling this proyect you have to your disponibility a makefile, you only need to execute ``make`` in this directory.
The Makefile archive also hace ``make clean`` and ``make fclean`` function.

# Resources:
This proyect follows the guidelines of 42 Malaga by Fundacion Telefonica and is part of a peer to peer learning.

# Functions:
- ft_isdigit: evaluate if a ascii value is digit.
- ft_isalnum: evaluate if a ascii value is numeric.
- ft_isalpha: evaluate if a ascii value is alphabetic.
- ft_isascii: evaluate if a int value is ascii.
- ft_isprint: evaluate if a ascii value is printable.
- ft_strlen: calculate how mane characters have a string.
- ft_memset: give a value to n positions in a array to a array.
- ft_bzero: like memset but with 0.
- ft_memcpy: copy the content of an array into other array.
- ft_memmove: like memcpy but checking overlap.
- ft_strlcpy: copy the content of a string into other string.
- ft_strlcat: concatenate a string with other string.
- ft_toupper: change a lower charecter to upper.
- ft_tolower: change a upper character to  lower.
- ft_strchr: search the first character given in a array.
- ft_strncmp: compare the first n characters of two arrays.
- ft_memchr: search an int value into a space of memory.
- ft_memcmp: compare two memory spaces.
- ft_strnstr: search a string into the first n characters of other string.
- ft_atoi: convert from string to integer.
- ft_calloc: malloc of a space of memory initializating all to 0.
- ft_strdup: dupplicate a string.
- ft_substr: returnate the string starting in the position start and finishing in the position end.
- ft_strjoin: create a new string result of concatenating two strings.
- ft_strtrim: delete in a string the firsts and lasts characters contained into other string.
- ft_putchar_fd: write a char in a file.
- ft_putstr_fd: write a string in a file.
- ft_putendl_fd: write a end of line in a file.
- ft_putnbr_fd: write a number in a file.
- ft_itoa: convert from integer to string.
- ft_strrchr: search the last char in a string.
- ft_strmapi: applies the function f to each character of the string s and create a new string with this values.
- ft_striteri: applies the function f to each character of the string s and change the original string.
- ft_split: get an array and divide it by separating them into a matrix.
- ft_lstnew: create and initializate a list object.
- ft_lstadd_front: add a list object to the first possition of a linked list of this objetcs.
- ft_lstsize: get the size of a linked list.
- ft_lstlast: get the last object of a linked list.
- ft_lstadd_back: add a list object to the last possition of a linked list of this objetcs.
- ft_lstdelone: delete one list object from the linked list.
- ft_lstclear: free the linked list given.
- ft_lstiter: iterates through the list ’lst’ and applies the function ’f’ to the content of each node.
- ft_lstmap: iterates through the list ’lst’, applies thefunction ’f’ to each node’s content, and creates a new list resulting of the successive applications of the function ’f’.
