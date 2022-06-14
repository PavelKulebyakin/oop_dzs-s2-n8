#include "Student.h"

int main()
{
    setlocale(LC_ALL, "rus");

    Student student, student2;

    cout << student << endl;

    cin >> student2;

    cout << student2 << endl;

    student = student2;

    cout << student2 << endl;

    cout << "Средняя оценка: " << student.Average();


}
