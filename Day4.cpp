#include <iostream>
#include <vector>
using namespace std;

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

class Solution {
  public:
    /* Function to replace every element with the
    next greatest element */
    vector<int> nextGreatest(vector<int> arr) {
        // code here
        int n = arr.size();
        if(n == 0) return arr;
        
        int max_so_far = -1;
        for(int i = n-1;i>=0;--i){
            int current = arr[i];
            arr[i]=max_so_far;
            if(current>max_so_far) max_so_far = current;
            
        }
        
        return arr;
        
    }
}; 


int main() {
    // Solution obj;
    // int date = 12;
    // vector<int> cars = {2375, 7682, 2325, 2352};
    // vector<int> fine = {250, 500, 350, 200};

    // long long int total_fine = obj.totalFine(date, cars, fine);  // ✔ semicolon + declaration

    // cout << "total fine is " << total_fine;


    Solution obj;
    vector<int> arr = {9,5,5,3,2,1};
    vector<int> arr2 = obj.nextGreatest(arr);
    bool first = true;
    cout << "[";
    for (const auto &num : arr2){
        if(!first) cout<<",";
        cout<<num;
    }
    cout <<"]\n";
    return 0;
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