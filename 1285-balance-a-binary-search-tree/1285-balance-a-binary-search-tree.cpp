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
void inorder(TreeNode* root , vector<TreeNode*> &inval){
    if(root == NULL)return ;

    inorder(root->left , inval) ;
    inval.push_back(root) ; // vector <TreeNode*> --> root
    inorder(root->right , inval) ;
}
TreeNode* InorderToBST(int s, int e, vector<TreeNode*> inval) {
    if(s>e)return NULL ;
    int mid = s+(e-s)/2 ; 
    TreeNode* root = inval[mid] ; // vector <TreeNode*> --> 
    root->left = InorderToBST(s,mid-1,inval) ;
    root->right = InorderToBST(mid+1,e,inval) ;
    return root ;
}
    TreeNode* balanceBST(TreeNode* root) {
      vector<TreeNode*> inval ;
      inorder(root , inval) ;
     return InorderToBST(0,inval.size()-1,inval) ;
    }
};