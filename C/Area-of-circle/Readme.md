# Area and Circumference of a Circle

This directory contains a simple C program to calculate both the area and the circumference of a circle. The program prompts the user to input the radius of a circle, then calculates and displays the area and circumference using the following formulas:

- **Area:**  
  ```
  Area = π * r²
  ```
- **Circumference:**  
  ```
  Circumference = 2 * π * r
  ```

where `r` is the radius of the circle.

## Files

- **main.c** (or similar): The source code implementing the logic for area and circumference calculation.

## How to Compile

You can compile the program using `gcc` or any standard C compiler. For example:

```bash
gcc main.c -o circle_calc
```

## How to Run

After compiling, run the executable:

```bash
./circle_calc
```

Then enter the radius when prompted.

## Example Output

```
Enter the radius of the circle: 5
The area of the circle is: 78.539816 cm.sq
The circumference of the circle is: 31.415927 cm
```

## Notes

- Ensure you have a C compiler installed.
- The program uses the value of π (pi) from the standard math library.
- For different source file names, adjust the compile command accordingly.

---

**Author:** [Kapy2003](https://github.com/Kapy2003)  
**Project:** [My-Project-for-learning](https://github.com/Kapy2003/My-Project-for-learning)