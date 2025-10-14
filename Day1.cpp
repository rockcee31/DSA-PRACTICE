#include <iostream>
#include <vector>
using namespace std;


// Q1) Given an array, arr[] of n integers, and an integer element x, find whether element x is present in the array. Return the index of the first occurrence of x in the array, or -1 if it doesn't exist.
//  arr[] = [1, 2, 3, 4], x = 3

int search(vector<int>& arr,int ele){
    for(int i =0; i<arr.size();i++){
        if(arr[i] == ele){
            return i;
        }
    
    };
    return -1;
};



int main(){
    vector<int> nums  = {1,2,3,4,5};
    int x = 3;
    cout << "Result: " << search(nums, x);
    return 0;

};













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
