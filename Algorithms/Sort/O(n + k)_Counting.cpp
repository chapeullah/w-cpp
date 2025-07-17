#include <iostream>
#include <vector>
#include <algorithm>

// BIG O = O(n + k)

int main()
{
    std::vector<int> arr = { -2, 4, 2, 2, 7, 3, 3, 1, 0, 5, -1};
    int max = *std::max_element(arr.begin(), arr.end());
    int min = *std::min_element(arr.begin(), arr.end());
    std::vector<size_t> count(max - min + 1, 0);
    for (int elem : arr) ++count[elem - min];

    size_t index = 0;
    for (int i = min; i <= max; ++i)
    {
        while (count[i - min]--)
        {
            arr[index++] = static_cast<int>(i);
        }
    }

    std::cout << "Arr = ";
    for (int num : arr) std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}