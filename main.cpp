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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> output;
        if(root == NULL) return output;
        stack<TreeNode*> ptrs;
        ptrs.push(root);
        TreeNode *tmp = root;
        while(ptrs.size() != 0){
            if(tmp != NULL){
                output.push_back(tmp->val);
                ptrs.push(tmp);
                tmp = tmp->left;
            }else{
                tmp = ptrs.top();
                tmp = tmp->right;
                ptrs.pop(); 
            }
        }//end while
        return output;
    }//end main func
};
