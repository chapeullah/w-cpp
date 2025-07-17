#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <set>

class Node 
{
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(nullptr), right(nullptr), next(nullptr) {}
    Node(int _val) : val(_val), left(nullptr), right(nullptr), next(nullptr) {}
    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};


class Solution
{
public:
    Node* connect(Node* root) 
    {
        recursiveFunc(root);
        return root;
    }

    void recursiveFunc(Node* root)
    {
        if (root == nullptr) 
        {
            return;
        }
        if (root->right != nullptr && root->left != nullptr)
        {
            root->left->next = root->right;
        }
        recursiveFunc(root->right);
        recursiveFunc(root->left);
    }
};

int main() 
{
    Solution s;
    Node* node = new Node(1);
    node->left = new Node(2);
    node->right = new Node(3);
    node->left->left = new Node(4);
    node->left->right = new Node(5);
    node->right->right = new Node(7);
/*
       1
     /   \
    2     3
   / \     \
  4   5     7
*/
    s.connect(node);
    return 0;
}