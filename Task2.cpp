#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");
    //Ðàçìåð ñïèñêà
    size_t const size_vector = 6;
    //Âåêòîð: ïàðàìåòð 1 - êëàññ; ïàðàìåòð 2 - ôàìèëèÿ
    std::vector <std::pair <size_t, std::string> > students(size_vector);
    //Ââîä çíà÷åíèé
    for (size_t i = 0; i < size_vector; i++)
        std::cin >> students[i].first >> students[i].second;
    //Ñîðòèðîâêà ïî âîçðàñòàíèþ êëàññà
    std::sort(students.begin(), students.end(), [](std::pair<size_t, std::string> f, std::pair<size_t, std::string> s)
        {
            return f.first < s.first;
        });
    std::cout << "\n";
    //Âûâîä îòñîðòèðîâàííîãî ñïèñêà
    for (size_t i = 0; i < size_vector; i++)
        std::cout << students[i].first << " " << students[i].second << "\n";
    return 0;
}
