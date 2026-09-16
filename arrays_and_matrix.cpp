/** 
C++ 3x3 Matrix Max Value Analyzer

A simple C++ program that initializes a 3x3 integer matrix, displays its elements in a formatted grid, and calculates the maximum element present within the matrix.

## Features

* **Matrix Display (`displayMatrix`)**: Prints the 2D array formatted with tab spacing for clear grid visualization.
* **Maximum Value Search (`findMax`)**: Traverses the matrix elements to find and return the largest numerical value.

## Prerequisites

* **Compiler**: Any standard C++ compiler (`g++`, `clang++`, or MSVC).

## Compilation and Execution

### Using Terminal / Command Line

1. Open your terminal in the directory where your C++ file is saved (e.g., `arrays_and_matrix.cpp`).
2. Compile the source file using `g++`:
   ```bash
   g++ arrays_and_matrix.cpp -o matrix_max

*/

#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

// Function to display a matrix
void displayMatrix(int mat[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}

// Function to find the maximum element in the matrix
int findMax(int mat[ROWS][COLS]) {
    int maxVal = mat[0][0];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (mat[i][j] > maxVal) {
                maxVal = mat[i][j];
            }
        }
    }
    return maxVal;
}

int main() {
    // Initialize a 3x3 matrix
    int matrix[ROWS][COLS] = {
        {5, 8, 2},
        {9, 1, 4},
        {7, 3, 6}
    };

    cout << "Original Matrix:" << endl;
    displayMatrix(matrix);

    // Analyze data
    cout << "Maximum value in matrix: " << findMax(matrix) << endl;

    return 0;
}

/**
 * INPUT/OUTPUT EXAMPLE (arrays_and_matrix.cpp)
 * const int ROWS = 3;
const int COLS = 3;

// Display matrix structure
void displayMatrix(int mat[ROWS][COLS]);

// Iterate and find maximum integer value
int findMax(int mat[ROWS][COLS]);

OUTPUT:Original Matrix:
5       8       2       
9       1       4       
7       3       6       
Maximum value in matrix: 9
 */