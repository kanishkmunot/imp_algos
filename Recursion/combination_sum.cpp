

#include <bits/stdc++.h>
using namespace std;

void combinationSum(vector<int>& arr, int idx, int sum, const vector<int>& v, int n) {

    if (sum == 0) {
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    if (idx < n && sum > 0) {
        arr.push_back(v[idx]);
        combinationSum(arr, idx, sum - v[idx], v, n);

        arr.pop_back();
        combinationSum(arr, idx + 1, sum, v, n);
    }
}

int main() {
    vector<int> v = {1, 2, 3, 4};
    int n = v.size();
    int sum = 6;
    vector<int> arr;
    combinationSum(arr, 0, sum, v, n);
    cout << "hello" << endl;
    return 0;
}