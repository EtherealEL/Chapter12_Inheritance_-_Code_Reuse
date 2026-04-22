#include <string>
#include <iostream>
using namespace std;



//base
class Person
{
public:
    string persons_name;
};

//derived
class Member : public Person
{
public:
    int member_id;
};

//further derived
class PremiumMember : public Member
{
public:
    int books_borrowed;
};




int main()
{
    PremiumMember premium_member_object;

    getline(cin, premium_member_object.persons_name);
    cin >> premium_member_object.member_id;
    cin >> premium_member_object.books_borrowed;

    cout << "Member Name: " << premium_member_object.persons_name << endl;
    cout << "Member ID: " << premium_member_object.member_id << endl;
    cout << "Books Borrowed: " << premium_member_object.books_borrowed << endl;

    if (premium_member_object.books_borrowed <= 10)
    {
        cout << "Status: Within Limit" << endl;
    }
    else
    {
        cout << "Status: Exceeded the limit" << endl;
    }

    return 0;
}
