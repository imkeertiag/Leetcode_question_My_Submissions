/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans ;
        if(root == NULL)return ans ;
        // using level order traversal 
        queue<TreeNode*> q ;
        q.push(root) ;
        while(!q.empty()){
            int size = q.size() ;
            int maxim = INT_MIN ;
    
            for(int i=0; i<size; ++i){
                TreeNode* node = q.front() ;
                q.pop() ;
                maxim = max(maxim , node->val) ;
                if(node->left != NULL)q.push(node->left) ;
                if(node->right != NULL)q.push(node->right) ;
            }
            ans.push_back(maxim) ;
        }
    return ans ;
    }
};