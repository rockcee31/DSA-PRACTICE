#include <iostream>
#include <vector>
using namespace std;
// 1111111111111111111111111111111111111111111111
// class Solution {
// public:
//     long long int totalFine(int date, vector<int> &cars, vector<int> &fine) {
//         int n = cars.size();
//         long long int Total_fine = 0;

//         if (date % 2 == 0) {  // even date → fine odd cars
//             for (int i = 0; i < n; i++) {
//                 if (cars[i] % 2 == 1) {
//                     Total_fine += fine[i];
//                 }
//             }
//         } else {  // odd date → fine even cars
//             for (int i = 0; i < n; i++) {
//                 if (cars[i] % 2 == 0) {
//                     Total_fine += fine[i];
//                 }
//             }
//         }

//         return Total_fine;
//     }
// };

// 2222222222222222222222222222222222222222222222222222222222222222222222
// class Solution {
//   public:
//     /* Function to replace every element with the
//     next greatest element */
//     vector<int> nextGreatest(vector<int> arr) {
//         // code here
//         int n = arr.size();
//         if(n == 0) return arr;
        
//         int max_so_far = -1;
//         for(int i = n-1;i>=0;--i){
//             int current = arr[i];
//             arr[i]=max_so_far;
//             if(current>max_so_far) max_so_far = current;
            
//         }
        
//         return arr;
        
//     }
// }; 

// ⭐ Very Short Summary

// Right se traverse karo

// Har position par "right side ka max" dalo

// Max ko update karte raho

// This is O(n) time and O(1) extra space — fastest possible.



// 333333333333333333333333333333333333333333333333333333333333333333333
class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        int j = 0;
        for(int i=1;i<arr.size();i++){
            if(arr[j] != arr[i]){
                j++;
                arr[j]=arr[i];
            }
        };
        arr.resize(j+1);
        return arr;

    };
};
// i → dhoondhta hai (scanner)

// j → store karta hai (writer)

// Jab naya element milta hai:
// → j aage badhta hai, value copy hoti hai

// End me resize karke sirf unique values rakhi jati hain.






// MAIN FUNCTION FROM WHERE PROGRAM RUNS

int main() {
    // Solution obj;
    // int date = 12;
    // vector<int> cars = {2375, 7682, 2325, 2352};
    // vector<int> fine = {250, 500, 350, 200};

    // long long int total_fine = obj.totalFine(date, cars, fine);  // ✔ semicolon + declaration

    // cout << "total fine is " << total_fine;


    // Solution obj;
    // vector<int> arr = {9,5,5,3,2,1};
    // vector<int> arr2 = obj.nextGreatest(arr);
    // bool first = true;
    // cout << "[";
    // for (const auto &num : arr2){
    //     if(!first) cout<<",";
    //     cout<<num;
    // }
    // cout <<"]\n";
    // return 0;

    Solution obj;
    vector<int> arr = {2,2,3,2,1,1,2};
    vector<int> arr1 = obj.removeDuplicates(arr);
    bool first = true;
    cout << "[";
    for(const auto&num:arr1){
        if(!first){
            cout<<",";
        }
        cout<<num;
    }
}












// ✔ Time complexity = number of iterations

// ✔ Variables outside loop don't reset automatically

// ✔ --i and i-- work the same in loop updates

// ✔ Right-to-left scan helps find next greatest efficiently

// ✔ Optimal solution = O(n), naive = O(n²)


// Array decay → array becomes a pointer when used in expressions (arr → int*).
// cout << arr prints address, not elements.

// vector prints directly because it has operator<< overloaded.

// C-style arrays have no operator<<, so they can’t auto-print.

// You can write your own operator<< to print arrays like vectors.



// unordered_set<int> seen;
// vector<int> result;

// for (int num : arr) {
//     if (!seen.count(num)) {
//         result.push_back(num);
//         seen.insert(num);
//     }
// }

// ✔ .find(x) returns an iterator.
// ✔ If iterator == .end(), element NOT found.
// ✔ .end() is an iterator to "one past the last element".
// ✔ Works for set, unordered_set, map.
// ❌ vector has no .find(), use std::find()

// | Container         | find() available? | What find() returns                 |
// | ----------------- | ----------------- | ----------------------------------- |
// | **vector**        | ❌ No              | Must use `std::find(begin,end)`     |
// | **set**           | ✔ Yes             | iterator to element or end()        |
// | **unordered_set** | ✔ Yes             | iterator to element or end()        |
// | **map**           | ✔ Yes             | iterator to key/value pair or end() |

// in vector .find works like this
// vector<int> arr = {10, 20, 5, 30};

// auto it = std::find(arr.begin(), arr.end(), 5);

