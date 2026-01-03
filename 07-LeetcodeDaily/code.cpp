///Plus One (Leetcode -66)
// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         int n = digits.size();

//         for (int i = n - 1; i >= 0; i--) {
//             if (digits[i] < 9) {
//                 digits[i]++;
//                 return digits;
//             }
//             digits[i] = 0;
//         }

//         // If all digits were 9
//         digits.insert(digits.begin(), 1);
//         return digits;
//     }
// };


///N-Repeated Element in Size 2N Array (961)
// class Solution {
// public:
//     int repeatedNTimes(vector<int>& nums) {       
//          for(int i = 0; i < nums.size(); i++) {
//             if(i+1 < nums.size() && nums[i] == nums[i+1])
//                 return nums[i];
            
//             if(i+2 < nums.size() && nums[i] == nums[i+2])
//                 return nums[i];
            
//          }   
//          return nums[nums.size()-1];
//     }
// };