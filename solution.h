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

    set<int> B(A.begin(), A.end());

    auto iter_median = B.begin();
    advance(iter_median, B.size()/2);
    int median = *iter_median;

    set<int> c;
    for (int element : B) {
      if (element < median) {
        element += K;
      } else {
        element -= K;
      }

      c.insert(element);
    }

    clog << "Median: " << median << endl;

    return abs(*c.begin() - *prev(c.end()));
  }
};

#endif // SOLUTION_H
