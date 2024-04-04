# Big Integers

## Description

This program calculates the factorial of a given integer up to 500. Factorial, denoted by `n!`, is the product of all positive integers less than or equal to `n`. For example, `4! = 4 * 3 * 2 * 1 = 24`. The program addresses the challenge of handling large factorial values by implementing a new Abstract Data Type (ADT) for large integers.

## Specifications

### Input

The program runs interactively, prompting the user to input an integer value between 1 and 500. After calculating and displaying the factorial of the input value, the program asks if another factorial is desired.

### Output

The factorial calculation is printed with commas after every third digit from the right end, ensuring readability. Since factorial values may have hundreds of digits, the program may print the result over several lines.

### Operations

The large integer ADT supports operations such as addition, subtraction, multiplication, and division. These operations are performed on linked lists representing large integers.

## Implementation Details

- **Linked List Representation**: Large integers are represented as linked lists, with each node containing multiple digits.
- **Arithmetic Operations**: Arithmetic operations are performed digit by digit, considering carries and borrow operations.
- **Handling Large Factorials**: The program addresses the challenge of calculating large factorials by employing efficient algorithms for multiplication and storage.



## Contributing

Contributions to this project are welcome! If you have any suggestions for improvements or find any issues, please feel free to submit a pull request or open an issue.

## License

This project is licensed under the [MIT License](LICENSE).

