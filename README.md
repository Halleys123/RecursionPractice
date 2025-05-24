# DSA Dynamic Programming (C++)

This project is a collection of C++ implementations for various Data Structures and Algorithms (DSA) problems, with a focus on Dynamic Programming. It is organized for learning, experimenting, and practicing core algorithmic techniques.

## Project Structure

- **main.cpp**: Entry point that demonstrates and tests the algorithms.
- **include/**: Header files for each algorithm or utility.
- **src/**: Source files implementing the algorithms.
- **utils/**: Utility programs for code generation and boilerplate creation.
- **build/**: Compiled binaries (e.g., `main.exe`).
- **notes/**: Markdown notes on DSA concepts (e.g., `basics.md`).
- **makefile**: Build automation for compiling and running the project.
- **sources.txt**: List of source files to be compiled.

## Key Algorithms & Files

- **Dynamic Programming**: Fibonacci, Factorial, Shortest Grid Path, Triangular Sum, Special Fibonacci, etc.
- **Searching**: Binary Search
- **Array Operations**: Min/Max in Array, Number Reversal
- **String Operations**: String Reverse, Uppercase Letter in String
- **Utilities**: Print line, Print numbers

## Utilities

- `generate_sources.cpp`: Scans the project and updates `sources.txt` with all relevant source files.
- `boilerplate.cpp`: Generates boilerplate code for new algorithm modules.

## Building & Running

### Prerequisites

- C++ compiler (e.g., g++)
- Make (for using the provided makefile)

### Build Steps

1. **Build all utilities and main program:**
   ```sh
   make build_all
   ```
2. **Run the main program:**
   ```sh
   ./build/main.exe
   ```
   Or run via the makefile:
   ```sh
   make build_main
   ```

## Notes

- See `notes/basics.md` for a summary of dynamic programming concepts.
- Each algorithm is modularized for clarity and reusability.

## Adding New Algorithms

- Use `boilerplate.cpp` to generate new `.cpp` and `.h` files for your algorithm.
- Implement your logic, then rebuild the project.

## License

This project is for educational purposes.
