#!/usr/bin/python3
Student = __import__('9-student').Student

students = [Student("Clifford", "Adom", 25), Student("Jack", "Mavis", 21)]

for student in students:
    j_student = student.to_json()
    print(type(j_student))
    print(j_student['first_name'])
    print(type(j_student['first_name']))
    print(j_student['age'])
    print(type(j_student['age']))
