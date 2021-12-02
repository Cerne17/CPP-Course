#include <iostream>
#include <string>

using namespace std;

class Student {
    public:
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, double aGpa)
        {
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        string hasHonors(double grade)
        {
            if (gpa >= grade)
            {
                return "Have Honors";
            }
            return "Does not Have Honors";
        };
};

int main()
{
    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);

    cout << student1.hasHonors(3.5) << endl;
    cout << student2.hasHonors(2.0) << endl;

    return 0;
}
