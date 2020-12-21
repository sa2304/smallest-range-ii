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
    const size_t count = A.size();
    double avg = accumulate(A.begin(), A.end(), 0.0, [count](const int& avg, const int& element) {
      return avg + static_cast<double>(element) / count;
    });

    clog << "Average: " << avg << "\n";

    set<int> B;
    clog << "B: [ ";
    for (int number : A) {
      const int element = (number <= avg)
          ? number + K
          : number - K;
      B.insert( element );
      clog << element << " ";
    }
    clog << "]\n";

    const int min = *B.begin();
    clog << "min = " << min << "\n";
    const int max = *prev(B.end());
    clog << "max = " << max << "\n";
    const int diff = abs((min) - abs(max));
    clog << "Diff = " << diff << "\n";
    return diff;
  }
};

#endif // SOLUTION_H
