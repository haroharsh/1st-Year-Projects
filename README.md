# Library Management System

A simple console-based Library Management System written in C that allows users to add books and display the list of books stored in a file.

## Features

- **Add Book**: Add a new book with ID, title, and author.
- **Display Books**: View all books in a formatted table.
- **File Storage**: Books are stored in a text file (`books.txt`) for persistence.

## Requirements

- C compiler (e.g., GCC)
- Standard C libraries: `stdio.h`, `string.h`, `stdlib.h`

## How to Compile and Run

1. **Compile the program**:
   ```
   gcc Library-management-system.c -o library_system
   ```

2. **Run the program**:
   ```
   ./library_system
   ```

   On Windows, use:
   ```
   library_system.exe
   ```

## Usage

Upon running the program, you will see a menu with the following options:

1. **Add Book**: Enter the book ID, title, and author when prompted.
2. **Display Books**: Shows a list of all added books in a table format.
3. **Exit**: Quit the program.

Books are saved to `books.txt` in the same directory as the executable.

## Example

```
Library Management System
1. Add Book
2. Display Books
3. Exit
Enter your choice: 1
Enter book id: 1
Enter book title: The Great Gatsby
Enter author name: F. Scott Fitzgerald
Book added and saved to file successfully!

Library Management System
1. Add Book
2. Display Books
3. Exit
Enter your choice: 2

Books List
ID    Title                Author
--------------------------------------------------
1     ABC                   XYZ --------------------------------------------------
```

## Notes

- Book IDs should be unique integers.
- Titles and authors are limited to 50 characters each.