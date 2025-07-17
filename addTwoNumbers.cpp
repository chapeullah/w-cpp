#include <iostream>
#include <string>

struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution 
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        std::string str1, str2;
        inorder(l1, str1);
        inorder(l2, str2);
        std::string sum = plus(str1, str2);
        for (char ch : sum)
        {
            std::cout << ch << " ";
        }
        ListNode *head = new ListNode();
        int i = 0;
        order(head, sum, i);
        return head;
    }

    void inorder(ListNode *node, std::string &str)
    {
        if (node == nullptr)
        {
            return;
        }
        inorder(node->next, str);
        str += std::to_string(node->val);
    }

    void order(ListNode *node, std::string &str, int &i)
    {
        node->val = str[i] - '0';
        ++i;
        if (i >= str.size())
        {
            return;
        }
        node->next = new ListNode();
        order(node->next, str, i);
    }

    std::string plus(std::string &str1, std::string str2)
    {  
        std::string result;
        int i = str1.size() - 1, j = str2.size() - 1, temp1, temp2 = 0;
        while (i >= 0 || j >= 0 || temp2)
        {
            int 
                digit1 = i >= 0 ? str1[i] - '0' : 0,
                digit2 = j >= 0 ? str2[j] - '0' : 0,
                sum = digit1 + digit2 + temp2;
            result += (sum % 10) + '0';
            temp2 = sum / 10;
            --i, --j;
        }
        return result;
    }
};

int main() 
{
    
    return 0;
}