#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums, int low, int mid, int high) {
    int left = low;
    int right = mid + 1;
    vector<int> v;
    while (left <= mid && right <= high) {
        if (nums[left] < nums[right]) {
            v.push_back(nums[left]);
            left++;
        } else {
            v.push_back(nums[right]);
            right++;
        }
    }

    while (left <= mid) {
        v.push_back(nums[left]);
        left++;
    }

    while (right <= high) {
        v.push_back(nums[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        nums[i] = v[i - low];
    }
}

void mergeSort(vector<int>& nums, int low, int high) {
    if (low >= high) return;
    int mid = low + (high - low) / 2;
    mergeSort(nums, low, mid);
    mergeSort(nums, mid + 1, high);
    merge(nums, low, mid, high);
}

vector<int> sortArray(vector<int>& nums) {
    int n = nums.size();
    mergeSort(nums, 0, n - 1);
    return nums;
}

int main() {
    vector<int> nums = {5, 2, 8, 1, 9, 3, 7, 4, 6};
    vector<int> sortedNums = sortArray(nums);

    cout << "Sorted array: ";
    for (int num : sortedNums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
