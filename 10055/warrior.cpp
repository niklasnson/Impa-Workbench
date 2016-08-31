#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Solution {
public:
  Solution();
  void run();
  int calculation(unsigned int lhs, unsigned int rhs);
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

int Solution::calculation(unsigned int lhs, unsigned int rhs) {
  return lhs - rhs;
}

int main() {
  Solution solution;
  solution.run();
  return 0;
}
