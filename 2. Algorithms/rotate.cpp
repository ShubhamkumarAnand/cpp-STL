#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
  int arr[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000, 2000};
  int size = sizeof(arr) / sizeof(int);
  rotate(arr, arr + 4, arr + size);
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  vector<int> v{10, 20, 50, 100, 200, 500};
  rotate(v.begin(), v.begin() + 3, v.end());
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  vector<int> vb{1, 2, 3};

  // Lexicographically bigger Number
  next_permutation(vb.begin(), vb.end());
  next_permutation(vb.begin(), vb.end());
  next_permutation(vb.begin(), vb.end());
  next_permutation(vb.begin(), vb.end());
  for (auto x : vb)
  {
    cout << x;
  }
  return 0;
}