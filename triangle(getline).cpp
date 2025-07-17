#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<int> arr;
    int var = 0;
    std::string line, str;
    std::getline(std::cin, line);
    for (int i = 0; i < line.size(); i++) {
        if (line[i] == ' ') {
            arr.push_back(std::stoi(str));
            str.clear();
        } else str += line[i];
    }
    if (!str.empty()) {
        arr.push_back(std::stoi(str));
        str.clear();
    }
    for (size_t i = 1; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) var++;
    }
    std::cout << var << "\n";
    return 0;
}