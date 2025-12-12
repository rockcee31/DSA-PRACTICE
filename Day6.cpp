#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        int n  = arr.size();
        if(arr[0]==1) return 0;
        
        int low =0,end = n-1;
        int ans = -1;
        while(low<=end){
            int mid = low+(end-low)/2;
            if(arr[mid]==1){
                ans = mid;
                end = mid-1;
                
            }
            else{
                low= mid+1;
            }
        }
        return ans;
        }            
        
    
};

int main(){
    Solution s;
    vector<int> arr = {0,0,1,1};
    cout<<s.transitionPoint(arr);

}
// SUMMARY — How to Find First and Last Occurrence of 1 Using Binary Search (Without Getting Stuck)
// ✔ 1. Search for first occurrence of 1

// If arr[mid] == 1
// → store first = mid
// → move left (end = mid - 1) to find earlier 1

// Else
// → move right (low = mid + 1)

// This guarantees:

// Even if more 1’s exist before mid, we will reach them.

// We never get stuck because end = mid - 1 always reduces the range.

// ✔ 2. Search for last occurrence of 1

// If arr[mid] == 1
// → store last = mid
// → move right (low = mid + 1) to find later 1

// Else
// → move right (low = mid + 1)

// This guarantees:

// Even if more 1’s exist after mid, we will reach them.

// We never get stuck because low = mid + 1 always reduces the range.

// ⭐ Why store the index in a variable?

// Because when you find a 1, the correct answer might be this index, but there may still be:

// a smaller index with value 1 → for first occurrence

// a larger index with value 1 → for last occurrence

// So we store the index and continue searching, ensuring we don’t miss the true answer.