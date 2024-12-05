# ft_printf

`ft_printf` is a custom implementation of the `printf` function in C, built as part of a personal learning project. It provides similar functionality to the standard `printf` from the C standard library, with some added flexibility and customization options.

---

## Features

- Print different types of data: integers, characters, strings, hexadecimal numbers, and pointers.
- Handle precision, width, and flags like `-`, `+`, `0`, etc. (if implemented).
- Customizable formatting through optional prefixes.
- Recursive function calls for printing large numbers and pointers in hexadecimal format.

---

## Usage

You can use the `ft_printf` function in your C project just like the standard `printf` function.

### Example:

```c
#include "ft_printf.h"

int main(void)
{
    int num = 42;
    char c = 'A';
    char *str = "Hello, world!";
    uintptr_t ptr = (uintptr_t)&num;

    ft_printf("Integer: %d\n", num);
    ft_printf("Char: %c\n", c);
    ft_printf("String: %s\n", str);
    ft_printf("Pointer: %p\n", ptr);

    return 0;
}
```

### Supported Format Specifiers

- `%d` – Integer (decimal).
- `%c` – Character.
- `%s` – String.
- `%p` – Pointer (printed as hexadecimal).
- `%x` – Unsigned hexadecimal (lowercase).
- `%X` – Unsigned hexadecimal (uppercase).
- `%u` – Unsigned integer.

---

## Installation

1. Clone the repository to your local machine:

   ```bash
   git clone https://github.com/oleksii-mtk/ft_printf.git
   ```

2. Navigate to the project directory:

   ```bash
   cd ft_printf
   ```

3. Compile the project with your C compiler (e.g., `gcc`):

   ```bash
   gcc -c ft_printf.c ft_prn_char.c ft_prn_nbr.c ft_prn_str.c ft_prn_ptr.c ft_prn_u_hex.c
   ar rcs libftprintf.a ft_printf.o ft_prn_char.o ft_prn_nbr.o ft_prn_str.o ft_prn_ptr.o ft_prn_u_hex.o
   ```

4. Link the static library to your project to use the `ft_printf` function:

   ```bash
   gcc -o main main.c -L. -lftprintf
   ```

---

## File Structure

```
ft_printf/
│
├── ft_printf.c       # Main printf implementation
├── ft_prn_char.c     # Handles character printing
├── ft_prn_nbr.c      # Handles integer/number printing
├── ft_prn_str.c      # Handles string printing
├── ft_prn_ptr.c      # Handles pointer printing
├── ft_prn_u_hex.c    # Handles unsigned hexadecimal printing
├── ft_printf.h       # Header file with function prototypes
└── Makefile          # Makefile for compilation and cleaning
```

---

## Testing

You can test the `ft_printf` implementation by running the `main.c` file after compiling. It will print examples for various format specifiers and demonstrate the correctness of the function.

---

## Contributing

Feel free to fork this project and make improvements or additions. If you encounter any issues, please open an issue in the GitHub repository.

---

## License

This project is open-source and available under the [MIT License](LICENSE).
```

### Explanation:
1. **Project Overview**: A brief description of the project.
2. **Features**: Lists the functionalities of `ft_printf`.
3. **Usage**: Provides example usage of the `ft_printf` function with format specifiers.
4. **Installation**: Instructions on how to clone, compile, and link the project.
5. **File Structure**: A breakdown of the project’s files.
6. **Testing**: A note on how to test the function.
7. **Contributing**: Information on contributing to the project.
8. **License**: A placeholder for a license (adjust according to your preference).

Let me know if you need further modifications!
