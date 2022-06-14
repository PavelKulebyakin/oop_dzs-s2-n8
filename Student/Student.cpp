#include "Student.h"

void Student::SetAge(int valueage)
{
	age = valueage;
}
int Student::GetAge()
{
	return age;
}

int* Student::GetMarks()
{
	return marks;
}

void Student::SetMarks(int* value, int len)
{
	for (int i = 0; i < len; i++) {
		marks[i] = value[i];
	}
	num_of_m = len;
}


std::string Student::GetName()
{
	return name;
}
void Student::SetName(std::string valuename)
{
	name = valuename;
}

float Student::Average()
{
	float sum = 0;
	for (int i = 0; i < num_of_m; i++) {
		sum += marks[i];
	}
	return sum / num_of_m;
}

Student& Student::operator = (const Student& student)
{

	age = student.age;
	num_of_m = student.num_of_m;
	marks = student.marks;
	name = student.name;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Student& student){
	os << "Имя: " << student.name << " Возраст: " << student.age << " Оценки: ";
	for (int i = 0; i < student.num_of_m; i++) {
		os << student.marks[i] << ", ";
	}
	return os;
}

std::istream& operator>> (std::istream& in, Student& student){ 
	cout << "Введите имя: ";
	in >> student.name;
	cout << "Введите возраст: ";
	in >> student.age;
	cout << "Введите количество оценок: ";
	in >> student.num_of_m;
	cout << "Введите оценки: \n";
	for (int i = 0; i < student.num_of_m; i++) {
		in >> student.marks[i];
	}
	return in;
}