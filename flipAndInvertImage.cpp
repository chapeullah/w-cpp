#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (int i = 0; i < image.size(); i++){
            reverse(image[i].begin(), image[i].end());
            for (int j = 0; j < image[i].size(); j++){
                if (image[i][j] == 1){
                    image[i][j] = 0;
                }
                else{
                    image[i][j] = 1;
                }
            }
        }
        return image;
    }
};



int main() {

    vector<vector<int>> image = {
        {1, 0, 0},
        {0, 1, 0},
        {1, 1, 1}
    };

    Solution solution;
    solution.flipAndInvertImage(image);

    for (int i = 0; i < image.size(); i++){
            for (int j = 0; j < image[i].size(); j++){
                cout << image[i][j] << " ";
            }
            cout << "\n";
        }
    return 0;
}