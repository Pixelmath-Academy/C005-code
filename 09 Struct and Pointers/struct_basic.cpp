#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    float gpa;
};

int main() {
    Student s;
    cin >> s.name >> s.age >> s.gpa;
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "GPA: " << s.gpa << endl;
    return 0;
}