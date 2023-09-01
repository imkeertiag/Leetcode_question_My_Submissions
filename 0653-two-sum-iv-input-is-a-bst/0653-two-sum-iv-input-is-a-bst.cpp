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
public:void inorder(TreeNode* root , vector<int>& in ){
    if(root == NULL)return ;
    inorder(root->left , in) ;
    in.push_back(root->val) ;
    inorder(root->right , in) ;
}
    bool findTarget(TreeNode* root, int k) {
        vector<int> arr ;
        inorder(root , arr) ;
        int i=0, j=arr.size()-1 ;
        while( i<j){
            if(arr[i]+arr[j] == k)return true ;
            (arr[i] + arr[j]) < k ? i++ : j--;
            // else if(arr[i]+arr[j] < k)i++ ;
            // else j-- ;
        } 
        return false ;
    }
};