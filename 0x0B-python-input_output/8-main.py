#!/usr/bin/python3
MyClass = __import__('8-my_class').MyClass
class_to_json = __import__('8-class_to_json').class_to_json

m = MyClass("Clifford")
m.number = 10
print(type(m))
print(m)

mj = class_to_json(m)
print(type(mj))
print(mj)
