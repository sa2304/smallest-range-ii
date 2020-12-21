#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>
#include <numeric>
#include <set>
#include <vector>

using namespace std;

class Solution {
public:
  /** TODO */
  int smallestRangeII(vector<int>& A, int K) {
    set<int> b;
    for (int number : A) {
      int addK = number + K;
      int subK = number - K;
      b.insert(min(abs(addK), abs(subK)));
    }

    return abs(*b.begin() - *prev(b.end()));
  }
};

#endif // SOLUTION_H
