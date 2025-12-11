#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int total_sum = accumulate(arr.begin(),arr.end(),0);
       int left = 0;
       int i = 0;
       while(i<arr.size()){
           int right =  total_sum - left-arr[i];
           if(left  == right){
               return i;
           };
           left += arr[i];
           i++;
         
       }
       return -1;
    }
};

int main(){
    Solution ob;
    vector<int> arr = {1,2,0,3};
    int ans = ob.findEquilibrium(arr);
    cout << ans;


}

// ✅ Problem kya tha?

// Array me woh index dhoondhna tha jahan:

// Left side ka sum == Right side ka sum

// Agar aisa index mile → return index
// Nahi mile → return -1

// ✅ Approach (Kaise solve kiya?)
// 1. Pehle total sum nikaala

// totalSum = sum(arr)
// Isse hume right side sum aasani se mil jayega.

// 2. Left sum ko 0 se start kiya

// leftSum = 0

// 3. Har index par check kiya

// Right sum =

// totalSum - leftSum - arr[i]


// Agar:

// leftSum == rightSum


// → Ye hi equilibrium point hai.

// 4. Agar match nahi hota

// To left side me current element add kar diya:

// leftSum += arr[i];

// ✅ Ye pattern kis type ke problems me use hota hai?
// This is the pattern:

// ✔ Prefix sum + Total sum
// ✔ Balance check using:

// left == total - left - current

// 🎯 Use this pattern in these types of problems:
// 1️⃣ Partition problem

// Array ko 2 equal-sum parts me todna.

// 2️⃣ Pivot index (LeetCode)

// Same exact logic.

// 3️⃣ Find element where left sum == right sum

// Same logic, bas condition different.

// 4️⃣ Equilibrium point (GFG)

// Exactly same pattern.

// 5️⃣ Balanced array

// Left half sum == right half sum.