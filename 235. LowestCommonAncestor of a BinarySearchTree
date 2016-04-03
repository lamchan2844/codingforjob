/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool DFF(TreeNode* root, TreeNode* node,stack  <TreeNode *> * mystack)
    {
    	if(root==NULL)
    	{
    		return false;
    	}
    	if(root==node)
    	{
    		(*mystack).push(root);
    		return true;
    	}
    	if(DFF(root->left,node,mystack)||DFF(root->right,node,mystack))
    	{
    		(*mystack).push(root);
    		return true;
    	}
    	return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* returnNode;
        stack<TreeNode *> stack_p;
		DFF(root, p,&stack_p);
		stack<TreeNode *> stack_q;
		DFF(root,q,&stack_q);
		while(stack_p.top()==stack_q.top())
		{
			returnNode=stack_p.top();
			stack_p.pop();
			stack_q.pop();
			if(stack_p.empty()||stack_q.empty())
				return returnNode;
		}
		return returnNode;
    }
};
