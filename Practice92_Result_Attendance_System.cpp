#include <string>
#include <iostream>
using namespace std;



class Marks
{
public:
    int grades;
};


class Attendance
{
public:
    int attendance_percent;
};



class StudentRecord : public Marks, public Attendance
{
public:
    string student_name;
};





int main()
{
    StudentRecord student_object;

    getline(cin, student_object.student_name);
    cin >> student_object.grades;
    cin >> student_object.attendance_percent;

    cout << "Student Name: " << student_object.student_name << endl;
    cout << "Marks: " << student_object.grades << endl;
    cout << "Attendance: " << student_object.attendance_percent << endl;

    if (student_object.attendance_percent >= 75)
    {
        cout << "Eligible for Exam: Yes" << endl;
    }
    else
    {
        cout << "Eligible for Exam: No" << endl;
    }

    return 0;
}
