*This project has been created as part of the 42 curriculum by balshoul.*

## Description
Libft is the first project at 42, where the objective is to rewrite a set of standard C library functions from scratch, as well as create additional useful tools (such as linked list manipulations, string utilities, and memory management functions). The goal of this project is to understand how these standard functions work under the hood, how to implement them properly in C, and how to organize code into a reusable static library (`libft.a`) that can be leveraged in future 42 C projects.

## Instructions

### Compilation
To compile the library and generate the `libft.a` static library file, run the included Makefile using the following command in your terminal:

```bash
make
```

### Additional Makefile Rules
- `make clean`: Removes all object (`.o`) files.
- `make fclean`: Removes all object files as well as the compiled `libft.a` library.
- `make re`: Recompiles the entire library from scratch (`fclean` followed by `make`).

### Usage in Other Projects
To use `libft` in your own C programs, include the header file in your source code:
```c
#include "libft.h"
```
And link the library during compilation:
```bash
gcc main.c libft.a
```

## Resources

Here are the external resources, documentation, and tutorials consulted during the development of this project:

### Makefiles
- [How does a Makefile work and how to simplify them (Part 1)](https://www.youtube.com/watch?v=GExnnTaBELk)
- [How does a Makefile work and how to simplify them (Part 2)](https://www.youtube.com/watch?v=HmbByRhh3Sk)
- [Command Line with Makefiles](https://www.youtube.com/watch?v=mEHJxzvsx3g)

### Function Pointers
- [Understanding Function Pointers in C](https://www.youtube.com/watch?v=f_uWOWViYc0)

### Specific Functions & Documentation
- **memcmp**: [GeeksforGeeks - memcmp in C](https://www.geeksforgeeks.org/c/memcmp-in-c/)
- **strncmp**: [W3Schools - C strncmp Reference](https://www.w3schools.com/c/ref_string_strncmp.php) and manual pages (`man strncmp`)

### Structs & Typedefs
- [GeeksforGeeks - How to use typedef for struct in C](https://www.geeksforgeeks.org/c/how-to-use-typedef-for-struct-in-c/)

### AI Usage Disclosure
Artificial intelligence tools were used during the drafting of this README file to format documentation and organize the structured resources. Additionally, it was consulted as a teacher but **DID NOT** solve anything directly, it gave only hints, explanations and reasonings when needed.