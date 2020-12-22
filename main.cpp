#include <iostream>

#include "solution.h"

using namespace std;

int main()
{
  Solution s;
  vector<int> input{1, 3, 6};
  cout << s.smallestRangeII(input, 3) << endl;
    return 0;
}
