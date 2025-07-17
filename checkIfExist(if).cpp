#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for (int i=0;i<arr.size();i++){
            for (int j=0;j<arr.size();j++){
                if (i != j && 0 <= i && j < arr.size() && arr[i] == 2 * arr[j]) return true;
            }
        }
        return false;
    }
};


int main() {
    Solution solution;
    vector<int> arr = {3,1,7,11};
    cout << solution.checkIfExist(arr);
    return 0;
}