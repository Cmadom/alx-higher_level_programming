#!/usr/bin/python3

def raise_exception():
    value = "string"
    try:
        integer_value = int(value)
    except ValueError:
        raise TypeError("Type exception")
