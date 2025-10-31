#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// Q1) Given an array, arr[] of n integers, and an integer element x, find whether element x is present in the array. Return the index of the first occurrence of x in the array, or -1 if it doesn't exist.
//  arr[] = [1, 2, 3, 4], x = 3
// int search(vector<int>& arr,int ele){
//     for(int i =0; i<arr.size();i++){
//         if(arr[i] == ele){
//             return i;
//         }
//     };
//     return -1;
// };



// int main(){
//     vector<int> nums  = {1,2,3,4,5};
//     int x = 3;
//     cout << "Result: " << search(nums, x);
//     return 0;

// };




// Q2)Given two arrays a[] and b[] of equal size, the task is to find whether the elements in the arrays are equal.
// Two arrays are said to be equal if both contain the same set of elements, arrangements (or permutations) of elements may be different though.

// bool EqualOrNot(vector<int>&a,vector<int>&b){
//         sort(a.begin(),a.end());
//         sort(b.begin(),b.end());
//         if(a==b){
//             return true;
//         }
//         else{
//             return false;
//         };
// };
// int main(){
//     vector<int> a = {1,4,2,1,0};
//     vector<int> b = {2,1,1,4,0};
     
//     cout<<boolalpha<<EqualOrNot(a,b);
// };









// TOPIC I REVISED
// for (int& n : arr)
//     n *= factor;

// int main()
// This is the entry point of every C++ program.
// When you run the program, execution always starts from main().
// main() must return an int (usually 0) to tell the OS the program finished successfully.

// VECTOR & PASS BY REFERENCE - Revision Notes

// Vector is a dynamic array in C++ that can resize automatically.
// Elements are stored in contiguous memory and can be accessed using indices.
// Supports operations like push_back, pop_back, size, and iteration.

// Pass by reference (using &) allows a function to access the original variable.
// Changes inside the function directly affect the original data.
// No copy is made, making it memory and time efficient for large data structures.
// Useful when you want the function to modify the input itself.

// #include <bits/stdc++.h>
// It’s a shortcut header used in competitive programming.

// It automatically includes almost every standard C++ header:

// <vector>

// <algorithm>

// <iostream>

// <string>

// <map>, <set>, etc.

// That’s why sort() seems to “work without including <algorithm>” in those examples.

// boolalpha is a stream manipulator from the <iostream> library that changes how booleans are displayed in the output stream. bool is always printed as 0 and 1  so to show it as true or false we should add bool aplha 