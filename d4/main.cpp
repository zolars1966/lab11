#include <iostream>

int main() {
    int n;
    std::cout << "Введите количество строк: ";
    std::cin >> n;

    if (!std::cin || n < 0) {
        std::cerr << "Некорректный размер\n";
        return 1;
    }

    int** pascal = new int*[n];

    for (int i = 0; i < n; ++i) {
        pascal[i] = new int[i + 1];
        pascal[i][0] = 1;
        pascal[i][i] = 1;

        for (int j = 1; j < i; ++j)
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j)
            std::cout << pascal[i][j] << ' ';
        std::cout << '\n';
    }

    for (int i = 0; i < n; ++i)
        delete[] pascal[i];
    delete[] pascal;

    return 0;
}