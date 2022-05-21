#include<iostream>
#include <unordered_map>
using namespace std;

/*
- Unordered map is the implementation of the Hashtable
- Here chaining happens of the different value
- if load > factor threshold value or the table is growing bigger then the rehashing will happen
- Inserting Deleting and Finding will be happening in o(1)
*/
int main()
{
	// Deceleration of the map
	unordered_map<string, int> m;

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