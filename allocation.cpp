#include <vector>
#include <iostream>

int main() {
    try {
        long long size;
        std::cin >> size;
        std::vector<int> numbers;
        numbers.resize(size);
        std::cout << "Created vector with size " << numbers.size() << std::endl;
        std::cout << "Finish?" << std::endl;
        std::string command;
        std::cin >> command;
    } catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
}

