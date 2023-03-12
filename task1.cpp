#include <iostream>
#include <algorithm>
#include <vector>



int main() {
    // пользователь вводит количество и высоты стобцов гистограммы
    int n;
    //std::cout << "Enter a number of columns: ";
    std::cin >> n;
    std::vector<int> heights(n);
    //std::cout << "Enter a heights of columns: ";
    for (int i = 0; i < n; i++) {
        std::cin >> heights[i];
    }

    // вектор сортируется по возрастанию высоты столбцов
    //sort(heights.begin(), heights.end());

    // находится максимальная площадь прямоугольника в гистограмме
    int max_square = 0;
    for (int i = 0; i < n; i++) {
        int j = i - 1, k = i + 1;
        while (j >= 0 && heights[j] >= heights[i]) {
            j--;
        }
        while (k < n && heights[k] >= heights[i]) {
            k++;
        }
        int area = heights[i] * (k - j - 1);
        max_square = std::max(max_square, area);
    }




    // Вывод самой большой площади 

    std::cout << max_square << std::endl;

    return 0;
}