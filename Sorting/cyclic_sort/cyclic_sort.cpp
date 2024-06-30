#include <vector>
#include <iostream>
using namespace std;

int main() {
  vector<int> v = {1, 0, 3, 2};
  int n = v.size();
  int i = 0;

  while (i < n) {
    int correctIdx = v[i] - 1;
    if (v[i] != v[correctIdx]) {
      swap(v[i], v[correctIdx]);
    } else {
      i++;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }
  cout << endl;

  return 0;
}
