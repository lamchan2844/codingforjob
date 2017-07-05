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
    bool FlagSame=true;
    bool isSameTree(TreeNode* p, TreeNode* q) {
        	if(p==NULL&&q==NULL)
		FlagSame=true;
	else if((p==NULL&&q!=NULL)||(p!=NULL&&q==NULL))
	{
		FlagSame=false;
	}
	else
	{
		if(p->val==q->val)
		{
			if((p->left==NULL&&q->left!=NULL)||(p->left!=NULL&&q->left==NULL)||(p->right==NULL&&q->right!=NULL)||(p->right!=NULL&&q->right==NULL))
				FlagSame=false;
			if (p->left!=NULL)
			{	
					isSameTree(p->left,q->left);
			}
			if (p->right!=NULL)
			{
				isSameTree(p->right,q->right);
			}
		}
		else
		{
			FlagSame=false;
		}
	}
	return FlagSame;
    }
};
