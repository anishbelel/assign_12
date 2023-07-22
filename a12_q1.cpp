#include <iostream>

void upper(int** matrix, int N) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (j >= i) {
                std::cout << matrix[i][j] << " ";
            } else {
                std::cout << "  "; // Print spaces for lower half elements
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    int N;
    std::cout << "Enter the size of the square matrix: ";
    std::cin >> N;

    // Dynamically allocate memory for the 2D matrix
    int** matrix = new int*[N];
    for (int i = 0; i < N; ++i) {
        matrix[i] = new int[N];
    }

    // Read matrix elements from the user
    std::cout << "Enter the elements of the matrix:" << std::endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    // Print the upper half of the matrix
    std::cout << "Upper half of the matrix:" << std::endl;
    upper(matrix, N);

    // Free the dynamically allocated memory
    for (int i = 0; i < N; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
