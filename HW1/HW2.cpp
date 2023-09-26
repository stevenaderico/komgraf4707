#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk menampilkan matriks
void displayMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Fungsi untuk melakukan penjumlahan matriks
vector<vector<int>> addMatrix(const vector<vector<int>>& matrix1, const vector<vector<int>>& matrix2) {
    int rows = matrix1.size();
    int columns = matrix1[0].size();
    vector<vector<int>> result(rows, vector<int>(columns));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    return result;
}

// Fungsi untuk melakukan pengurangan matriks
vector<vector<int>> subtractMatrix(const vector<vector<int>>& matrix1, const vector<vector<int>>& matrix2) {
    int rows = matrix1.size();
    int columns = matrix1[0].size();
    vector<vector<int>> result(rows, vector<int>(columns));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    return result;
}

// Fungsi untuk melakukan perkalian skalar pada matriks
vector<vector<int>> multiplyScalar(const vector<vector<int>>& matrix, int scalar) {
    int rows = matrix.size();
    int columns = matrix[0].size();
    vector<vector<int>> result(rows, vector<int>(columns));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = matrix[i][j] * scalar;
        }
    }

    return result;
}

// Fungsi untuk melakukan pembagian matriks dengan skalar
vector<vector<int>> divideScalar(const vector<vector<int>>& matrix, int scalar) {
    int rows = matrix.size();
    int columns = matrix[0].size();
    vector<vector<int>> result(rows, vector<int>(columns));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = matrix[i][j] / scalar;
        }
    }

    return result;
}

int main() {
    vector<vector<int>> matrix1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> matrix2 = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    // Penjumlahan matriks
    vector<vector<int>> sum = addMatrix(matrix1, matrix2);
    cout << "Penjumlahan matriks:" << endl;
    displayMatrix(sum);

    // Pengurangan matriks
    vector<vector<int>> difference = subtractMatrix(matrix1, matrix2);
    cout << "Pengurangan matriks:" << endl;
    displayMatrix(difference);

    // Perkalian skalar
    int scalar = 2;
    vector<vector<int>> multiplied = multiplyScalar(matrix1, scalar);
    cout << "Perkalian skalar:" << endl;
    displayMatrix(multiplied);

    // Pembagian matriks dengan skalar
    int divisor = 3;
    vector<vector<int>> divided = divideScalar(matrix1, divisor);
    cout << "Pembagian matriks dengan skalar:" << endl;
    displayMatrix(divided);

    return 0;
}