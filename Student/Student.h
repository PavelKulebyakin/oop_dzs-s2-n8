#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student
{
private:
	int age;
	int* marks;
	int num_of_m;
	string name;
	float average;
public:
	int GetAge();
	void SetAge(int);

	int* GetMarks();
	void SetMarks(int*, int);
	 

	string GetName();
	void SetName(string);

	float Average();
	

	Student(int age1 = 18, int num1 = 3, int* marks1 = new int[3]{5,5,4}, string name1 = "Pavel")
	{
		age = age1;
		num_of_m = num1;
		marks = new int[num_of_m];
		for (int i = 0; i < num_of_m; i++) {
			marks[i] = marks1[i];
		}
		name = name1;

	}

	~Student() { if (!marks) delete[] marks; };

	Student& operator = (const Student&);
	friend std::ostream& operator <<(std::ostream& os, const Student& student);
	friend std::istream& operator >>(std::istream& os, Student& student);


};
#endif // !STUDENT_H

