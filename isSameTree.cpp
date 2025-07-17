#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <vector>
#include <optional>

struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution 
{
public:
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        std::vector<std::optional<int>> tree1, tree2;
        recursiveFunc(p, tree1);
        recursiveFunc(q, tree2);
        if (tree1 == tree2)
        {
            return true;
        }
        return false;
    }

    void recursiveFunc(TreeNode *node, std::vector<std::optional<int>> &vec)
    {
        if (node == nullptr)
        {
            vec.emplace_back(std::nullopt);
            return;
        }
        vec.emplace_back(node->val);
        recursiveFunc(node->left, vec);
        recursiveFunc(node->right, vec);
    }
};

int main() 
{
    
    return 0;
}