#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr = { -1, 5, 9, 15, -14, 3, 7, 8, 7, 10 };
    size_t n = arr.size();
    for (size_t i = 1; i < n; i++) {
        for (size_t j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
            std::swap(arr[j - 1], arr[j]);
        }
    }
    for (int x : arr) std::cout << x << " ";
    return 0;
}