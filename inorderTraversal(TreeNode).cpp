#include <iostream>
#include <vector>

struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) 
        : val(x), left(left), right(right) 
    {}
};

class Solution {
public:
    std::vector<int> inorderTraversal(TreeNode* root) 
    {
        std::vector<int> result;
        inorder(root, result);
        return result;
    }

    void inorder(TreeNode *node, std::vector<int> &result)
    {
        if (node == nullptr)
        {
            return;
        }
        inorder(node->left, result);
        result.push_back(node->val);
        inorder(node->right, result);
        return;
    }
};

int main() 
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    Solution s;
    return 0;
}