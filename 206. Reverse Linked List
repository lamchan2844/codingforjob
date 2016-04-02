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
    ListNode* tempnode;
    bool flag=true;
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return head;
        if(head->next!=NULL)
    		{
    				tempnode=reverseList(head->next);
    		}
    		if(flag){
    			flag=false;
    			return head;
    			}
			head->next->next=head;
			head->next=NULL;
    		return tempnode;
    }
};
