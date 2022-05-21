/*
- set is of two type Ordered and Unordered set
- Internally uses tree like data structure
- The tree can be BST or the Red Black tree
- Insertion and Erasing of element takes log(n) time
- You cannot update the element once the set is created
- In set the elements are ordered
*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
	int arr[] = {12, 1, 3, 4, 2, 4, 1};
	int n = sizeof(arr) / sizeof(n);

	set<int> s;
	for (int i = 0; i < n; i++) {
		s.insert(arr[i]);
	}

	// Printing the set
	for (set<int> :: iterator it = s.begin(); it != s.end(); it++) {
		cout << *(it) << " , ";
	}

	// Erasing the data from the set
	s.erase(4);
	auto it1 = s.find(12);
	s.erase(it1);
	return 0;
}