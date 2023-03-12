#include <iostream>
#include <algorithm>
#include <vector>



int main() {
    // ������������ ������ ���������� � ������ ������� �����������
    int n;
    //std::cout << "Enter a number of columns: ";
    std::cin >> n;
    std::vector<int> heights(n);
    //std::cout << "Enter a heights of columns: ";
    for (int i = 0; i < n; i++) {
        std::cin >> heights[i];
    }

    // ������ ����������� �� ����������� ������ ��������
    //sort(heights.begin(), heights.end());

    // ��������� ������������ ������� �������������� � �����������
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




    // ����� ����� ������� ������� 

    std::cout << max_square << std::endl;

    return 0;
}