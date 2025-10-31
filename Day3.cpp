#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getMinMax(vector<int> &arr) {
        int largest = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > largest) {
                largest = arr[i];
            }
        }

        int smallest = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] < smallest) {
                smallest = arr[i];
            }
        }

        return {smallest, largest};
    }
};

#include <iostream>

int main() {
    Solution s;
    vector<int> nums = {5, 3, 9, 1, 7};
    vector<int> result = s.getMinMax(nums);
    cout << "Smallest: " << result[0] << ", Largest: " << result[1] << endl;
    return 0;
}
