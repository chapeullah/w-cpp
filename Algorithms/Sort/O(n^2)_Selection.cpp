#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr = { 1, 5, 9, 15, 14, 3, 7, 8, 7, 10 };
    size_t maxIndex, n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        maxIndex = 0;
        for (int j = 0; j < n - i; j++) {
            if (arr[maxIndex] < arr[j]) maxIndex = j;
        }
        std::swap(arr[maxIndex], arr[n - i - 1]);
    }
    for (int x : arr) std::cout << x << " ";
    return 0;
}