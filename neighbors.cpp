#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr;
    int var;
    while (std::cin >> var){
        arr.push_back(var);
    }
    var = 0;
    for (size_t i = 1; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) var++;
    }
    std::cout << var << "\n";
    return 0;
}