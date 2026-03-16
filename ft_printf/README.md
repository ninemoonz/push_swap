*This project has been created as part of the 42 curriculum by kkweon*

## Description
**ft_printf** project is to recreate our own version of printf function in standard C library. \
Main purpose of this project is to understand the variadic fnctions through actually using **stdargs.h** library functions into ft_printf. \
This project only implement the behavior of 'printf' for limited set of sepcifiers and conversion rules.

## Instructions

### compilation
compile to **cc** with **-Wall, -Wextra, -Werror** flags. \
Makefile applied with **$(NAME), all, clean, flcean, and re** rules.

### usage
To use ft_printf library
```bash
#include "ft_printf.h"
```
Run the following command to compile the library.
if want to have separate **main.c**:
```bash
make
cc -Wall -Wextra -Werror main.c libftprintf.a
```
test without separate main.c file
```bash
make
cc -Wall -Wextra -Werror ft_printf.c libftprintf.a
```

### Supported conversions
**%c**: character \
**%s**: string \
**%p**: pointer \
**%d / %i**: signed integer \
**%u**: unsigned integer \
**%x / %X**: hexadecimal in lowercase and uppercase \
**%%**: percent sign

## Resources
**man printf**
**regarding stdarg.h**: [Article About stdarg.h](https://medium.com/@scarletskynned/variadic-functions-in-c-stdarg-h-f466101f1d47) \
**flow of the work**: [Complete flow of ft_printf by gitbook 42](https://42-cursus.gitbook.io/guide/1-rank-01/ft_printf)

**LLMs (e.g., ChatGPT, Gemini, Claude)** were not used to for direct code generation.\
AI is used as supportive tools to understand concepts, programming logic, and to enhance learning efficiency.