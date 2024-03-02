#include <iostream>
#include <iomanip>
using namespace std;

double GetAverage(const char *name, int n) {
 int total=0, mark;
 double avg;

 for (int i=0; i<n; i++) {
 cout << name << i+1 << ": ";
 cin >> mark;
 total += mark;
 }
 avg = static_cast<double>(total) / n;
 cout << "Average: " << avg << endl;;

 return avg;
}


int main() {
 double quiz_avg;
 double lab_avg;
 double assign_avg;

 cout << "Class Participant" << endl;
 quiz_avg = GetAverage("Quiz", 3);
 lab_avg = GetAverage("Lab", 3);
 assign_avg = GetAverage("Assignment", 3);

 double class_part = 0.4 * (quiz_avg + lab_avg + assign_avg) / 3;
 cout << "Class Participation: " << fixed << setprecision(2) << class_part << endl;

 int exam_mark;
 cout << "Prelim Exam: ";
 cin >> exam_mark;
 double exam = 0.6 * exam_mark;
 cout << "% " << exam << endl;

 double grade = class_part + exam;
 cout << "Prelim Grade: " << grade << endl;

 cout << "Remarks: ";
 if (grade >= 75) {
 cout << "PASSED" << endl;
 }
 else {
 cout << "FAILED" << endl;
 }
}