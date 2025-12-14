#include <iostream>
#include <vector>
using namespace std;

// 111111111111111111111111111111111111111111111111111111111111111111
class Solution {
public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int i = 0, j = 0;
        vector<int> result;

        while (i < a.size() && j < b.size()) {
            if (a[i] == b[j]) {
                if (result.empty() || result.back() != a[i])
                    result.push_back(a[i]);
                i++;
                j++;
            }
            else if (a[i] < b[j]) {
                if (result.empty() || result.back() != a[i])
                    result.push_back(a[i]);
                i++;
            }
            else {
                if (result.empty() || result.back() != b[j])
                    result.push_back(b[j]);
                j++;
            }
        }

        
        while (i < a.size()) {
            if (result.empty() || result.back() != a[i])
                result.push_back(a[i]);
            i++;
        }

        // Remaining elements of b
        while (j < b.size()) {
            if (result.empty() || result.back() != b[j])
                result.push_back(b[j]);
            j++;
        }

        return result;
    }
};


//access last value of an array we use arr.back and to check if arr don't have any value we use  arr.empty()
// <bits/stdc++.h> it contain all the required imports like <iostream> <vector> <set>

// ✅ Solution 1: Using set
// 🧠 Idea

// set duplicate elements allow nahi karta

// set elements ko automatically sorted rakhta hai

// Dono arrays ke saare elements set me daal do

// 🔧 Steps

// Ek set banao

// Array a ke elements insert karo

// Array b ke elements insert karo

// set ko vector me convert karo

// ⏱️ Complexity

// Time: O((n + m) log(n + m))

// Space: O(n + m)

// 👍 Pros

// Simple logic

// Sorted + unique automatically

// Easy to write

// 👎 Cons

// Extra log factor

// Extra data structure used

// 📝 Exam Line

// Dono arrays ke elements ko set me insert kiya kyunki set duplicate allow nahi karta aur sorted order me rakhta hai.

// to insert element is set we use .insert(); but in python we have .add()



// 2nd approach 

// ✅ Solution 2: Without set (Two Pointer)
// 🧠 Idea

// Dono arrays sorted hain

// Do pointers use karke merge karo

// Chhota element pehle add karo

// Equal ho to ek baar add karo

// result.back() se duplicate avoid karo

// 🔧 Steps

// Pointer i array a par

// Pointer j array b par

// Compare a[i] & b[j]

// Chhota ya equal element add karo

// Remaining elements add karo

// ⏱️ Complexity

// Time: O(n + m) ✅

// Space: O(n + m) (result only)

// 👍 Pros

// Fastest solution

// No extra DS like set

// Interview-preferred

// 👎 Cons

// Arrays sorted hone chahiye

// Logic thoda careful likhna padta hai

// 📝 Exam Line

// Do sorted arrays par two-pointer technique use karke union nikala aur duplicates avoid kiye.





// 222222222222222222222222222222222222222222222222222222222222
class Solution {
  public:
    // Function to partition the array around the range such
    // that array is divided into three parts.
    void threeWayPartition(vector<int>& arr, int a, int b) {
        // code here
        int i =0;
        int n = arr.size()-1;
        for(int j=0; j <arr.size();j++){
            if(arr[j]<a){
                swap(arr[i],arr[j]);
                i++;
            }
            
        }
        for(int z=arr.size()-1;z>=0;z--){
            if(arr[z]>b){
                swap(arr[n],arr[z]);
                n--;
            }
        }
    }
};


class Solution {
  public:
    void threeWayPartition(vector<int>& arr, int a, int b) {
        int low = 0;
        int mid = 0;
        int high = arr.size() - 1;

        while (mid <= high) {
            if (arr[mid] < a) {
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            }
            else if (arr[mid] > b) {
                swap(arr[mid], arr[high]);
                high--;
                // mid NOT incremented
            }
            else {
                mid++;
            }
        }
    }
};


// ✅ Three Way Partition (Dutch National Flag) — Quick Summary

// We divide the array into three parts:

// Elements less than a

// Elements between a and b

// Elements greater than b

// 🔹 Pointers Used

// low → boundary of elements < a

// mid → current index being checked

// high → boundary of elements > b

// 🔹 Pointer Meaning at Any Time
// [ < a | a..b | unknown | > b ]
//    0..low-1  low..mid-1 mid..high high+1..n-1

// 🔹 Logic

// If arr[mid] < a

// swap with arr[low]

// low++, mid++

// If arr[mid] > b

// swap with arr[high]

// high--

// do NOT increment mid (new element at mid is unchecked)

// Else (a ≤ arr[mid] ≤ b)

// mid++

// 🔹 Why mid is special

// mid is an index, but not a normal loop counter

// It moves only when the element at it is fully classified

// Skipping mid after swapping with high causes logic errors

// ⏱ Complexity

// Time: O(n)

// Space: O(1)

// Passes: Single pass

// 🧠 One-line exam answer

// The algorithm uses three pointers (low, mid, high) to partition the array in one pass by classifying elements as <a, a–b, or >b, ensuring no unchecked element is skipped.