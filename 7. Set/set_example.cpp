#include <algorithm>
#include<iostream>
#include <set>
#include <utility>
using namespace std;

int main()
{
	set<pair<int,int>> p;
	p.insert(make_pair(10,4));
	p.insert(make_pair(14,4));
	p.insert(make_pair(10,43));
	p.insert(make_pair(10,12));
	p.insert(make_pair(1,40));
	p.insert(make_pair(13,455));

	// Lower Bound
	auto lb = p.lower_bound(make_pair(14,4));
	cout << lb->first << " : " << lb-> second << endl;

	// Upper Bound
	auto ub = p.upper_bound(make_pair(10,43));
	cout << ub->first << " : " << ub-> second << endl;

	p.erase(p.find(make_pair(10,12)));

	for(auto x:p){
		cout << x.first << " -> " << x.second << endl;
	}

	return 0;
}