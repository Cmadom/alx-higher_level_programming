#!/usr/bin/python3
# 0-print_list_integer.py

def print_list_integer(my_list=[]):
    for num in my_list:
        print("{:d}".format(num))

my_list = [10, 20, 30, 40, 50]
print_list_integer(my_list)
