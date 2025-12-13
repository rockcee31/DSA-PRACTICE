#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// class Solution {
//   public:
//     int transitionPoint(vector<int>& arr) {
//         int n  = arr.size();
//         if(arr[0]==1) return 0;
        
//         int low =0,end = n-1;
//         int ans = -1;
//         while(low<=end){
//             int mid = low+(end-low)/2;
//             if(arr[mid]==1){
//                 ans = mid;
//                 end = mid-1;
                
//             }
//             else{
//                 low= mid+1;
//             }
//         }
//         return ans;
//         }            
        
    
// };

// int main(){
//     Solution s;
//     vector<int> arr = {0,0,1,1};
//     cout<<s.transitionPoint(arr);

// }














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





















// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int> positive;
        vector<int> negative;
        for(int i =0; i<arr.size();i++){
            if(arr[i]>=0){
                positive.push_back(arr[i]);
            }
            else{
                negative.push_back(arr[i]);
                
            }
        };
            int i = 0;
            int j =0;
            while(j<positive.size() && j<negative.size()){
                arr[i]=positive[j];
                i++;
                arr[i]=negative[j];
                j++;
                i++;
                
                
            } 
            while(j<positive.size()){
                arr[i]=positive[j];
                i++;
                j++;
            }
            while(j<negative.size()){
                arr[i]=negative[j];
                i++;
                j++;
            }
        
    }
};


int main() {
    // Input array
    vector<int> arr = {1, -2, 3, -4, -5, 6};

    // Create object of Solution
    Solution obj;

    // Call rearrange function
    obj.rearrange(arr);

    // Print result
    cout << "Rearranged array: ";
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
// Perfect 👍
// Ab hum sirf isi loop ko slow-motion me samjhenge.
// Koi extra baat nahi, bas ek line = ek kaam.

// 🔹 Code in question
// while (p < positive.size() && n < negative.size()) {
//     arr[i++] = positive[p++];
//     arr[i++] = negative[n++];
// }

// 🧠 Variables ka role (sabse important)

// i → final array (arr) ka index

// p → positive vector ka index

// n → negative vector ka index

// 👉 Teen alag kaam, teen alag variables

// 🔹 While condition ka matlab
// p < positive.size() && n < negative.size()


// ➡️ Jab tak dono vectors me elements bache hain, tab tak loop chalega.

// 🧪 Ek real example se samjho
// arr      = [ ?, ?, ?, ?, ?, ? ]
// positive = [ 1, 3, 5 ]
// negative = [ -2, -4, -6 ]


// Initial:

// i = 0, p = 0, n = 0

// 🔁 First iteration
// Line 1
// arr[i++] = positive[p++];


// Step by step:

// arr[0] = positive[0] → arr[0] = 1

// i++ → i = 1

// p++ → p = 1

// Now:

// arr = [1, ?, ?, ?, ?, ?]

// Line 2
// arr[i++] = negative[n++];


// arr[1] = negative[0] → arr[1] = -2

// i++ → i = 2

// n++ → n = 1

// Now:

// arr = [1, -2, ?, ?, ?, ?]

// 🔁 Second iteration
// arr[2] = positive[1]  -> 3
// arr[3] = negative[1]  -> -4


// Now:

// arr = [1, -2, 3, -4, ?, ?]

// 🔁 Third iteration
// arr[4] = positive[2]  -> 5
// arr[5] = negative[2]  -> -6


// Final:

// arr = [1, -2, 3, -4, 5, -6]

// 🧠 Why i++, p++, n++ inside same line?

// Because:

// ek element place ho gaya → i++

// ek positive use ho gaya → p++

// ek negative use ho gaya → n++

// Sab independent hain

// 📝 One-line intuition (yaad rakhna)

// Ek positive uthao → array me daalo
// Ek negative uthao → array me daalo
// Repeat jab tak dono bache ho

// ❓ Agar positive ya negative pehle khatam ho jaye?

// Isliye baad me ye loops hote hain:

// while (p < positive.size()) ...
// while (n < negative.size()) ...

// 🧠 Final mental picture

// p → positive ki ungli 👉

// n → negative ki ungli 👉

// i → final array ki ungli 👉

// Teen ungliyaan, teen kaam.
// Confusion = 0.

