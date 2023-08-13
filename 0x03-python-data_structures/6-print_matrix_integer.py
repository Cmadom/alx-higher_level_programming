#!/usr/bin/python3
#6-print_matrix_integer.py

def print_matrix_integer(matrix=[[]]):
    for row in matrix:
        for i, num in enumerate(row):
            if i != 0:
                print(" ", end="")
            print("{:d}".format(num), end="")
        print()
