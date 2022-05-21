#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  pair<int, char> p;
  p.first = 10;
  p.second = 'B';

  pair<int, char> p2(p);
  cout << p2.first << " " << p2.second << endl;

  pair<int, string> p3 = make_pair(101, "Audi");
  cout << p3.first << " " << p3.second << endl;

  pair<pair<int, int>, string> p5;
  p5.second = "BMW";
  p5.first.first = 10;
  p5.first.second = 20;

  cout << p5.first.first << " " << p5.first.second << " " << p5.second;
  return 0;
}