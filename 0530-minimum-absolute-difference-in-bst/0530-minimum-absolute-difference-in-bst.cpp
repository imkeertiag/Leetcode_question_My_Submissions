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
public:void inorder(TreeNode* root , vector<int> &inval){
    if(root == NULL)return;
    inorder(root->left , inval) ;
    inval.push_back(root->val) ;
    inorder(root->right , inval) ;

}
    int getMinimumDifference(TreeNode* root) {
        vector<int> inval ;
        inorder(root , inval) ;
        int ans = abs(inval[1]-inval[0]) ;
        for(int i=1; i<inval.size(); i++){
         ans = min(ans , abs(inval[i]-inval[i-1])) ;
        }
        return ans ;
    }
};