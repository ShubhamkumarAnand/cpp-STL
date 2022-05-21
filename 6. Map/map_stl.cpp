#include <iostream>
#include <map>
#include <string>
using namespace std;

/*
- Map are the data structures which stores the data in the form of the key value
pair.
- map<key, value>.
- A map are the associative containers.
- map - Ordered and Unordered
- A map maintains self balancing BST
- All the objects are ordered according to the keys lexicographical order
- Keys are ordered into the ordered map and not ordered in unordered map
- A map stores the unique keys only once and if we change the value it will
update it.
*/

int main() {
	// Deceleration of the map
	map<string, int> m;

	// Inserting into the map
	m.insert({"Juice", 3});

	pair<string, int> p;
	p.first = "Apple";
	p.second = 4;

	m.insert(p);

	m["Banana"] = 1;

	// Finding or Searching in the map
	string fruit_name = "Apple";

	auto it = m.find(fruit_name); // auto == map<string, int> :: iterator
	if (it != m.end()) {
		cout << "The Fruit " << fruit_name << " is present and Quantity is "
		     << m[fruit_name] << endl;
	} else {
		cout << "The fruit is not Present" << endl;
	}

	// Erasing the value
	m.erase(fruit_name);

	// Another way of finding the value
	int isPresent = m.count(fruit_name); // Returns the value in 0 Or 1
	if (isPresent) {
		cout << "The Fruit " << fruit_name << " is present and Quantity is "
		     << m[fruit_name] << endl;
	} else {
		cout << "The fruit is not Present" << endl;
	}

	m["Litchi"] = 7;
	m["Pomegranate"] = 11;

	// Iterating over the map using for and for each loop
	for (auto it = m.begin(); it != m.end(); it++) {
		cout << it->first << " : " << it->second << endl;
	}

	for (auto p : m) {
		cout << p.first << " : " << p.second << endl;
	}
	return 0;
}