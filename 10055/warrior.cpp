#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Solution {
public:
  Solution();
  void run();
  void calculation(unsigned long long lhs, unsigned long long rhs);
private:
  std::vector<pair<unsigned long long,unsigned long long>> v;
};

Solution::Solution() {}
void Solution::run() {
  string row;
  do
  {
    unsigned long long lhs;
    unsigned long long rhs;
    istringstream is(row);
    while(is >> lhs >> rhs)
    {
      v.push_back({lhs, rhs});
    }
  } while(getline(cin, row));

  for (auto i : v) {
    calculation(i.first,i.second);
  }
}

void Solution::calculation(unsigned long long lhs, unsigned long long rhs) {
  if (lhs > rhs)
    cout << lhs - rhs << endl;
  else
    cout << rhs - lhs << endl;
}

int main() {
  Solution solution;
  solution.run();
  return 0;
}
