# libft

> 42 Common Core · Rank 00

My own C standard library: re-implementations of libc functions plus extra string, memory and linked-list helpers, compiled into a static library (`libft.a`) that I reused in later 42 projects.

## Contents
- **libc functions** – `ft_strlen`, `ft_memcpy`, `ft_memmove`, `ft_strlcpy`, `ft_strlcat`, `ft_strnstr`, `ft_atoi`, `ft_calloc`, `ft_strdup`, …
- **Additional functions** – `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, `ft_put*_fd`
- **Bonus (linked list)** – `ft_lstnew`, `ft_lstadd_front/back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Usage
```bash
make          # builds libft.a
make bonus    # adds the linked-list functions
```
```c
#include "libft.h"   // then compile with: cc main.c -L. -lft
```
