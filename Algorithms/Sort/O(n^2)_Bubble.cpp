#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr = { 5, 4, 3, 8, 1, 2, 6, 7 };
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int x = arr[j], y = arr[j + 1];
                arr[j] = y, arr[j + 1] = x; 
                /* ЛУЧШЕ ИСПОЛЬЗОВАТЬ : 
                std::swap(arr[j], arr[j + 1]);*/
            }
        }
    }
    std::cout << "Arr = ";
    for (int i : arr) std::cout << i << " ";
    return 0;
}