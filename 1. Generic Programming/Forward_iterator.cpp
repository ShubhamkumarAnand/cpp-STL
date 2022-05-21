#include <iostream>
#include <list>
using namespace std;
/*
  This will work on Every container in the stl
*/
template <class ForwardIterator, class T>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key)
{
  while (start != end)
  {
    if (*start == key)
    {
      return start;
    }
    start++;
  }
  return end;
}
int main()
{
  list<int> l;
  l.push_back(1);
  l.push_back(5);
  l.push_back(7);
  l.push_back(10);

  auto it = search(l.begin(), l.end(), 50);
  if (it == l.end())
  {
    cout << "Element is not present" << endl;
  }
  else
  {
    cout << *it << endl;
  }
  return 0;
}