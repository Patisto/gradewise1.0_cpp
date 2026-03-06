#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Structure to hold component data (Tests, Assignments, etc.)
struct Component {
    string name;
    double weight;
    double score;
    double maxScore;
    double contribution;
};
// Function to determine Letter Grade based on Malawian Scale
string getLetterGrade(double total) {
    if (total >= 80) return "A";
    if (total >= 75) return "B+";
    if (total >= 70) return "B";
    if (total >= 65) return "C+";
    if (total >= 60) return "C";
    if (total >= 55) return "D+";
    if (total >= 50) return "D";
    return "F";
}
int main(){
    string courseName;
    int numComponents;
    double totalWeight = 0;
    double totalSecured = 0;
    vector<Component> components;

    cout << "==========================================" << endl;
    cout << "      GradeWise MW - Code Collective      " << endl;
    cout << "==========================================" << endl;

    cout << "Enter Course Name: ";
    getline(cin, courseName);

    cout << "How many components (e.g., 2 Tests + 1 Exam = 3)? ";
    cin >> numComponents;

    return 0;
}