
#include <iostream>
#include <set>
#include <algorithm>

int main() {
    std::set<int> arr1 = { 0, 1, 10, 5, 3, 4};
    std::set<int> arr2 = { 2, 6, 8, 7, 9, 3, 10 };
    arr2.insert(11);
    std::set<int> result;
    
    /*
    // ОПРЕДЕЛЕНИЯ ПЕРЕСЕЧЕНИЯ МНОЖЕСТВ ВРУЧНУЮ
    for (int i : arr1) {
        if (arr2.count(i)) result.insert(i);
    }
    */

    
    // ОПРЕДЕЛЕНИЕ ПЕРЕСЕЧЕНИЯ МНОЖЕСТВ ЧЕРЕЗ set_intersection()
    std::set_intersection(arr1.begin(), arr1.end(),
                          arr2.begin(), arr2.end(),
                          std::inserter(result, result.begin()));
    
    for (int i : result) std::cout << i << " ";

    return 0;
}