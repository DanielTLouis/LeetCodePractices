/*
102. Binary Tree Level Order Traversal
Solved
Medium
Topics
Companies
Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).



Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]
Example 2:

Input: root = [1]
Output: [[1]]
Example 3:

Input: root = []
Output: []


Constraints:

The number of nodes in the tree is in the range [0, 2000].
-1000 <= Node.val <= 1000
*/
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
    int levelsOfTree(TreeNode* root) {
        if (root == NULL) return 0;
        return 1 + max(levelsOfTree(root->left), levelsOfTree(root->right));
    }
    void NthLevel_display(TreeNode* root, int n, int level, vector<int>& v) {
        if (root == NULL) return;
        if (n == level) {
            v.push_back(root->val);
            return;
        }
        NthLevel_display(root->left, n + 1, level, v);
        NthLevel_display(root->right, n + 1, level, v);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int level = levelsOfTree(root);
        vector<vector<int>>ans;
        for (int i = 1; i <= level; i++) {
            vector<int>v;
            NthLevel_display(root, 1, i, v);
            ans.push_back(v);
        }
        return ans;
    }
    /*
        vector<vector<int>> levelOrder(TreeNode* root) {
            vector<int> solution;
            vector<vector<int>> ans;
            if(root == nullptr){
                return ans;
            }
            solution = levelOrderTraversal(root);
            vector<int> vec;
            vec.push_back(solution[0]);
            ans.push_back(vec);
            for(int i = 1; i < solution.size(); +2){
                vector<int> tempVec;
                tempVec.push_back(solution[i]);
                tempVec.push_back(solution[i+1]);
                ans.push_back(tempVec);
            }
            return ans;
        }
        vector<int> levelOrderTraversal(TreeNode* node){
            vector<int> newVec;
            newVec.push_back(node->val);
            cout << newVec[0] << endl;
            if(node->left != nullptr){
                //return levelOrderTraversal(node->left);
                vector<int> tempVec;
                tempVec = levelOrderTraversal(node->left);
                newVec.insert(newVec.end(), tempVec.begin(), tempVec.end());
            }
            if(node->right != nullptr){
                //return levelOrderTraversal(node->right);
                vector<int> tempVec2;
                tempVec2 = levelOrderTraversal(node->right);
                newVec.insert(newVec.end(), tempVec2.begin(), tempVec2.end());
            }
            return newVec;
        }
    */
};