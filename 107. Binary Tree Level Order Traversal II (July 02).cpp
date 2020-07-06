//https://leetcode.com/problems/binary-tree-level-order-traversal-ii/
//re
class Solution {
public:
	vector<vector> levelOrderBottom(TreeNode root) {
	vector<vector> ans;
	if(root==NULL)
		return ans;
	queue<TreeNode *> q;
	q.push(root);
	while(!q.empty())
	{
		int n=q.size();
		vector x;
		while(n--)
		{
			TreeNode *curr=q.front();
			q.pop();
			x.push_back(curr->val);
			if(curr->left!=NULL)
				q.push(curr->left);
			if(curr->right!=NULL)
				q.push(curr->right);
		}
		ans.push_back(x);
		x.clear();
	}
	reverse(ans.begin(),ans.end());
	return ans;
	}
};