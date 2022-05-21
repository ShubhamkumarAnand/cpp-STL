#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
using namespace std;
typedef long long ll;
int main()
{
  /*
   * List -> Doubly Link List
  ! Memory is not continuous
  ~ Insert and Delete data from Front , Middle or End
  */

  // * forward List :: More efficient in memory than List and best when insertion and deletion in comparision to vector or arrays

  // Initialization
  list<int> l;

  list<int> l1{1, 3, 5, 7, 8, 9};
  list<string> l2{"apple", "mango", "pineapple"};

  // Add from the back
  l2.push_back("guava");

  // sort
  l2.sort();

  // reverse
  l2.reverse();

  // Remove front
  cout << l2.front() << endl;
  l2.pop_front();

  // Add the Element in the list from front
  cout << l2.back() << endl;
  l2.pop_back();
  l2.push_front("kiwi");

  // Iteration

  // M-1
  for (string s : l2)
  {
    cout << s << "-->";
  }
  cout << endl;

  // M-2
  for (auto it = l2.begin(); it != l2.end(); it++)
  {
    cout << (*it) << "-:";
  }
  cout << endl;

  // Remove from the list
  l2.push_back("guava");
  l2.push_back("pine");
  // string s;
  // s = "guava";
  // l2.remove(s); // ! Remove all the occurrence of the item in the list

  // for (string s : l2)
  // {
  //   cout << s << ":-";
  // }
  // cout << endl;

  // ^ Erase one or more element from the list from the position

  auto it = l2.begin();
  it++;
  it++;
  l2.erase(it);
  for (string s : l2)
  {
    cout << s << ":";
  }
  cout << endl;

  // Insert at the position
  auto itt = l2.begin();
  itt++;
  l2.insert(itt, "Mixed Juice");
  for (string s : l2)
  {
    cout << s << "::";
  }
  cout << endl;
  return 0;
}