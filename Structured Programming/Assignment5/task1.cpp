#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

const int NUM_STUDENTS = 10;
const int NUM_SUBJECTS = 4;

// Function to calculate the average grade for each student
void calculateStudentAverages(const vector<vector<int>> &grades, vector<double> &studentAverages) {
    for (int i = 0; i < NUM_STUDENTS; i++) {
        int total = 0;
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            total += grades[i][j];
        }
        studentAverages[i] = static_cast<double>(total) / NUM_SUBJECTS;
    }
}

// Function to calculate the average grade for each subject
void calculateSubjectAverages(const vector<vector<int>> &grades, vector<double> &subjectAverages) {
    for (int j = 0; j < NUM_SUBJECTS; j++) {
        int total = 0;
        for (int i = 0; i < NUM_STUDENTS; i++) {
            total += grades[i][j];
        }
        subjectAverages[j] = static_cast<double>(total) / NUM_STUDENTS;
    }
}

// Function to find the highest and lowest grades for each student
void calculateStudentHighLow(const vector<vector<int>> &grades, vector<int> &highest, vector<int> &lowest) {
    for (int i = 0; i < NUM_STUDENTS; i++) {
        highest[i] = grades[i][0];
        lowest[i] = grades[i][0];
        for (int j = 1; j < NUM_SUBJECTS; j++) {
            if (grades[i][j] > highest[i]) highest[i] = grades[i][j];
            if (grades[i][j] < lowest[i]) lowest[i] = grades[i][j];
        }
    }
}

// Function to find the highest and lowest grades for each subject
void calculateSubjectHighLow(const vector<vector<int>> &grades, vector<int> &highest, vector<int> &lowest) {
    for (int j = 0; j < NUM_SUBJECTS; j++) {
        highest[j] = grades[0][j];
        lowest[j] = grades[0][j];
        for (int i = 1; i < NUM_STUDENTS; i++) {
            if (grades[i][j] > highest[j]) highest[j] = grades[i][j];
            if (grades[i][j] < lowest[j]) lowest[j] = grades[i][j];
        }
    }
}

// Main function
int main() {
    vector<vector<int>> grades(NUM_STUDENTS, vector<int>(NUM_SUBJECTS));
    vector<double> studentAverages(NUM_STUDENTS);
    vector<double> subjectAverages(NUM_SUBJECTS);
    vector<int> highestStudentGrades(NUM_STUDENTS);
    vector<int> lowestStudentGrades(NUM_STUDENTS);
    vector<int> highestSubjectGrades(NUM_SUBJECTS);
    vector<int> lowestSubjectGrades(NUM_SUBJECTS);

    // Input grades
    cout << "Enter grades for " << NUM_STUDENTS << " students in " << NUM_SUBJECTS << " subjects:\n";
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Student " << i + 1 << ":\n";
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            cout << "  Subject " << j + 1 << ": ";
            cin >> grades[i][j];
        }
    }

    // Calculate averages, highest, and lowest grades
    calculateStudentAverages(grades, studentAverages);
    calculateSubjectAverages(grades, subjectAverages);
    calculateStudentHighLow(grades, highestStudentGrades, lowestStudentGrades);
    calculateSubjectHighLow(grades, highestSubjectGrades, lowestSubjectGrades);

    // Output results
    cout << "\nPerformance Report:\n";
    cout << fixed << setprecision(2);

    // Average grades for each student
    cout << "\nAverage Grades for Each Student:\n";
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Student " << i + 1 << ": " << studentAverages[i] << endl;
    }

    // Average grades for each subject
    cout << "\nAverage Grades for Each Subject:\n";
    for (int j = 0; j < NUM_SUBJECTS; j++) {
        cout << "Subject " << j + 1 << ": " << subjectAverages[j] << endl;
    }

    // Highest and lowest grades for each student
    cout << "\nHighest and Lowest Grades for Each Student:\n";
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Student " << i + 1 << ": Highest = " << highestStudentGrades[i]
             << ", Lowest = " << lowestStudentGrades[i] << endl;
    }

    // Highest and lowest grades for each subject
    cout << "\nHighest and Lowest Grades for Each Subject:\n";
    for (int j = 0; j < NUM_SUBJECTS; j++) {
        cout << "Subject " << j + 1 << ": Highest = " << highestSubjectGrades[j]
             << ", Lowest = " << lowestSubjectGrades[j] << endl;
    }

    return 0;
}
