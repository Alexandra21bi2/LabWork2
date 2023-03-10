#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <windows.h>
int main()
{
    //Установка кодировки
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //Размер списка
    size_t const size_vector = 6;
    //Вектор: параметр 1 - класс; параметр 2 - фамилия
    std::vector <std::pair <size_t, std::string> > students(size_vector);
    //Ввод значений
    for (size_t i = 0; i < size_vector; i++)
        std::cin >> students[i].first >> students[i].second;
    //Сортировка по возрастанию класса
    std::sort(students.begin(), students.end(), [](std::pair<size_t, std::string> f, std::pair<size_t, std::string> s)
        {
            return f.first < s.first;
        });
    std::cout << "\n";
    //Вывод отсортированного списка
    for (size_t i = 0; i < size_vector; i++)
        std::cout << students[i].first << " " << students[i].second << "\n";
    return 0;
}