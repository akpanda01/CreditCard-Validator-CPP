# Credit Card Validation - Luhn's Algorithm

A C++ program to validate credit card numbers using the Luhn Algorithm, ensuring accurate checksum verification.


## Tech Stack Used
- Language: C++
- Library: Standard Template Library (STL)
  
## Features
- Validates credit card numbers using the Luhn Algorithm.

- Processes both odd and even-positioned digits as per the algorithm.

- Efficiently handles multi-digit calculations using modular arithmetic.

- Command-line interface for user input and output.

## Learning Goals

- Gain experience with string manipulation and character-to-integer conversion in C++.

- The Luhn Algorithm is a checksum formula used to validate identification numbers, such as credit card numbers, by detecting common errors in data entry. It operates through simple arithmetic and modular calculations, ensuring the validity of a sequence.

    1) Starting from the second-to-last digit and moving left, double every second digit.
    2) If doubling results in a two-digit number, sum its digits (e.g., 8 * 2 = 16 → 1 + 6 = 7).
    3) Add the unchanged digits from the odd positions.
    4) Sum all the processed digits.
    5) If the total is divisible by 10, the number is valid.



