#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
  return a > b;
}
int main()
{
  int a[] = {1, 4, 3, 8, 12, 0};
  int size = sizeof(a) / sizeof(int);

  // Sorting the Array
  sort(a, a + size, compare);
  for (int i = 0; i < size; i++)
  {
    cout << a[i] << " ";
  }

  return 0;
}