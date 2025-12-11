#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int total_sum = accumulate(arr.begin(),arr.end(),0);
       int left = 0;
       int i = 0;
       while(i<arr.size()){
           int right =  total_sum - left-arr[i];
           if(left  == right){
               return i;
           };
           left += arr[i];
           i++;
         
       }
       return -1;
    }
};

int main(){
    Solution ob;
    vector<int> = {1,2,0,3};

}