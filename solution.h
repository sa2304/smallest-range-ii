#ifndef SOLUTION_H
#define SOLUTION_H

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

class Solution {
public:
  int smallestRangeII(vector<int>& A, int K) {
    sort(A.begin(), A.end());
    int amin = A.front();
    int amax = A.back();
    int smallest_distnace = abs(amax - amin);
    for (size_t i = 0; i + 1 < A.size(); ++i) {
      int smaller = A[i];
      int greater = A[i + 1];
      int low = min(amin + K, greater - K);
      int high = max(amax - K, smaller + K);
      smallest_distnace = min(smallest_distnace, abs(high - low));
    }

    return smallest_distnace;
  }
};

#endif // SOLUTION_H
