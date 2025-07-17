#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode node;
        ListNode *head = &node;
        while (list1 && list2)
        {
            if (list1->val > list2->val)
            {
                head->next = list2;
                list2 = list2->next;
            }
            else 
            {
                head->next = list1;
                list1 = list1->next;
            }
            head = head->next;
        }
        head->next = list1 ? list1 : list2;
        return node.next;
    }
};

int main() 
{
    Solution s;
    return 0;
}