// Headers Inclusion
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Utility function for printing
template <class T>
void print(const T &textline) {
    cout << textline << endl;
}

// Course structure
struct Course {
    int level;
    string subjects[10];
};

// Record structure for storing student grades
struct Record {
    int semester;
    int credit_hr;
    string course_name;
    int mark;
    string grade;
};

// Base Person class
class Person {
public:
    string name;
    int age;
    string status;

    Person() : status("null") {}

    void setName(const string &nameInput) { name = nameInput; }
    void setAge(int ageInput) { age = ageInput; }
    string getName() const { return name; }
    int getAge() const { return age; }
};

// Student class inheriting from Person
class Student : public Person {
public:
    int studentID;
    vector<Record> records;

    Student(int id, const string &name, int age) : studentID(id) {
        setName(name);
        setAge(age);
        status = "Student";
    }

    void addRecord(const Record &record) {
        records.push_back(record);
    }

    void displayRecords() const {
        print("Records for student " + name + ":");
        for (const auto &rec : records) {
            cout << "Course: " << rec.course_name << ", Grade: " << rec.grade << endl;
        }
    }
};

// Teacher class inheriting from Person
class Teacher : public Person {
public:
    int teacherID;
    string subject;

    Teacher(int id, const string &name, int age, const string &subjectSpecialization)
        : teacherID(id), subject(subjectSpecialization) {
        setName(name);
        setAge(age);
        status = "Teacher";
    }

    void displayInfo() const {
        print("Teacher ID: " + to_string(teacherID) + ", Name: " + name + ", Subject: " + subject);
    }
};

// Main program with simple menu interface
int main() {
    vector<Student> students;
    vector<Teacher> teachers;
    
    int choice;
    do {
        cout << "\nSchool Management System" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Add Teacher" << endl;
        cout << "3. Display Student Records" << endl;
        cout << "4. Display Teacher Information" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int id, age;
            string name;
            cout << "Enter Student ID: ";
            cin >> id;
            cout << "Enter Student Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter Student Age: ";
            cin >> age;
            students.push_back(Student(id, name, age));
            print("Student added successfully.");

        } else if (choice == 2) {
            int id, age;
            string name, subject;
            cout << "Enter Teacher ID: ";
            cin >> id;
            cout << "Enter Teacher Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter Teacher Age: ";
            cin >> age;
            cout << "Enter Teacher's Subject: ";
            getline(cin, subject);
            teachers.push_back(Teacher(id, name, age, subject));
            print("Teacher added successfully.");

        } else if (choice == 3) {
            for (const auto &student : students) {
                student.displayRecords();
            }
        } else if (choice == 4) {
            for (const auto &teacher : teachers) {
                teacher.displayInfo();
            }
        } else if (choice == 5) {
            print("Exiting system...");
        } else {
            print("Invalid choice, please try again.");
        }
    } while (choice != 5);

    return 0;
}
