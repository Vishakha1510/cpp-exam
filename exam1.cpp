#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int rollnumber;

public:
    Student(string studentName, int studentRollNumber) {
        name = studentName;
        rollnumber = studentRollNumber;
    }

    string getName() const {
        return name;
    }

    int getRollNumber() const {
        return rollnumber;
    }
};

int main() {
    pair<string, int> studentsData[] = { {"ram", 1}, {"sita", 2} };

    Student students[2] = {Student(studentsData[0].first, studentsData[0].second),
                           Student(studentsData[1].first, studentsData[1].second) };

    string firstStudentName = students[0].getName();
    int firstStudentRollNumber = students[0].getRollNumber();
    string secondStudentName = students[1].getName();
    int secondStudentRollNumber = students[1].getRollNumber();

    cout << "Student Name: " << firstStudentName << "\nRoll Number: " << firstStudentRollNumber << endl;
    cout << "Student Name: " << secondStudentName << "\nRoll Number: " << secondStudentRollNumber << endl;

    return 0;
}

