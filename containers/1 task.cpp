#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <array>

template <typename Container, typename Delimiter>
void Print(const Container& container, const Delimiter& delimiter) {
    auto it = container.begin();
    if (it != container.end()) {
        std::cout << *it;
        ++it;
    }

    for (; it != container.end(); ++it) {
        std::cout << delimiter << *it;
    }

    std::cout << std::endl;
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    Print(vec, ", ");
    std::list<std::string> strList = {"Здесь", "могла", "быть", "ваша", "реклама", "!"};
    Print(strList, " ");
    std::deque<double> deq = {1.1, 2.2, 3.3, 4.4};
    Print(deq, " - ");
    std::array<char, 4> arr = {'a', 'b', 'c', 'd'};
    Print(arr, " ");

    return 0;
}
