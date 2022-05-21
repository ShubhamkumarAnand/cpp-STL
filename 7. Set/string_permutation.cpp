/*
- The permutation should be unique
- The Permutation should be lexicographical sorted
*/
#include <iostream>
#include <map>
#include <set>
#include <utility>
using namespace std;

void permutate(char a[], int i, set<string> &s) {
	if (a[i] == '\0') {
		string t(a);
		// The set will store the permutation of all the string
		s.insert(t);
		return;
	}
	// Recursive case
	for (int j = i; a[j] != '\0'; j++) {
		swap(a[i], a[j]);
		permutate(a, i + 1,s);
		swap(a[i], a[j]);
	}
}

int main()
{
	set<string> s;
	char a[100];
	cin >> a;
	permutate(a, 0, s);

	// Loop over the set
	for(auto it : s){
		cout << it <<endl;
	}
	return 0;
}