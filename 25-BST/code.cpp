#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root, int val) {
    if(root == NULL) {
        return new Node(val);
    }

    if(val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }

    return root;
}

Node* buildBST(vector<int> arr) {
    Node* root = NULL;
    for(int val : arr) {
        root = insert(root, val);
    }
    return root;
}

void inorder(Node* root) {
    if(root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main () {
    vector<int> arr = {3, 2, 1, 5, 6, 4};

    Node* root = buildBST(arr);

    cout << "Inorder Traversal: ";
    inorder(root);

    return 0;
}



//Leetcode:- 700 Search in BST
// class Solution {
// public:
//     TreeNode* searchBST(TreeNode* root, int val) {
//         if(root == NULL) return NULL;

//         if(root->val == val) return root;

//         if(val < root->val) {
//             return searchBST(root->left, val);
//         }
//         return searchBST(root->right, val);
//     }
// };




///Leetcode:- 701 Insert into BST
// class Solution {
// public:
//     TreeNode* insertIntoBST(TreeNode* root, int val) {
//         if(root == NULL) {
//             return new TreeNode(val);
//         }
//         if(val < root->val) {
//             root->left = insertIntoBST(root->left, val);
//         } else {
//             root->right = insertIntoBST(root->right, val);
//         }
//         return root;
//     }
// };



///Leetcode :-450 Delete a Node in BST
// class Solution {
// public:

//     TreeNode* getInorderSuccessor(TreeNode* root) {
//         while(root != NULL && root->left != NULL) {
//             root = root->left;
//         }
//         return root;
//     }

//     TreeNode* deleteNode(TreeNode* root, int key) {
//         if(root == NULL) {
//             return NULL;
//         }

//         if(key < root->val) {
//             root->left = deleteNode(root->left, key);
//         } else if(key > root->val) {
//             root->right = deleteNode(root->right, key);
//         } else {
//             if(root->left == NULL) {
//                 TreeNode* temp = root->right;
//                 delete root;
//                 return temp;
//             } else if (root->right == NULL) {
//                 TreeNode* temp = root->left;
//                 delete root;
//                 return temp;
//             } else {
//                 TreeNode* IS = getInorderSuccessor(root->right);
//                 root->val = IS->val;
//                 root->right = deleteNode(root->right, IS->val);
//             }
//         }
//         return root;
//     }
// };



/////Leetcode:- 108 Convert a Sorted array to BST
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
// class Solution {
// public:
    
//     TreeNode* helper(vector<int>& nums, int st, int end) {
//       if(st > end) {
//         return NULL;
//       }
//       int mid = st + (end - st) / 2;
//       TreeNode* root = new TreeNode(nums[mid]);
//       root->left = helper(nums, st, mid-1);
//       root->right = helper(nums, mid+1, end);
//       return root;  
//     }

//     TreeNode* sortedArrayToBST(vector<int>& nums) {
//        return helper(nums, 0, nums.size()-1);
//     }
// };



///Leetcode:-98 Validate a BST
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
// class Solution {
// public:

//     bool helper(TreeNode* root, TreeNode* min, TreeNode* max) {
//          if(root == NULL) return true;

//          if(min != NULL && root->val <= min->val) {
//               return false;
//          }

//          if(max != NULL && root->val >= max->val) {
//             return false;
//          }

//          return helper(root->left, min, root) && helper(root->right, root, max);
//     }
   
//     bool isValidBST(TreeNode* root) {
//         return helper(root, NULL, NULL);
//     }
// };