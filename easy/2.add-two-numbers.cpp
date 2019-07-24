/**
 * @link https://leetcode.com/problems/add-two-numbers/description/
 * 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int carry = 0;
        ListNode head(0);
        ListNode *tail = &head;

        while (l1 != nullptr || l2 != nullptr)
        {
            int l1Val = 0, l2 if (l1 != nullptr)
            {
                l1Val = l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr)
            {
                l2Val = l2->val;
                l2 = l2->next;
            }
            auto num = l1Val + l2Val + carry;
            carry = num / 10;
            tail->next = new ListNode(num % 10);
            tail = tail->next;
        }
        if (carry > 0)
        {
            auto node = new ListNode(carry);
            tail->next = node;
        }
        return head.next;
    }
};