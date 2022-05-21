#include<iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Student {
public:
	string fname;
	string lname;
	string rollNum;

	Student(string f, string l, string no) {
		fname = f;
		lname = l;
		rollNum = no;
	}

	bool operator==(const Student &s) const {
		return  rollNum == s.rollNum ? true : false;
	}
};

class Hashfn {
public:
	size_t operator()(const Student &s) const {
		return  s.fname.length() + s.lname.length();
	}
};

int main()
{
	unordered_map<Student, int, Hashfn> student_map;

	Student s0("Shubham", "Anand", "12");
	Student s1("Shubham", "Anand", "13");
	Student s2("Rahul", "Sharma", "43");
	Student s3("Nishant", "Rout", "11");
	Student s4("Rohit", "Kumar", "34");
	Student s5("Rohit", "Kumar", "38");

	// Add Student marks to map
	student_map[s0] = 100;
	student_map[s1] = 15;
	student_map[s2] = 60;
	student_map[s3] = 66;
	student_map[s4] = 40;
	student_map[s5] = 50;

	// Marks of student s3
	cout << "Marks of student s3 : " << student_map[s3] << endl;

	// Iterate over the all students
	for (auto p : student_map) {
		cout << p.first.fname << " : " << p.first.rollNum << " : " << p.second << endl;
	}
	return 0;
}