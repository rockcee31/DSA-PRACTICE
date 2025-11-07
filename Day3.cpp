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













// REVISION SUMMARY - NEW LEARNINGS
// 1. Counting elements in an array (like 0s and 1s) to sort without extra space.
// 2. Creating an object of a class: Solution sol; then calling its member functions.
// 3. 'void' as function return type means it does not return anything.
// 4. Range-based for loop: for(int i : arr) cout << i << " "; prints all elements without {} if single statement.
// 5. Class functions can directly modify vectors passed by reference (&), affecting the original array.
