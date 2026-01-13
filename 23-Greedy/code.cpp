///455 Assign Cookies
// class Solution {
// public:
//     int findContentChildren(vector<int>& greed, vector<int>& size) {
//         int n = greed.size();
//         int m = size.size();
//         int l = 0;
//         int r = 0;  
//         sort(greed.begin(), greed.end());
//         sort(size.begin(), size.end());
//         while(l < m && r < n) {
//             if(greed[r] <= size[l]) {
//                r++; //child satisfied
//             }
//             l++;
//         }
//         return r;
//     }
// };



///860 Lemonade Change
// class Solution {
// public:
//     bool lemonadeChange(vector<int>& bills) {
//         int five = 0;
//         int ten = 0;
        
//         for(int i = 0; i < bills.size(); i++) {
//             if(bills[i] == 5) {
//                 five++;
//             }
//             else if (bills[i] == 10) {
//                 if(five) {
//                   five--;
//                   ten++;
//                 } else {
//                     return false;
//                 }
//             }
//             else {
//                 if(five && ten) {
//                   five--;
//                   ten--;
//                 } else if (five >= 3) {
//                    five -= 3;
//                 } else {
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
// };



///Shortest Job First
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int avgWaitingTime(vector<int> &bt) {
//     sort(bt.begin(), bt.end());
//     int n = bt.size();

//     int waitingTime = 0;
//     int totalWaitingTime = 0;

//     for(int i = 1; i < n; i++) {
//         waitingTime += bt[i-1];    
//         totalWaitingTime += waitingTime;
//     }

//     return totalWaitingTime / n;
// }

// int main() {
//     vector<int> bt = {4, 3, 7, 1, 2};
//     cout << avgWaitingTime(bt);
//     return 0;
// }


// ///Jump Game (55)
// class Solution {
// public:
//     bool canJump(vector<int>& nums) {
//         int n = nums.size() - 1;
//         int maxIndex = 0;
//         for(int i = 0; i <= n; i++) {
//             if(i > maxIndex) {
//                 return false;
//             }
//             maxIndex = max(maxIndex, i + nums[i]);
//         }
//         return true;
//     }
// };



///Jump-Game -II (45)
// class Solution {
// public:
//     int jump(vector<int>& nums) {
//         if (nums.size() <= 1) return 0;

//         int totalJumps = 0;
//         int coverage = 0;
//         int lastJumpIdx = 0;

//         for (int i = 0; i < nums.size() - 1; i++) {
//             coverage = max(coverage, i + nums[i]);

//             if (i == lastJumpIdx) {
//                 totalJumps++;
//                 lastJumpIdx = coverage;

//                 if (lastJumpIdx >= nums.size() - 1)
//                     return totalJumps;
//             }
//         }
//         return totalJumps;
//     }
// };



///Job Sequencing

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// struct Job {
//     int id;
//     int deadline;
//     int profit;
// };

// bool compare(Job a, Job b) {
//     return a.profit > b.profit;
// }

// int maxProfit(vector<Job>& Jobs) {
//     int n = Jobs.size();

//     sort(Jobs.begin(), Jobs.end(), compare);

//     int maxDeadLine = 0;
//     for (int i = 0; i < n; i++) {
//         maxDeadLine = max(maxDeadLine, Jobs[i].deadline);
//     }

//     vector<int> slot(maxDeadLine + 1, -1);

//     int totalProfit = 0;

//     for (int i = 0; i < n; i++) {
//         for (int j = Jobs[i].deadline; j > 0; j--) {
//             if (slot[j] == -1) {
//                 slot[j] = Jobs[i].id;
//                 totalProfit += Jobs[i].profit;
//                 break;
//             }
//         }
//     }
//     return totalProfit;
// }

// int main() {
//     vector<Job> Jobs = {
//         {3, 6, 70},
//         {4, 6, 65},
//         {6, 2, 80},
//         {5, 4, 25},
//         {2, 5, 60},
//         {8, 2, 22},
//         {1, 4, 20},
//         {7, 2, 10}
//     };

//     cout << "Maximum Profit is : " << maxProfit(Jobs) << endl;
// }



///N-Meetings in one room
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// bool campare(pair<int, int> a, pair<int, int> b) {
//     return a.second < b.second;
// }

// int main () {
//     vector<pair<int, int>> meetings = {
//         {0, 5},
//         {3, 4},
//         {1, 2},
//         {5, 9},
//         {5, 7},
//         {8, 9}
//     };

//     sort(meetings.begin(), meetings.end(), campare);

//     int end = -1;
//     int count = 0;
//     for(int i = 0; i < meetings.size(); i++) {
//         if(meetings[i].first > end) {
//             count++;
//             end = meetings[i].second;
//         }
//     }
//     cout << "Maximum number of meetings: " << count << endl;
//     return 0;
// }



//Minimum Number of Platform required for a railway station => O(n*n)
// #include <iostream>
// using namespace std;

// int findPlatform(int arr[], int dep[], int n) {
//     int maxPlatforms = 0;

//     for (int i = 0; i < n; i++) {
//         int platforms = 1;  // current train

//         for (int j = 0; j < n; j++) {
//             if (i != j) {
//                 // Check overlap
//                 if (arr[i] < dep[j] && arr[j] < dep[i]) {
//                     platforms++;
//                 }
//             }
//         }

//         maxPlatforms = max(maxPlatforms, platforms);
//     }

//     return maxPlatforms;
// }

// int main() {
//     int arr[] = {900, 945, 955, 1100, 1500, 1800};
//     int dep[] = {920, 1200, 1130, 1150, 1900, 2000};
//     int n = 6;

//     cout << "Minimum platforms required: "
//          << findPlatform(arr, dep, n);
// }



//Minimum Number of Platform required for a railway station => O(n)

// class Solution {
// public:
//     int minPlatform(vector<int>& arr, vector<int>& dep) {
//         int n = arr.size();

//         sort(arr.begin(), arr.end());
//         sort(dep.begin(), dep.end());

//         int i = 0, j = 0;
//         int count = 0, maxCount = 0;

//         while (i < n && j < n) {
//             if (arr[i] < dep[j]) {
//                 count++;
//                 maxCount = max(maxCount, count);
//                 i++;
//             } else {
//                 count--;
//                 j++;
//             }
//         }
//         return maxCount;
//     }
// };

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> ratings = {0, 2, 4, 3, 2, 1, 1, 1,3, 5, 6, 4, 0, 0};
//     int n = ratings.size();

//     int i = 1;
//     int sum = 1;   // first child gets 1 candy

//     while (i < n) {

//         // Case 1: equal ratings
//         if (ratings[i] == ratings[i - 1]) {
//             sum += 1;
//             i++;
//             continue;
//         }

//         // Case 2: increasing slope
//         int up = 1;
//         while (i < n && ratings[i] > ratings[i - 1]) {
//             up++;
//             sum += up;
//             i++;
//         }

//         // Case 3: decreasing slope
//         int down = 1;
//         while (i < n && ratings[i] < ratings[i - 1]) {
//             sum += down;
//             down++;
//             i++;
//         }

//         // Peak adjustment
//         if (down > up) {
//             sum += (down - up);
//         }
//     }

//     cout << sum;
//     return 0;
// }



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int value;
    int weight;
};

// Comparator: sort by value/weight ratio (descending)
bool compare(Item a, Item b) {
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

int main() {
    vector<Item> items = {
        {60, 10},
        {100, 20},
        {120, 30}
    };

    int W = 50;  // Knapsack capacity

    sort(items.begin(), items.end(), compare);

    double totalValue = 0.0;
    int remainingWeight = W;

    for (int i = 0; i < items.size() && remainingWeight > 0; i++) {
        if (items[i].weight <= remainingWeight) {
            // Take whole item
            remainingWeight -= items[i].weight;
            totalValue += items[i].value;
        } else {
            // Take fraction
            double fraction = (double)remainingWeight / items[i].weight;
            totalValue += items[i].value * fraction;
            remainingWeight = 0;
        }
    }

    cout << "Maximum value in Knapsack = " << totalValue << endl;
    return 0;
}
