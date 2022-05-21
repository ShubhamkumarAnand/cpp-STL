#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int a = 10;
  int b = 20;

  swap(a, b);
  cout << a << " : " << b << endl;

  cout << min(a, b) << endl;
  cout << max(a, b) << endl;

  int arr[] = {1, 4, 5, 7, 8};
  int n = sizeof(arr) / sizeof(int);

  reverse(arr, arr + 2);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}