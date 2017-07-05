/*
* @Author: chenlin
* @Date:   2017-02-17 20:46:52
* @Last Modified by:   Administrator
* @Last Modified time: 2017-02-17 20:49:00
* @score: 28.28%
* @ps: thank GZshi's solution https://discuss.leetcode.com/topic/2513/a-recursive-solution
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL)
            return l2;
        if (l2 == NULL)
            return l1;
        if (l1->val<= l2->val){
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }else{
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
};