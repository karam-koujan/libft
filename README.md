# libft
<div align="center">
<img src="https://github.com/karam-koujan/libft/blob/main/libft.webp" width="500" alt="libft logo"/>
</div>

**libft** is a personal recreation of various functions from the standard C library (libc). This project aims to implement essential C functions such as memory management, string manipulation, and I/O operations from scratch, providing a deeper understanding of how C works at a low level. The goal is to improve memory management skills, gain hands-on experience in system-level programming, and enhance general problem-solving abilities.

---

## Files and Functions

This project includes the following files and functions:

### Memory and String Manipulation Functions
- **ft_atoi.c** – Converts a string to an integer.
- **ft_bzero.c** – Sets the first `n` bytes of the memory area to zero.
- **ft_calloc.c** – Allocates memory for an array of `n` elements and initializes it to zero.
- **ft_memchr.c** – Searches for the first occurrence of a byte in memory.
- **ft_memcmp.c** – Compares two blocks of memory.
- **ft_memcpy.c** – Copies `n` bytes from one memory area to another.
- **ft_memmove.c** – Moves `n` bytes from one memory area to another, handling overlapping areas.
- **ft_memset.c** – Sets the first `n` bytes of a memory area to a specific value.

### String Functions
- **ft_isalnum.c** – Checks if a character is alphanumeric.
- **ft_isalpha.c** – Checks if a character is alphabetic.
- **ft_isascii.c** – Checks if a character is a valid ASCII character.
- **ft_isdigit.c** – Checks if a character is a digit.
- **ft_isprint.c** – Checks if a character is printable.
- **ft_itoa.c** – Converts an integer to a string.
- **ft_strchr.c** – Finds the first occurrence of a character in a string.
- **ft_strdup.c** – Duplicates a string.
- **ft_striteri.c** – Applies a function to each character of a string, modifying the string.
- **ft_strjoin.c** – Concatenates two strings into a new one.
- **ft_strlcat.c** – Appends a string to another with size limits.
- **ft_strlcpy.c** – Copies a string with size limits.
- **ft_strlen.c** – Calculates the length of a string.
- **ft_strmapi.c** – Applies a function to each character of a string and returns a new string.
- **ft_strncmp.c** – Compares the first `n` characters of two strings.
- **ft_strnstr.c** – Finds the first occurrence of a substring in a string, searching up to `n` characters.
- **ft_strrchr.c** – Finds the last occurrence of a character in a string.
- **ft_strtrim.c** – Trims characters from the beginning and end of a string.
- **ft_substr.c** – Extracts a substring from a string.

### Character Case Functions
- **ft_tolower.c** – Converts a character to lowercase.
- **ft_toupper.c** – Converts a character to uppercase.

### Output Functions
- **ft_putchar_fd.c** – Writes a character to a file descriptor.
- **ft_putendl_fd.c** – Writes a string followed by a newline to a file descriptor.
- **ft_putnbr_fd.c** – Writes an integer to a file descriptor.
- **ft_putstr_fd.c** – Writes a string to a file descriptor.

### Header File
- **libft.h** – Header file containing function prototypes and necessary includes.

---

## Makefile

The project includes a `Makefile` to automate the compilation process. To compile the project, simply run:

```bash
make
```
