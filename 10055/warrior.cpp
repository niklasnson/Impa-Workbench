#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Solution {
public:
  Solution();
  void run();
  unsigned int calculation(unsigned int lhs, unsigned int rhs);
private:
  std::vector<pair<unsigned int,unsigned int>> v;
};

Solution::Solution() {}
void Solution::run() {
  string row;
  while(getline(cin, row))
  {
    unsigned int lhs;
    unsigned int rhs;
    istringstream is(row);
    while(is >> lhs >> rhs)
    {
      v.push_back({lhs, rhs});
    }
  }
  for (auto i : v) {
    cout << calculation(i.first,i.second) << endl;
  }
}

unsigned int Solution::calculation(unsigned int lhs, unsigned int rhs) {
  if (lhs > rhs)
    return lhs - rhs;
  else
    return rhs - lhs;
}

int main() {
  Solution solution;
  solution.run();
  return 0;
}
