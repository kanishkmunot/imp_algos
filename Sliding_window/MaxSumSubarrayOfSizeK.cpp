#include <bits/stdc++.h>
#include <climits>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }
    maxSum = currentSum;

    int i = 1;
    int j = k;

    while (j < n) {
        currentSum = currentSum + arr[j] - arr[i - 1];
        maxSum = max(maxSum, currentSum);
        i++;
        j++;
    }

    cout << "Maximum sum of " << k << " consecutive elements: " << maxSum << endl;
    return 0;
}
