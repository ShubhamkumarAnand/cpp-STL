#include<iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
	unordered_map<string, vector<string>> phonebook;
	phonebook["rahukul"].push_back("5432");
	phonebook["rahukul"].push_back("5462");
	phonebook["rahukul"].push_back("5412");
	phonebook["param"].push_back("5532");
	phonebook["param"].push_back("5452");
	phonebook["param"].push_back("5435");

	// Printing the phonebook
	for (auto p : phonebook) {
		cout << p.first << endl;
		for (auto x : p.second) {
			cout << x << " : ";
		}
		cout << endl;
	}

	// Listing all the phone number
	string name;
	cin >> name;

	if (phonebook.count(name) == 0) {
		cout << "Absent" << endl;
	} else {
		cout << "The Phone number of " << name << endl;
		for (string s : phonebook[name]) {
			cout << s << " : ";
		}
		cout << endl;
	}
	return 0;
}