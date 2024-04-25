#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Function to calculate the sum of even digits
int sumOfEvenDigits(string num) {
    int sum = 0;
    for (size_t i = 0; i < num.length(); ++i) {
        int digit = num[i] - '0';
        if (digit % 2 == 0) {
            sum += digit;
        }
    }
    return sum;
}

int main() {
    // Display your own VU Student ID
    string studentID = "BC230403969";
    cout << "MY VU Student ID: " << studentID << endl;

    // Extract numerical part of the VU Student ID
    string numericalPart = studentID.substr(2); // Assuming the format is consistent

    // Display digital part of VU Student ID
    cout << "Digital part of VU Student ID: " << numericalPart << endl;

    // Store numerical part in a variable
    stringstream ss(numericalPart);
    int numericalValue;
    ss >> numericalValue;

    // Separate each digit and pick even digits
    cout << "Even digits in the numerical part: ";
    int sum = 0;
    while (numericalValue > 0) {
        int digit = numericalValue % 10;
        numericalValue /= 10;
        if (digit % 2 == 0) {
            cout << digit << " ";
            sum += digit;
        }
    }
    cout << endl;

    // Display the sum of all even digits
    cout << "Sum of even digits: " << sum << endl;

    return 0;
}

