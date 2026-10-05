# libft

> 42 Common Core · Rank 00

My own C standard library: re-implementations of libc functions plus extra string, memory and linked-list helpers, compiled into a static library (`libft.a`) that I reused in later 42 projects.

## Contents

### Part 1 – libc functions
Re-implementations that behave like the standard C library versions.

| Function | What it does |
|---|---|
| `ft_isalpha` | Checks if a character is a letter (`a–z`, `A–Z`). |
| `ft_isdigit` | Checks if a character is a digit (`0–9`). |
| `ft_isalnum` | Checks if a character is a letter or a digit. |
| `ft_isascii` | Checks if a value is in the ASCII range (0–127). |
| `ft_isprint` | Checks if a character is printable (space through `~`). |
| `ft_toupper` | Converts a lowercase letter to uppercase; other characters are returned unchanged. |
| `ft_tolower` | Converts an uppercase letter to lowercase; other characters are returned unchanged. |
| `ft_strlen` | Returns the length of a string, not counting the `'\0'`. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares up to `n` characters of two strings. |
| `ft_strnstr` | Finds a substring inside a string, searching at most `len` characters. |
| `ft_strlcpy` | Copies a string into a buffer of a given size, always `'\0'`-terminating it. |
| `ft_strlcat` | Appends a string to a buffer of a given size, always `'\0'`-terminating it. |
| `ft_strdup` | Returns a newly allocated copy of a string. |
| `ft_atoi` | Converts a string (optional spaces and sign, then digits) to an `int`. |
| `ft_memset` | Fills `n` bytes of memory with a given byte value. |
| `ft_bzero` | Sets `n` bytes of memory to zero. |
| `ft_memcpy` | Copies `n` bytes from one memory area to another (areas must not overlap). |
| `ft_memmove` | Copies `n` bytes safely, even when the memory areas overlap. |
| `ft_memchr` | Finds the first occurrence of a byte in the first `n` bytes of memory. |
| `ft_memcmp` | Compares the first `n` bytes of two memory areas. |
| `ft_calloc` | Allocates memory for an array and sets every byte to zero. |

### Part 2 – Additional functions
Extra string and output helpers that are not in libc (or differ from it).

| Function | What it does |
|---|---|
| `ft_substr` | Returns a new string: `len` characters of `s` starting at index `start`. |
| `ft_strjoin` | Returns a new string made of `s1` followed by `s2`. |
| `ft_strtrim` | Returns a copy of `s1` with characters from `set` removed from both ends. |
| `ft_split` | Splits a string by a delimiter character into a `NULL`-terminated array of strings. |
| `ft_itoa` | Converts an `int` to a newly allocated string (handles negatives and `INT_MIN`). |
| `ft_strmapi` | Applies a function to each character (with its index) and returns the results as a new string. |
| `ft_striteri` | Applies a function to each character of a string in place, passing its index. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### Bonus – Linked list functions
Helpers for a singly linked list of `t_list` nodes (`void *content` + `next` pointer).

| Function | What it does |
|---|---|
| `ft_lstnew` | Creates a new node holding `content`, with `next` set to `NULL`. |
| `ft_lstadd_front` | Adds a node at the start of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstsize` | Counts the nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstdelone` | Frees one node, using `del` to free its content. |
| `ft_lstclear` | Frees every node in the list and sets the list pointer to `NULL`. |
| `ft_lstiter` | Applies a function to the content of every node. |
| `ft_lstmap` | Builds a new list by applying a function to each node's content; cleans up with `del` if any allocation fails. |

## Clone
Clone the repository:
```bash
git clone https://github.com/HowardHoJiaHao/libft.git
```

## Compile and Run
The library is split into a mandatory part and a bonus part. The bonus part adds the linked list functions.

To compile the mandatory part, `cd` into the cloned directory and:
```bash
make
```

To compile the bonus part, `cd` into the cloned directory and:
```bash
make bonus
```

Both build `libft.a`. To use it in your own program, include the header and link the library:
```c
#include "libft.h"   // then compile with: cc main.c -L. -lft
```
