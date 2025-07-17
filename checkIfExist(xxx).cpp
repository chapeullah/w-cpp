#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr){
        int n = arr.size();
        map<int, int> m;
        for (int i=0;i<n;i++){
            if (m.find(2*arr[i]) != m.end() || (arr[i] % 2 == 0 && m.find(arr[i] / 2) != m.end())){
                return true;
            }
            m[arr[i]]=i;
        }
        return false;
    }
};

int main(){
    Solution solution;
    vector<int> arr = {3,1,7,11};
    cout << solution.checkIfExist(arr);
    return 0;
}