#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int arr[] = {1, 2, 5, 6, 8};
  int size = sizeof(arr) / sizeof(int);
  int key = 6;
  // Search Algorithm --> find()
  // Address which it is present in Hexadecimal
  auto it = find(arr, arr + size, key);
  int index = it - arr;
  if (index == size)
  {
    cout << key << " is not Present" << endl;
  }
  else
  {
    cout << key << " is Present at index " << index << endl;
  }

  return 0;
}