#include <gtest/gtest.h>

#include "solution.h"

//------------------------------------------------------------------------------
class TestClass : public ::testing::Test {
protected:
  void SetUp()
  { }
};

//------------------------------------------------------------------------------
TEST_F(TestClass, testExample1) {
  Solution s;
  vector<int> input{1};
  ASSERT_EQ(0, s.smallestRangeII(input, 0));
}

//------------------------------------------------------------------------------
TEST_F(TestClass, testExample2) {
  Solution s;
  vector<int> input {0, 10};
  ASSERT_EQ(6, s.smallestRangeII(input, 2));
}

//------------------------------------------------------------------------------
TEST_F(TestClass, testExample3) {
  Solution s;
  vector<int> input{1, 3, 6};
  ASSERT_EQ(3, s.smallestRangeII(input, 3));
}

//------------------------------------------------------------------------------
TEST_F(TestClass, testExample4) {
  Solution s;
  vector<int> input{4, 7, 4};
  ASSERT_EQ(3, s.smallestRangeII(input, 4));
}
