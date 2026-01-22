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