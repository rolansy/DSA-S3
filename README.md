RONALLLL
# Polynomial Operations Program in C

This C program allows users to perform various operations on polynomials, including inputting polynomials, displaying them, and adding them together.

## Features

- **Input Polynomials**: Users can input two polynomials with their respective coefficients and exponents.
- **Display Polynomial 1**: Display the first input polynomial in a sorted format.
- **Display Polynomial 2**: Display the second input polynomial in a sorted format.
- **Display Resultant Polynomial**: Display the result of adding Polynomial 1 and Polynomial 2.

## Usage

1. **Compile the Program**:
   ```bash
   gcc -o polynomial_operations polynomial_operations.c
   ```

2. **Run the Program**:
   ```bash
   ./polynomial_operations
   ```

3. **Menu Options**:
   - Enter the choice corresponding to the operation you want to perform:
     - `1`: Input Polynomials
     - `2`: Display Polynomial 1
     - `3`: Display Polynomial 2
     - `4`: Display Resultant Polynomial
     - `5`: Exit

4. **Input Polynomials**:
   - Choose option `1` to input the coefficients and exponents of the polynomials.

5. **Display Polynomials**:
   - Choose options `2` or `3` to display the respective polynomials.

6. **Display Resultant Polynomial**:
   - Choose option `4` to add and display the resultant polynomial.

7. **Exit the Program**:
   - Choose option `5` to exit the program.

## Example

- Choose option `1` to input the following polynomials:
  ```
  Polynomial 1: 3x^2 + 2x^1 + 5
  Polynomial 2: 1x^3 + 4x^1 + 2
  ```

- Choose option `4` to display the resultant polynomial:
  ```
  Resultant Polynomial: 1x^3 + 3x^2 + 6x^1 + 7
  ```

## Notes

- Ensure that the input polynomials follow the format: `<coefficient>x^<exponent>`.
- The polynomials should be sorted in descending order of exponents for accurate results during addition.

---

Feel free to modify this README.md according to your specific program details and requirements.
