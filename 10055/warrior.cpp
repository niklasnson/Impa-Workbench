#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Solution {
public:
  Solution();
  void run();
  int calculation(long long int lhs, long long int rhs);
private:
  std::vector<pair<long long int,long long int>> v;
};

Solution::Solution() {}
void Solution::run() {
  string row;
  while(getline(cin, row))
  {
    long long int lhs;
    long long int rhs;
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

int Solution::calculation(long long int lhs, long long int rhs) {
  if (lhs > rhs)
    return lhs - rhs;
  else
    return rhs - lhs;
}

int main() {
  Solution solution;
  solution.run();
}