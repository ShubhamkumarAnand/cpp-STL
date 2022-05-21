#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int arr[] = {1, 2, 5, 5, 5, 6, 8};
  int size = sizeof(arr) / sizeof(int);
  int key = 6;

  bool present = binary_search(arr, arr + size, key);
  if (present)
  {
    cout << "Element is Present" << endl;
  }
  else
  {
    cout << "Element is not present" << endl;
  }

  // For getting the lower Index of the repeating key in the array
  auto low_it = lower_bound(arr, arr + size, 5);
  int lower_index = low_it - arr;
  cout << "Lower Bound is " << lower_index << endl;

  // For getting the upper Index of the repeating key in the array
  auto up_it = upper_bound(arr, arr + size, 5);
  int upper_index = up_it - arr;
  cout << "Upper bound is " << upper_index << endl;

  // For getting the frequency of the element in the array
  cout << "Frequency of the occurance of the element " << (upper_index - lower_index) << endl;
  return 0;
}