#include <iostream>
#include <algorithm>
#include <vector>



int main() {
    // пользователь вводит количество и высоты стобцов гистограммы
    int n;
    std::cout << "Enter a number of columns: ";
    std::cin >> n;
    std::vector<int> heights(n);
    std::cout << "Enter a heights of columns: ";
    for (int i = 0; i < n; i++) {
        std::cin >> heights[i];
    }

    // вектор сортируется по возрастанию высоты столбцов
    sort(heights.begin(), heights.end());

    // находится максимальная площадь прямоугольника в гистограмме
    int max_square = 0;
    for (int i = 0; i < n; i++) {
        int square = heights[i] * (n - i);
        if (square > max_square) {
            max_square = square;
        }
    }

    // Вывод самой большой площади 
    std::cout << "Max square^ ";
    std::cout << max_square << std::endl;

    return 0;
}