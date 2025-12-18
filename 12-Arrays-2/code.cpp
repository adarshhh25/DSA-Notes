//Print Subarrays
// #include <iostream>
// using namespace std;

// int main () {
//     int arr[] = {1,2,3,4,5};
//     int i = 0;
//     while (i < 5) {
//         for (int j = i; j < 5; j++){
//             for (int k = i; k <= j; k++) {
//                 cout << arr[k] << ",";
//             }
//             cout << "\n";
//         }
//         i++;
//     }
//     return 0;
// }



//Maximum Subarray Sum(Brute Force)

// #include <iostream>
// #include <climits>
// using namespace std;

// int main () {
//     int arr[] = {2,-3,6,-5,4,2};
//     int maxSum = INT_MIN;
//     int i = 0;
//     while (i < 6) {
//         for (int j = i; j < 6; j++){
//             int currValue = 0;
//             for (int k = i; k <= j; k++) {
//             currValue += arr[k];
//         }  
//            cout << currValue << ",";
//            maxSum = max(maxSum, currValue);
//     }
//     cout << endl;
//     i++;
// }
//     cout << "The Maximum Subarray sum is : "<<maxSum;
//     return 0;
// }



// Slightly Optimized

// #include <iostream>
// #include <climits>
// using namespace std;

// int main () {
//     int arr[] = {2,-3,6,-5,4,2};
//     int maxSum = INT_MIN;
//     int i = 0;
//     while (i < 6) {
//         int currSum = arr[i];
//         for (int j = i; j < 6; j++){
//            if(i == j) {
//               maxSum = max(maxSum, currSum);
//            }
//            else {
//               currSum += arr[j];
//               maxSum = max(maxSum, currSum);
//            }
//     }
//     i++;
// }
//     cout << "The Maximum Subarray sum is : "<<maxSum;
//     return 0;
// }



// Kadanes Algorithm

// #include <iostream>
// #include <climits>
// using namespace std;


// int main () {
//     int arr[] = {-2, -3, -6, -5, -4, -1};
//     int n = sizeof(arr) / sizeof(int);
//     int currSum = 0;
//     int maxSum = INT_MIN;
//     for (int i = 0; i < n; i++) {
//         currSum += arr[i];
//         maxSum = max(maxSum, currSum);
//         if(currSum < 0) {
//             currSum = 0;
//         }
//     }
//     cout << maxSum;
//     return 0;
// }



//Buy & Sell Stocks
// My-Approch O(n^2)

// #include <iostream>
// #include <climits>
// using namespace std;

// int main () {
//     int arr[] = {7, 1, 5, 3, 6, 4};
//     int n = sizeof(arr) / sizeof(int);
//     int maxProfit = 0;
//     for(int i = 0; i < n; i++) {
//         for(int j = i + 1; j < n; j++) {
//            int  currProfit = arr[j] - arr[i];
//            maxProfit = max(maxProfit, currProfit);
//         }
//     }
//     cout << maxProfit;
//     return 0;
// }



//Buy & Sell Stocks
// O(n)

// #include <iostream>
// #include <climits>
// using namespace std;

// int main () {
//     int prices[] = {7, 1, 5, 3, 6, 4};
//     int n = sizeof(prices) / sizeof(int);
//     int bestbuy[n];
//     for(int i = 0; i < n; i++) {
//        if(i == 0) {
//         bestbuy[i] = INT_MAX;
//        } else {
//         bestbuy[i]= min(bestbuy[i-1], prices[i-1]);
//        }
//     }
//     int maxProfit = 0;
//     for(int i = 0; i < n; i++) {
//         int currProfit = prices[i] - bestbuy[i];
//         maxProfit = max(maxProfit, currProfit);
//     }
//     cout<< maxProfit;
//     return 0;
// }



//Traping Rain Water

// #include <iostream>
// #include <climits>
// using namespace std;

// void trap(int *heights, int n) {
//     int leftMax[20000], rightMax[20000];
//     leftMax[0] = heights[0];
//     rightMax[n-1] = heights[n-1];

//     for(int i = 1; i < n; i++) {
//         leftMax[i] = max(leftMax[i-1], heights[i-1]);
//         // cout << leftMax[i] << ", ";
//     }

//     for(int i = n-2; i >= 0; i--) {
//         rightMax[i] = max(rightMax[i+1], heights[i+1]);
//         // cout << rightMax[i] << ", ";
//     }

//     int trappedWater = 0;
//     for(int i = 0; i < n; i++) {
//         int currWater = min(leftMax[i], rightMax[i]) - heights[i];
//         if(currWater > 0) {
//             trappedWater += currWater;
//         }
//     }
//     cout << "Water trapped is: " << trappedWater;
// }

// int main() {
//     int heights[] = {4, 2, 0, 6, 3, 2, 5};
//     int n = sizeof(heights) / sizeof(int);
//     trap(heights, n);
//     return 0;
// }



///Trapping Rainwater(42) with SC => O(n)

// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int n = height.size();
//         vector<int> left_max(n, 0);
//         vector<int> right_max(n, 0);

//         left_max[0] = height[0];
//         right_max[n-1] = height[n-1];

//         for(int i = 1; i < n; i++) {
//            left_max[i] = max(left_max[i-1], height[i]);
//         } 

//         for(int i = n-2; i >= 0; i--) {
//             right_max[i] = max(right_max[i+1], height[i]);
//         }
        
//         int ans = 0;
//         for(int i = 0; i < n; i++) {
//             ans += min(left_max[i], right_max[i]) - height[i];
//         }
//         return ans;
//     }
// };



///Same Question with SC => O(1) [Two Pointer Approch]
// class Solution {
// public:
//     int trap(vector<int>& height) {
//        int n = height.size();
//        int ans = 0;
//        int l = 0, r = n-1;
//        int lmax = 0, rmax = 0;

//        while (l < r) {
//          lmax = max(lmax, height[l]);
//          rmax = max(rmax, height[r]);

//          if(lmax < rmax) {
//             ans += lmax - height[l];
//             l++;
//          } else {
//             ans += rmax - height[r];
//             r--;
//          }
//        }
//        return ans;
//     }
// };