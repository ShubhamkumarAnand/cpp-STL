#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
  vector<int> v{1, 3, 5, 7, 9, 50};
  v.push_back(10); // O(1) most of the time
  for (auto i : v)
  {
    cout << i << " ";
  }
  cout << endl;
  v.pop_back();
  for (auto i : v)
  {
    cout << i << " ";
  }
  cout << endl;

  v.insert(v.begin() + 2, 10);
  for (auto i : v)
  {
    cout << i << " ";
  }
  cout << endl;

  v.insert(v.begin() + 2, 3, 97); // It will insert the 97 three times on the location 3 onwards

  v.insert(v.begin() + 2, 10);
  for (auto i : v)
  {
    cout << i << " ";
  }
  cout << endl;

  cout << "Size : " << v.size() << endl;
  cout << "Capacity : " << v.capacity() << endl;

  // We avoid the Resizing of the vector
  v.resize(10);
  cout << "After Resizing : " << endl;
  cout << "Size : " << v.size() << endl;
  cout << "Capacity : " << v.capacity() << endl;

  // Delete all the element of the vector but doesn't clear the memory or the capacity
  v.clear();
  cout << "After Clearing : " << endl;
  cout << "Size : " << v.size() << endl;
  cout << "Capacity : " << v.capacity() << endl;

  // Check the vector is empty
  if (v.empty())
    cout << "This is an Empty Vector" << endl;
  else
    cout << "Vector is not Empty" << endl;
  return 0;
}