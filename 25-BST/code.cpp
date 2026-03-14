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



///Leetcode:- Minimum Distance between BST Nodes
// class Solution {
// public:
    
//     TreeNode* prev = NULL;
//     int minDiffInBST(TreeNode* root) {
//         if(root == NULL) {
//             return INT_MAX;
//         }
         
//         int ans = INT_MAX;
//         if(root->left != NULL) {
//             int leftMin = minDiffInBST(root->left);
//             ans = min(ans, leftMin);
//         }

//         if(prev != NULL) {
//             ans = min(ans, root->val - prev->val);
//         }
//         prev = root;

//         if(root->right != NULL) {
//             int rightMin = minDiffInBST(root->right);
//             ans = min(ans, rightMin);
//         }
//        return ans;
//     }
// };



///Leetcode:-230 Kth Smallest Node in a BST
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

//     void inorderTraversal(TreeNode* node, vector<int> & ans) {
//     if (node == NULL) return;
//     inorderTraversal(node->left, ans); 
//     ans.push_back(node->val);  
//     inorderTraversal(node->right, ans);
//     }
    
    
//     int kthSmallest(TreeNode* root, int k) {
//         vector<int>ans;
//         inorderTraversal(root, ans);
//         for(int i = 0; i < ans.size(); i++) {
//             if(k == 1) {
//                 return ans[i];
//             }
//             k--;
//         }
//         return 0;
//     }
// };


///Leetcode:- 235 Lowest Common Ancestor of a BST
// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(root == NULL) return NULL;

//         if(p->val < root->val && q->val < root->val) {
//             return lowestCommonAncestor(root->left, p, q);
//         } 
//         else if (p->val > root->val && q->val > root->val) {
//             return lowestCommonAncestor(root->right, p, q);
//         } 
//         else {
//             return root;
//         }
      
//     }
// };



///Leetcode:- 1008 Construct a BST from preorder traversal
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
    
//     TreeNode* helper(vector<int>& preorder, int & i, int bound) {
//         if(i >= preorder.size() || preorder[i] > bound) {
//              return NULL;
//         }
//         TreeNode* root = new TreeNode(preorder[i++]);
//         root->left = helper(preorder, i, root->val);
//         root->right = helper(preorder, i, bound);
//         return root;
//     }

//     TreeNode* bstFromPreorder(vector<int>& preorder) {
//         int i = 0;
//         return helper(preorder, i, INT_MAX);
//     }
// };



///Gfg:- Merge two BSTs
class Solution {
  public:
    
    void inorder(Node* root, vector<int>& arr) {
        if(root == NULL) return;
        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right, arr);
    }
    
    
    vector<int> merge(Node *root1, Node *root2) {
      vector<int> arr1, arr2;
      inorder(root1, arr1);
      inorder(root2, arr2);
      vector<int> temp;
      
      int i = 0, j = 0;
      while(i < arr1.size() && j < arr2.size()) {
      if(arr1[i] < arr2[j]) {
          temp.push_back(arr1[i++]);
      } else {
          temp.push_back(arr2[j++]);
      }
    }
    
    while(i < arr1.size()) {
        temp.push_back(arr1[i++]);
    }
    
    while(j < arr2.size()) {
        temp.push_back(arr2[j++]);
    }
    
    return temp;
    }
};



///Leetcode:- 99 Recover BST
// class Solution {
// public:
//     void recoverTree(TreeNode* root) {
//       TreeNode* prev = NULL;
//       TreeNode* first = NULL;
//       TreeNode* second = NULL;

//       while(root != NULL) {
//         if(root->left == NULL) {
//           if(prev != NULL && prev->val > root->val) {
//             if(first == NULL) {
//                 first = prev;
//             }
//             second = root;
//           }
//           prev = root;
//           root = root->right;
//         } else {
//             TreeNode* IP = root->left;
//             while(IP->right != NULL && IP->right != root) {
//                 IP = IP->right;
//             }
//             if(IP->right == NULL) {
//                IP->right = root;
//                root = root->left;
//             } else {
//                if(prev != NULL && prev->val > root->val) {
//                     if(first == NULL) {
//                         first = prev;
//                     }
//                     second = root;
//                }
//                prev = root;
//                IP->right = NULL;
//                root = root->right;
//             }
//         }
//       }

//       if(first != NULL && second != NULL) {
//         int temp =first->val;
//         first->val = second->val;
//         second->val = temp;
//       }
//     }
// };



///Gfg:- Largest BST In a Binary Tree
// class Solution {
//   public:
  
//     class Info {
//         public:
//          int min, max, size;
         
//          Info(int minimum, int maximum, int sz) {
//              min = minimum;
//              max = maximum;
//              size = sz;
//          }
//     };
    
//     Info helper(Node *root) {
//         if(root == NULL) {
//             return Info(INT_MAX, INT_MIN, 0);
//         }
        
//         Info left = helper(root->left);
//         Info right = helper(root->right);
        
//         if(root->data > left.max && root->data < right.min) {
//             int currMin = min(root->data, left.min);
//             int currMax = max(root->data, right.max);
//             int currSize = left.size + right.size + 1;
//             return Info(currMin, currMax, currSize);
//         }
        
//         return Info(INT_MIN, INT_MAX, max(left.size, right.size));
//     }
    
//     int largestBst(Node *root) {
//         Info info = helper(root);
//         return info.size;
//     }
// };