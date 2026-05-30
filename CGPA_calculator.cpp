#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string studentName;
    int numCourses;

    cout << "========== CGPA CALCULATOR ==========" << endl;

    cout << "Enter Student Name: ";
    getline(cin, studentName);

    cout << "Enter Number of Courses: ";
    cin >> numCourses;

    string courseName[50];
    float grade[50];
    float creditHours[50];

    float totalCredits = 0;
    float totalGradePoints = 0;

    for (int i = 0; i < numCourses; i++)
    {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter Course Name: ";
        cin >> courseName[i];

        cout << "Enter Grade Point (0-10): ";
        cin >> grade[i];

        cout << "Enter Credit Hours: ";
        cin >> creditHours[i];

        totalCredits += creditHours[i];
        totalGradePoints += grade[i] * creditHours[i];
    }

    float semesterGPA = totalGradePoints / totalCredits;
    float overallCGPA = semesterGPA;

    cout << "\n\n========== RESULT ==========" << endl;
    cout << "Student Name: " << studentName << endl;

    cout << "\nCourse Details:" << endl;
    cout << "---------------------------------------------" << endl;

    for (int i = 0; i < numCourses; i++)
    {
        cout << "Course: " << courseName[i]
             << " | Grade: " << grade[i]
             << " | Credits: " << creditHours[i]
             << endl;
    }

    cout << "---------------------------------------------" << endl;

    cout << fixed << setprecision(2);

    cout << "Total Credits      : " << totalCredits << endl;
    cout << "Total Grade Points : " << totalGradePoints << endl;
    cout << "Semester GPA       : " << semesterGPA << endl;
    cout << "Overall CGPA       : " << overallCGPA << endl;

    return 0;
}