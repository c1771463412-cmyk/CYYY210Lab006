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
    double *arr = nullptr;
    arr = new double[SIZE];

    enterArrayData(arr);

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