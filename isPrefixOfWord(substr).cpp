#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int x, y;
        x = y = 0;
        vector<string> massive = {};
        for (int i=0;i<=sentence.size();i++){
            if (i==sentence.size() || sentence[i]==' '){
                massive.push_back(sentence.substr(x, i-x));
                x = i + 1;
            }
        }
        for (int j=0;j<massive.size();j++){
            if (massive[j].substr(0,searchWord.size())==searchWord){
                return j+1;
            }
        }
        return -1;
    }
};

int main() {
    Solution solution;
    cout << solution.isPrefixOfWord("Hello, how are  ","He");
    
    return 0;
}