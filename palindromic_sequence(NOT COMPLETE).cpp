#include <iostream>
#include <vector>

bool isPalindrome(std::vector<int>& arr1) {
    std::vector<int> arr2;
    for (int i = arr1.size() - 1; i >= 0; i--) arr2.push_back(arr1[i]);
    return arr1 == arr2;
}

int main() {
    int x = 0, index = 0;
    std::vector<int> arr1, arr2, result;
    std::cin >> x;
    while (std::cin >> x) arr1.push_back(x);
    int g = arr1.size() - 1;
    for (int i = arr1.size() - 1; i >= 0; i--) {
        do {
            arr2.push_back(arr1[i]);
        } while (isPalindrome(arr2));
        break;
    }
    index = (arr1.size()) - (arr2.size()) - 1;
    for (int i = index; i >= 0; i--) result.push_back(arr1[i]);
    std::cout << result.size() << "\n";
    for (int i : result) std::cout << i << " ";
    return 0;
}