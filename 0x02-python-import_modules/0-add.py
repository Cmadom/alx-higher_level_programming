#!/usr/bin/python3

def add(a, b):
    return a + b

from add_0 import add

def main():
    a = 1
    b = 2
    result = add(a, b)
    print(f"{a} + {b} = {result}")

if __name__ == "__main__":
    main()
