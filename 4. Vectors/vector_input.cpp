#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
  int n;
  cin >> n;

  vector<int> v;
  v.reserve(100); // To avoid the Reassigning the capacity of the vector

  for (int i = 0; i < n; i++)
  {
    int num;
    cin >> num;
    v.push_back(num);
  }
  return 0;
}