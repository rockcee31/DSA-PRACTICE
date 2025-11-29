// --MINIMUM AND MAXIMUM FROM AN ARRAY
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     vector<int> getMinMax(vector<int> &arr) {
//         int largest = arr[0];
//         for (int i = 1; i < arr.size(); i++) {
//             if (arr[i] > largest) {
//                 largest = arr[i];
//             }
//         }

//         int smallest = arr[0];
//         for (int i = 1; i < arr.size(); i++) {
//             if (arr[i] < smallest) {
//                 smallest = arr[i];
//             }
//         }

//         return {smallest, largest};
//     }
// };

// #include <iostream>

// int main() {
//     Solution s;
//     vector<int> nums = {5, 3, 9, 1, 7};
//     vector<int> result = s.getMinMax(nums);
//     cout << "Smallest: " << result[0] << ", Largest: " << result[1] << endl;
//     return 0;
// }


// --BINARY SORT SMEANS SORT ARRAY OF 0s AND 1s
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
//   public:
//     void binSort(vector<int> &arr) {
//         int count_0 = 0;
//         int count_1 = 0;
        
//         for(int i=0;i<arr.size();i++){
//             if(arr[i]==0){
//                 count_0++;
//             }
//             else{
//                 count_1++;
//             }
//         }
        
//         int i = 0;
//         while(count_0){
//             arr[i]=0;
//             count_0--;
//             i++;
//         }
//         while(count_1){
//             arr[i] = 1;
//             count_1--;
//             i++;
//         }
//     }
// };

// int main() {
//     Solution sol;
//     vector<int> arr = {0,1,1,0,1,0,0,1};
    
//     sol.binSort(arr);
    
//     cout << "Sorted Array: ";
//     for(int i : arr) cout << i << " ";
//     cout << endl;
    
//     return 0;
// }


// -- Move all negative elements to end and keep them in same order 

// class Solution {
//   public:
//     void segregateElements(vector<int>& arr) {
//         int i=arr.size()-1;
//         int till=1;
//         while(i>=0){
//             if(arr[i]<0){
//                 for(int j = i ;j<arr.size()-till;j++){
//                     swap(arr[j],arr[j+1]);
//                 }
//                 i--;
//                 till++;
//             }
//             else{
//                 i--;
//             }
//         }
//     }
// };
//this one is working but time complexity O(n^2)

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
//   public:
//     void segregateElements(vector<int>& arr) {
//         vector<int> arr1;  // empty vector

//         // Push all non-negative numbers first
//         for(int i : arr){
//             if(i >= 0){
//                 arr1.push_back(i);
//             }
//         }

//         // Then push all negative numbers
//         for(int i : arr){
//             if(i < 0){
//                 arr1.push_back(i);
//             }
//         }

//         arr = arr1;  // assign back to original vector
//     }
// };

// int main() {
//     Solution sol;
//     vector<int> arr = {1, -2, 3, -4, 0, 5, -1};

//     sol.segregateElements(arr);

//     cout << "Rearranged Array: ";
//     for(int i : arr) cout << i << " ";
//     cout << endl;

//     return 0;
// }




//-- sorted matrix search
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int m = matrix.size();
//         int n = matrix[0].size();
//         int i = m - 1;
//         int j = 0;

//         while (i >= 0 || j < n) {   // (logical OR) <-- NOTE: should be AND in correct logic
//             if (matrix[i][j] == target) {
//                 return true;
//             } 
//             else if (matrix[i][j] > target) {
//                 i--;
//             } 
//             else {
//                 j++;
//             }
//         }
//         return false;
//     }
// };

// int main() {
//     Solution obj;   // 🔥 OBJECT CREATED

//     vector<vector<int>> matrix = {
//         {1, 4, 7, 11},
//         {2, 5, 8, 12},
//         {3, 6, 9, 16},
//         {10,13,14,17}
//     };

//     int target = 9;

//     bool found = obj.searchMatrix(matrix, target);  // 🔥 METHOD CALLED

//     cout << (found ? "Found" : "Not Found") << endl;

//     return 0;
// }


// REVISION SUMMARY - NEW LEARNINGS
// 1. Counting elements in an array (like 0s and 1s) to sort without extra space.
// 2. Creating an object of a class: Solution sol; then calling its member functions.
// 3. 'void' as function return type means it does not return anything.
// 4. Range-based for loop: for(int i : arr) cout << i << " "; prints all elements without {} if single statement.
// 5. Class functions can directly modify vectors passed by reference (&), affecting the original array.

// 6. C++ arrays cannot dynamically resize, so we use vector for dynamic size.
// 7. vector<int> arr1(arr.size()) creates a vector of that size with all elements initialized to 0.
// 8. Use push_back() to add elements to the end of a vector dynamically.
// 9. Pass vector by reference (&) to modify the original array inside a function.
// 10. Range-based for loop (for(int i : arr)) allows easy traversal without using indices.
