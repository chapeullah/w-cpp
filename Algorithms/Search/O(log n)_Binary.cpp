#include <iostream>
#include <vector>

int binarySearch(std::vector<int>& array, int target) {
    int left = 0, right = array.size() - 1, foundIndex = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (array[mid] == target) return mid;
        else if (array[mid] > target) right = mid - 1;
        else left = mid + 1;
    }
    return foundIndex;
}

int main() {
    std::vector<int> array = {
        1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
        31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
        41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
        51, 52, 53, 54, 55, 56, 57, 58, 59, 50,
        61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
        71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
        81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
        91, 92, 93, 94, 95, 96, 97, 98, 99, 100
    };
    std::cout << "Index: " << binarySearch(array, 68) << "\n";
    return 0;
}