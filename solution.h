#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>
#include <numeric>
#include <set>
#include <vector>

using namespace std;

class Solution {
public:
  int smallestRangeII(vector<int>& A, int K) {
    set<int> numbers(A.begin(), A.end());
    int amin = *numbers.begin();
    int amax = *prev(numbers.end());
    int smallest_distnace = abs(amax - amin);
    for (auto iter = numbers.begin(); next(iter) != numbers.end(); ++iter) {
      int smaller = *iter;
      int greater = *next(iter);
      int low = min(amin + K, greater - K);
      int high = max(amax - K, smaller + K);
      smallest_distnace = min(smallest_distnace, abs(high - low));
    }

    return smallest_distnace;
  }
};

#endif // SOLUTION_H
