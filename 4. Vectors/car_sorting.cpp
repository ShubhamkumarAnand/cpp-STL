#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class car
{
public:
  string car_name;
  int x;
  int y;

  car()
  {
  }
  car(string car_name, int x, int y)
  {
    this->car_name = car_name;
    this->x = x;
    this->y = y;
  }

  int dist(int x, int y)
  {
    return x * x + y * y;
  }
};
int main()
{

  int n;
  cin >> n;
  vector<car> c;

  for (int i = 0; i < n; i++)
  {
    string name;
    int x, y;
    cin >> name;
    cin >> x >> y;
  }
  return 0;
}