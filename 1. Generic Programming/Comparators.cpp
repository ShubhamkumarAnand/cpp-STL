#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;

class Book
{
public:
  string name;
  int price;
  Book()
  {
  }

  Book(string name, int price)
  {
    this->name = name;
    this->price = price;
  }
};

class BookCompare
{
public:
  bool operator()(Book A, Book B)
  {
    if (A.name == B.name)
    {
      return true;
    }
    return false;
  }
};

// Templates + Iterators + Comparators
// Freedom From Underlying DS + Containers + Operations
template <class ForwardIterator, class T, class Compare>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key, Compare cmp)
{
  while (start != end)
  {
    if (cmp(*start, key))
    {
      return start;
    }
    start++;
  }
  return end;
}

int main()
{
  Book b1("C++", 100);
  Book b2("Java", 500);
  Book b3("JS", 700);
  Book b4("ML", 1000);
  Book b5(b1);

  // list<Book> b;
  vector<Book> b;
  b.push_back(b1);
  b.push_back(b2);
  b.push_back(b3);
  b.push_back(b4);
  b.push_back(b5);

  Book BookToFind("C++", 110);

  BookCompare cmp;
  /*
  if (comp(b1, BookToFind))
  {
    cout << "Same Books" << endl;
  }
  */

  auto it = search(b.begin(), b.end(), BookToFind, cmp);
  if (it != b.end())
  {
    cout << "Book is Available" << endl;
  }
  else
  {
    cout << "Book Unavailable" << endl;
  }

  return 0;
}