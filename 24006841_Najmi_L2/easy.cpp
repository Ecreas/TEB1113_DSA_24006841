//Najmi 24006841 G2
#include <iostream>

using namespace std;

int main() {
    
    int rows, cols; // dimensions of the matrix
    
    
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    
    int matrix[rows][cols]; //initialize the matrix

    // user input for matrix elements
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Finding the maximum element in each row
    for (int i = 0; i < rows; i++) {
        int maxElement = matrix[i][0];
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }
        cout << "The maximum element in row " << i << " is: " << maxElement << endl;
    }

    return 0;
}
