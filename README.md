# Libft (Custom C Library and Linked List Operations)

Welcome to the Libft project! This repository contains a reimplementation of the standard C library from scratch, along with additional functionality for linked list operations.

## Introduction

This project aims to provide a custom implementation of the standard C library, offering a set of functions for common C operations along with a collection of linked list utilities. Whether you're looking for an alternative to the standard library or want to explore linked list operations in C, this project has got you covered.

## Features

### Custom C Library

- **Character Manipulation:** Operations such as `isupper`, `isspace`, `to_upper`, and similar functions.
- **String Manipulation:** Custom implementations of functions like `strlen`, `strcpy`, `strcat`, and more.
- **Memory Operations:** A basic memory allocation system with `calloc`, `memcmp`, and `realloc`, etc. functions.
- **Math Functions:** Fundamental mathematical functions such as `abs`, `is_negative`, `min`, `max`.
- **Output Functions:** Regular put functions that write into the given file descriptor, be it a string, a number, or a character; e.g., `putnmbr_fd`, `putstr_fd`, and `putchar_fd`.

### Linked List Operations

- **Creation:** Create and initialize linked lists.
- **Insertion/Deletion:** Insert and delete nodes at the beginning, end, or at a specified position.
- **Traversal:** Traverse the linked list and perform operations on each node.
- **Searching:** Search for a specific element in the linked list.
- **Mapping:** Apply a given function to each element of the linked list.

## Getting Started

To get started with this project, follow these steps:

1. Clone the repository:

   ```bash
   git clone https://github.com/your-username/custom-c-library.git
   ```

2. Compile the source code via Makefile into a `libft.a` archive:

   ```bash
   make libft.a
   ```

3. Compile `libft` via Makefile into a `.a` archive file:

   ```bash
   cd libft
   make libft.a
   ```

## Usage

The example below shows how you can integrate the `libft` library into your own projects by including the necessary header file and compiling `libft.a` into your project.

```c
#include "libft.h"

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
  ft_putstr_fd("Hello World!", STDOUT_FILENO);
  return EXIT_SUCCESS;
}
```

```bash
gcc -Wall -Wextra -Werror main.c libft.a -I inc
```

## License

This project is licensed under the [MIT License](LICENSE), allowing you to use, modify, and distribute the code freely.

Feel free to reach out if you have any questions or feedback.
