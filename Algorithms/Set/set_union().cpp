
#include <iostream>
#include <set>
#include <algorithm>

int main() {
    std::set<int> arr1 = { 0, 1, 10, 5, 3, 4};
    std::set<int> arr2 = { 2, 6, 8, 7, 9 };
    arr2.insert(11);
    std::set<int> result;

    /*
    // ОБЪЕДИНЕНИЕ МНОЖЕСТВ ЧЕРЕЗ insert()
    result.insert(arr1.begin(), arr1.end());
    result.insert(arr2.begin(), arr2.end());
    */
    
    // ОБЪЕДИНЕНИЕ МНОЖЕСТВ ЧЕРЕЗ set_union()
    std::set_union(arr1.begin(), arr1.end(),
                   arr2.begin(), arr2.end(),
                   std::inserter(result, result.begin()));
    
    
    for (int i : result) std::cout << i << " ";

    return 0;
}