#include <string>
#include <iostream>
using namespace std;

//Base
class Person
{
public:
    string name;
};


//intermediate
class Student : public Person
{
public:
    int roll_number;
};


//Final
class GraduateStudent : public Student
{
public:
    string degree_name;
};




int main()
{
    GraduateStudent graduate_student_object;

    getline(cin, graduate_student_object.name);
    cin >> graduate_student_object.roll_number;
    cin.ignore();
    getline(cin, graduate_student_object.degree_name);

    cout << "Name: " << graduate_student_object.name << endl;
    cout << "Roll Number: " << graduate_student_object.roll_number << endl;
    cout << "Degree: " << graduate_student_object.degree_name << endl;

    return 0;
}