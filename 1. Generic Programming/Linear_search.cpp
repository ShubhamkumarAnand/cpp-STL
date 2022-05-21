#include <iostream>
using namespace std;

template <typename T>
int Linear_search(T a[], T key, int n)
{
  for (int i = 0; i < n; i++)
  {
    if (a[i] == key)
    {
      return i;
    }
  }
  return n;
}

int main()
{
  int a[] = {1, 2, 3, 12, 13, 15};
  cout << Linear_search(a, 12, 6) << endl;

  float f[] = {1.1, 1.3, 1.5, 1.7, 1.9};
  float k = 1.5;
  cout << Linear_search(f, k, 5) << endl;
  return 0;
}