#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <windows.h>
int main()
{
    //��������� ���������
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //������ ������
    size_t const size_vector = 6;
    //������: �������� 1 - �����; �������� 2 - �������
    std::vector <std::pair <size_t, std::string> > students(size_vector);
    //���� ��������
    for (size_t i = 0; i < size_vector; i++)
        std::cin >> students[i].first >> students[i].second;
    //���������� �� ����������� ������
    std::sort(students.begin(), students.end(), [](std::pair<size_t, std::string> f, std::pair<size_t, std::string> s)
        {
            return f.first < s.first;
        });
    std::cout << "\n";
    //����� ���������������� ������
    for (size_t i = 0; i < size_vector; i++)
        std::cout << students[i].first << " " << students[i].second << "\n";
    return 0;
}