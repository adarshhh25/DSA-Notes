// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;

// class Node {
//     public:
//            int data;
//            Node* left;
//            Node* right;

//            Node(int val) {
//             data = val;
//             left = right = NULL;
//            }
// };

// static int idx = -1;
// Node* buildTree(vector<int> preorder) {
//      idx++;
//      if(preorder[idx] == -1) {
//         return NULL;
//      }

//     Node* root = new Node(preorder[idx]);
//     root->left = buildTree(preorder);
//     root->right = buildTree(preorder);
//     return root;
// }

// void preOrder(Node* root) {
//     if(root == NULL) {
//         return;
//     }
//     cout<< root->data << " ";
//     preOrder(root->left);
//     preOrder(root->right);
// }

// void inOrder(Node* root) {
//     if(root == NULL) {
//         return;
//     }
//     inOrder(root->left);
//     cout << root->data << " ";
//     inOrder(root->right);
// }

// void postOrder(Node* root){
//     if(root == NULL) {
//         return;
//     }
//     postOrder(root->left);
//     postOrder(root->right);
//     cout << root->data << " ";
// }

// // void levelOrder(Node* root) {
// //     queue<Node*> q;
// //     q.push(root);
// //     while(q.size() > 0) {
// //         Node* curr = q.front();
// //         q.pop();

// //         cout << curr->data << " ";

// //         if(curr->left != NULL) {
// //             q.push(curr->left);
// //         }
// //         if(curr->right != NULL) {
// //             q.push(curr->right);
// //         }
// //     }
// //     cout << endl;
// // }

// void levelOrder(Node* root) {
//      queue<Node*> q;
//      q.push(root);
//      q.push(NULL);
     
//      while(q.size() > 0) {
//      Node* curr = q.front();
//      q.pop();

//      if(curr == NULL) {
//         if(!q.empty()) {
//            cout << endl;
//            q.push(NULL);
//            continue;
//         } else {
//            break;
//         }
//     }
    
//     cout << curr->data << " ";

//     if(curr->left != NULL) {
//         q.push(curr->left);
//     }

//     if(curr->right != NULL) {
//         q.push(curr->right);
//     }

//     }

//     cout << endl;
// }


//Leetcode:-104
// int height(Node* root) {
//     if(root == NULL) {
//         return 0;
//     }

//     int leftHt = height(root->left);
//     int rightHt = height(root->right);

//     return max(leftHt, rightHt) + 1;
// }

// int countNodes(Node* root) {
//     if(root == NULL) {
//         return 0;
//     }

//     int leftCount = countNodes(root->left);
//     int rightCount = countNodes(root->right);

//     return leftCount + rightCount + 1;
// }

// int sumOfNodes(Node* root) {
//     if(root == NULL) {
//         return 0;
//     }

//     int leftSum = sumOfNodes(root->left);
//     int rightSum = sumOfNodes(root->right);

//     return leftSum + rightSum + root->data;
// }

// int main () {
//     vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
//     Node* root = buildTree(preorder);
//     // cout << root->data << endl;
//     // cout << root->left->data << endl;
//     // cout << root->right->data << endl;
//     // preOrder(root);
//     // cout << endl;
//     // inOrder(root);
//     // cout<< endl;
//     // postOrder(root);
//     // cout << endl;
//     // levelOrder(root);
//     // cout << endl;
//     cout << height(root) << endl;
//     cout << countNodes(root) << endl;
//     cout << sumOfNodes(root) << endl;
//     return 0;
// }

//GFG :- The maximum depth or height of the tree is the 
// number of edges in the tree from the root to the deepest node.
// class Solution {
//   public:
//     int height(Node* root) {
//         if(root == NULL) return -1;   
//         int leftHt = height(root->left);
//         int rightHt = height(root->right);
//         return max(leftHt, rightHt) + 1;
//     }
// };


// Leetcode :- 100
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
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//          if(p == NULL || q == NULL) {
//             return p == q;
//          }

//          bool isLeftSame = isSameTree(p->left, q->left);
//          bool isRightSame = isSameTree(p->right, q->right);

//          return isLeftSame && isRightSame && p->val == q->val;
//     }
// };



///Leetcode :-572
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
//     bool isIdentical(TreeNode* p, TreeNode* q) {
//         if(p == NULL || q == NULL) {
//             return p == q;
//         }
//         return p->val == q->val && isIdentical(p->left, q->left) && isIdentical(p->right, q->right);
//     }
//     bool isSubtree(TreeNode* root, TreeNode* subRoot) {

//         if(root == NULL || subRoot == NULL) {
//             return root == subRoot;
//         }

//         if(root->val == subRoot->val && isIdentical(root, subRoot)) {
//            return true;
//         }
//         return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
//     }
// };



///Leetcode :- 543
// class Solution {
// public:
//     int ans = 0;
//     int height(TreeNode* root) {
//         if(root == NULL) {
//             return 0;
//         }

//        int leftHt =  height(root->left);
//        int rightHt = height(root->right);

//        ans = max(ans, leftHt + rightHt);
//        return max(leftHt, rightHt) + 1;
//     }
    
//     int diameterOfBinaryTree(TreeNode* root) {
//         height(root);
//         return ans;
//     }
// };



///Top View of Binary Tree
// class Solution {
// public:
//     vector<int> topView(Node *root) {
//         vector<int> ans;
//         if (root == NULL) return ans;

//         queue<pair<Node*, int>> q;   // FIX 1
//         map<int, int> m;

//         q.push({root, 0});

//         while (!q.empty()) {         // FIX 2
//             auto frontNode = q.front();
//             q.pop();

//             Node* curr = frontNode.first;
//             int currHD = frontNode.second;

//             if (m.find(currHD) == m.end()) {
//                 m[currHD] = curr->data;
//             }

//             if (curr->left)
//                 q.push({curr->left, currHD - 1});

//             if (curr->right)
//                 q.push({curr->right, currHD + 1});
//         }

//         for (auto i : m) {
//             ans.push_back(i.second);
//         }

//         return ans;                 
//     }
// };



// ///Bottom View of a binary Tree
// class Solution {
//   public:
//     vector<int> bottomView(Node *root) {
//        vector<int> ans;
//        if (!root) return ans;
       
//        queue<pair<Node*, int>>q;
//        map<int, int> mp;
       
//        q.push({root, 0});
       
//        while(!q.empty()) {
//            Node* curr = q.front().first;
//            int currHD = q.front().second;
//            q.pop();
           
//            mp[currHD] = curr->data;
           
//            if(curr->left) {
//                q.push({curr->left, currHD-1});
//            }
           
//            if(curr->right) {
//                q.push({curr->right, currHD+1});
//            }
//        }
       
//        for(auto it : mp) {
//            ans.push_back(it.second);
//        }
       
//        return ans;
//     }
// };



////Kth Level in a binary Tree
// void kthLevel(Node* root, int K) {

//     if(root == NULL) {
//         return;
//     }

//     if(K == 1) {
//         cout << root->data << " ";
//         return;
//     }

//     kthLevel(root, K-1);
//     kthLevel(root, K-1);
// }
