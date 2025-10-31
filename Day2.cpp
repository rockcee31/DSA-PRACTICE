#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <numeric>
using namespace std;

// Q1
// Given a sorted array arr[] that represents an Arithmetic Progression (AP) with exactly one missing element, find the missing number.
// The array arr[] is sorted in either ascending or descending order.

// Note: An element will always exist that, upon inserting into a sequence forms Arithmetic progression. If the given sequence already forms a valid complete AP, return the (n+1)-th element that would come next in the sequence.


int findMissing(vector<int>& arr) {
 int n = arr.size();
 if (n < 2) return 0;
 // Step 1: Compute differences
 vector<int> diffs;
 for (int i = 0; i < n - 1; i++)
 diffs.push_back(arr[i + 1] - arr[i]);
 // Step 2: Check if already valid AP
 bool all_same = all_of(diffs.begin(), diffs.end(),
 [&](int d){ return d == diffs[0]; });
 if (all_same)
 return arr.back() + diffs[0];
 // Step 3: Compute common difference safely
 int a = arr.front(), l = arr.back();
 int d = (l - a) / n;
 // Step 4: Find missing term
 int expected = a;
 for (int ele : arr) {
 if (ele != expected) return expected;
 expected += d;
 }
 // Step 5: If none missing, return next term
 return arr.back() + d;
 }
};




// 🧾 Summary (Short)

// Common Difference:
// → (last - first) / size works approx only if element missing is small.
// → Best: find all arr[i] - arr[i-1] and pick the most frequent difference.

// unordered_map<int,int>:
// → Stores {key=value} like {difference = count}.

// auto, auto&, const auto&:
// → auto → copy,
// → auto& → reference (can modify),
// → const auto& → read-only reference.

// & (Pass by reference):
// → Gives direct access to original variable, no copy.

// arr.push_back(3) to add 3 in back of arr








// Q2 CYCALLY ROTATE ARRAY BY ONE 

void rotate(vector<int> &arr) {
        int n = arr.size()-1;
        int last = arr[n];
        for(int i = arr.size()-1;i>0;i--){
            arr[i] = arr[i-1];
        };
        arr[0] = last;
    };


int main() {
    vector<int> arr = {2, 4, 8, 10, 12, 14};
    cout << "Missing element: " << findMissing(arr);
    return 0;

    rotate(arr);
}