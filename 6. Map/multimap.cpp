#include <iostream>
#include <map>
#include <string>
#include <utility>
using namespace std;

/*
- When we want to store the multiple value for the same key
- instead of map we use multi map to initialize the function
- Insert Find and Erase all work in the log time complexity because of the Underlying BST
*/

int main()
{
	// Deceleration of the multi map
	multimap<char, string> m;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		char c;
		string s;
		cin >> c >> s;
		m.insert(make_pair(c, s));
	}

	// Erasing from the map
	auto it = m.begin();
	m.erase(it);

	// Printing the value
	for (auto p : m) {
		cout << p.first << " : " << p.second << endl;
	}

	// Printing the lower bound
	auto it2 = m.lower_bound('c');
	cout << it2->second << endl;

	// Printing the upper bound
	auto it1 = m.upper_bound('a');
	cout << it1->second << endl;

	// Searching for the cat
	auto it3 = m.find('b');
	if (it3->second == "brokelli") {
		m.erase(it3);
	}

	return 0;
}