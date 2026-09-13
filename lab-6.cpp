// COMSC-210-5293 | Lab 6 | Yuyi Chen

#include <iostream>

using namespace std;

// Size of the array
const int SIZE = 5;

// Prototypes
void enterArrayData(double *);
void outputArrayData(double *);
double sumArray(double *);

int main() {
    // Dynamically allocate an array of doubles
    double *arr = nullptr;
    arr = new double[SIZE];

    enterArrayData(arr);
    outputArrayData(arr);
    cout << "Sum of values: " << sumArray(arr) << endl;

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;
}

// Function to enter data into the array
void enterArrayData(double *arr) {
    cout << "Data entry for the array: " << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "\t> Element #" << i << ": ";
        cin >> *(arr + i);
    }

    cout << "Data entry complete." << endl;
}

// Function to output the data in the array
void outputArrayData(double *arr) {
    cout << "Outputting array elements: ";

    for (int i = 0; i < SIZE; i++) {
        cout << *(arr + i) << " ";
    }

    cout << endl;
}

// Function to calculate the sum of the array elements
double sumArray(double *arr) {
    double sum = 0.0;

    for (int i = 0; i < SIZE; i++) {
        sum += *(arr + i);
    }

    return sum;
}