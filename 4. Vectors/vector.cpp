#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
  /*
    - Vector is an Dynamic Array
    - Can grow in size as the input increases
    - The growth size is 2x in case of pushing the element in the vector
    - Decleared vector has the same size as of its capacity
  */

  //  Initialization of vector

  vector<int> vi;
  vector<char> vc;
  vector<int> v1(5, 10); // Five int with value 10
  vector<int> c(v1.begin(), v1.end());
  vector<int> v{1, 2, 4, 6, 7};

  // Iterate over the vector

  for (int i = 0; i < c.size(); i++)
  {
    cout << c[i] << " ";
  }
  cout << endl;

  for (auto it = v.begin(); it != v.end(); it++)
  {
    cout << (*it) << ", ";
  }
  cout << endl;

  for (auto x : v1)
  {
    cout << x << ": ";
  }
  cout << endl;

  // Taking the Input
  vector<int> iv;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int num;
    cin >> num;
    iv.push_back(num);
  }

  for (auto x : iv)
  {
    cout << x << " ";
  }
  cout << endl;

  // Memory Level
  cout << v.size() << endl;
  cout << v.capacity() << endl;
  cout << v.max_size() << endl;

  return 0;
}