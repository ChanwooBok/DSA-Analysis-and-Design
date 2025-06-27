// Sort and Print Course List in Alphanumeric Order
// Author: Chanwoo Bok
// Date: 2025-06-28

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
using namespace std;

// Course structure
struct Course {
    string courseId;
    string courseName;
    vector<string> prerequisites;
};

// Function to split a string by a delimiter
vector<string> Split(const string& line, char delimiter) {
    vector<string> tokens;
    stringstream ss(line);
    string token;
    while (getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

// Function to load course data from a file
void LoadCourses(const string& filename, vector<Course>& courses) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error: Could not open file." << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        vector<string> tokens = Split(line, ',');
        if (tokens.size() < 2) continue;

        Course course;
        course.courseId = tokens[0];
        course.courseName = tokens[1];
        for (size_t i = 2; i < tokens.size(); ++i) {
            course.prerequisites.push_back(tokens[i]);
        }
        courses.push_back(course);
    }
    file.close();
}

// Function to print the course list in alphanumeric order
void PrintSortedCourseList(const vector<Course>& courses) {
    vector<Course> sortedCourses = courses;
    sort(sortedCourses.begin(), sortedCourses.end(), [](const Course& a, const Course& b) {
        return a.courseId < b.courseId;
    });

    for (const Course& course : sortedCourses) {
        cout << course.courseId << ": " << course.courseName << endl;
    }
}

int main() {
    vector<Course> courses;
    string filename = "course_data.txt";

    LoadCourses(filename, courses);
    PrintSortedCourseList(courses);

    return 0;
}
