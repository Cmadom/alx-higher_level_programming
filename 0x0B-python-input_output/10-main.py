#!/usr/bin/python3
Student = __import__('10-student').Student

student_1 = Student("Clifford", "Adom", 29)
student_2 = Student("Jack", "Mavis", 21)

j_student_1 = student_1.to_json()
j_student_2 = student_2.to_json(['first_name', 'age'])
j_student_3 = student_2.to_json(['middle_name', 'age'])

print(j_student_1)
print(j_student_2)
print(j_student_3)
