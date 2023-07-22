#include <iostream>
#include <vector>

bool isPerfectMatrix(const std::vector<std::vector<int>>& grid) {
    int n = grid.size();

    // Check condition a: All elements in the diagonals are non-zero integers.
    for (int i = 0; i < n; ++i) {
        if (grid[i][i] == 0) {
            return false;
        }
    }

    // Check condition b: All other elements except the diagonal elements are 0.
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j && grid[i][j] != 0) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int n;
    std::cout << "Enter the size of the square matrix: ";
    std::cin >> n;

    std::vector<std::vector<int>> grid(n, std::vector<int>(n));

    std::cout << "Enter the elements of the matrix:" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> grid[i][j];
        }
    }

    bool isPerfect = isPerfectMatrix(grid);
    if (isPerfect) {
        std::cout << "The matrix is a perfect matrix." << std::endl;
    } else {
        std::cout << "The matrix is not a perfect matrix." << std::endl;
    }

    return 0;
}
