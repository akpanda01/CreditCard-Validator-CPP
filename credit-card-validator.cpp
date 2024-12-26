#include <iostream>
using namespace std;

// Function to get the sum of digits of a number. 
// If the number is two digits, it adds the individual digits.
int getDigit(const int number);

// Function to sum the digits at odd positions in the credit card number 
// (starting from the rightmost digit).
int sumOddDigits(const string cardNumber);

// Function to sum the processed digits at even positions in the credit card number 
// (starting from the second-to-last digit).
int sumEvenDigits(const string cardNumber);

int main()
{
    string cardNumber; // Variable to store the credit card number as a string
    int result = 0; // Variable to store the cumulative sum of the digits

    // Prompt the user to enter a credit card number
    cout << "Enter a credit card #: ";
    cin >> cardNumber;

    // Compute the total sum by adding the sums of odd and even positioned digits
    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    // Check if the computed sum is divisible by 10 to determine card validity
    if (result % 10 == 0) {
        cout << cardNumber << " is valid"; // Valid card number
    } else {
        cout << cardNumber << " is not valid"; // Invalid card number
    }

    return 0; // End of the program
}

// Function to compute the sum of the digits of a number
// If the number is two digits, it splits them and adds the digits
int getDigit(const int number) {
    return number % 10 + (number / 10 % 10); // Extract and sum the tens and ones place
}

// Function to compute the sum of digits at odd positions in the credit card number
// Odd positions are determined from the rightmost digit
int sumOddDigits(const std::string cardNumber) {
    int sum = 0;

    // Traverse the string from the rightmost digit, skipping every other digit
    for (int i = cardNumber.size() - 1; i >= 0; i -= 2) {
        sum += cardNumber[i] - '0'; // Convert character to integer and add to the sum
    }

    return sum; // Return the total sum of odd-positioned digits
}

// Function to compute the sum of digits at even positions in the credit card number
// Even positions are determined from the second-to-last digit
int sumEvenDigits(const std::string cardNumber) {
    int sum = 0;

    // Traverse the string from the second-to-last digit, skipping every other digit
    for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
        // Multiply the digit by 2 and sum the individual digits using getDigit
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum; // Return the total sum of even-positioned digits
}
