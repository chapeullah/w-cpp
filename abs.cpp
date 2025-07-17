#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    std::vector<int> arr;
    int x = 0, target = 0;
    std::cin >> x;
    while (std::cin >> x) arr.push_back(x);
    target = arr.back();
    arr.pop_back();
    std::sort(arr.begin(), arr.end());
    int closest = arr[0];
    for (int i : arr) {
        if (std::abs(i - target) < std::abs(closest - target)) closest = i;
    }
    std::cout << closest;
    return 0;
}