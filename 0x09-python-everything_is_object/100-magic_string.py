#!/usr/bin/python3

def magic_string():
    if not hasattr(magic_string, 'counter'):
        magic_string.counter = 0
    else:
        magic_string.counter += 1
    return "BestSchool" + ", BestSchool" * magic_string.counter
