#include <iostream>
#include <algorithm>
#include <vector>



int main() {
    // ������������ ������ ���������� � ������ ������� �����������
    int n;
    std::cout << "Enter a number of columns: ";
    std::cin >> n;
    std::vector<int> heights(n);
    std::cout << "Enter a heights of columns: ";
    for (int i = 0; i < n; i++) {
        std::cin >> heights[i];
    }

    // ������ ����������� �� ����������� ������ ��������
    sort(heights.begin(), heights.end());

    // ��������� ������������ ������� �������������� � �����������
    int max_square = 0;
    for (int i = 0; i < n; i++) {
        int square = heights[i] * (n - i);
        if (square > max_square) {
            max_square = square;
        }
    }

    // ����� ����� ������� ������� 
    std::cout << "Max square^ ";
    std::cout << max_square << std::endl;

    return 0;
}