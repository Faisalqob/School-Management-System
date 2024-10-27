# School Management System

A simple, command-line-based C++ School Management System for handling basic student and teacher information. This program allows users to add students and teachers, view student records, and display teacher information. It uses object-oriented programming principles with a modular class design for easy management.

## Features

- **Add Students**: Create a new student profile, assign an ID, and add basic details.
- **Add Teachers**: Create a new teacher profile, assign a unique ID, and add subject specialization.
- **Display Student Records**: View academic records of all students, including grades and course details.
- **Display Teacher Information**: View information on each teacher, including subject specialization and ID.

## Getting Started

### Prerequisites

To compile and run this code, you will need:
- A C++ compiler (e.g., `g++`).
- A terminal or command-line interface.

### Installation

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/Faisalqob/school-management-system.git
   cd school-management-system
   ```

2. **Compile the Program**:
   Use the following command to compile the `school_management_system.cpp` file:
   ```bash
   g++ school_management_system.cpp -o school_management_system
   ```

3. **Run the Program**:
   ```bash
   ./school_management_system
   ```

## Usage

The program offers a simple interactive menu:

1. **Add Student**: Adds a new student with an ID, name, and age.
2. **Add Teacher**: Adds a new teacher with an ID, name, age, and subject specialization.
3. **Display Student Records**: Lists all academic records of students.
4. **Display Teacher Information**: Lists teacher profiles and subject details.
5. **Exit**: Exits the program.

### Sample Menu
```plaintext
School Management System
1. Add Student
2. Add Teacher
3. Display Student Records
4. Display Teacher Information
5. Exit
Enter your choice:
```

## Code Structure

- **Person Class**: Base class for shared attributes such as `name` and `age`.
- **Student Class**: Inherits from `Person` and manages student-specific details and records.
- **Teacher Class**: Inherits from `Person` and manages teacher-specific information, including subject specialization.
- **Record Struct**: Stores student grades, credit hours, and courses.

## Contributing

If you’d like to contribute:
1. Fork the repository.
2. Create a new branch for your feature (`git checkout -b feature-name`).
3. Commit your changes (`git commit -m 'Add some feature'`).
4. Push to the branch (`git push origin feature-name`).
5. Create a pull request.
