#include <iostream>
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
    bool isSymmetric(TreeNode *root) 
    {
        std::vector<std::optional<int>> leftArray, rightArray;
        recursiveL(root->left, leftArray);
        recursiveR(root->right, rightArray);
        if (leftArray == rightArray)
        {
            return true;
        }
        return false;
    }

    void recursiveL(TreeNode *node, std::vector<std::optional<int>> &vec)
    {
        if (node == nullptr)
        {
            vec.push_back(std::nullopt);
            return;
        }
        vec.push_back(node->val);
        recursiveL(node->left, vec);
        recursiveL(node->right, vec);
    }
    void recursiveR(TreeNode *node, std::vector<std::optional<int>> &vec)
    {
        if (node == nullptr)
        {
            vec.push_back(std::nullopt);
            return;
        }
        vec.push_back(node->val);
        recursiveR(node->right, vec);
        recursiveR(node->left, vec);
    }
};

int main() 
{
    
    return 0;
}
