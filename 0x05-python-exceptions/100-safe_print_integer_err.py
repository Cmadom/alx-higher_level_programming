#!/usr/bin/python3

import sys

def safe_print_integer_err(value):
    try:
        print("{:d}".format(value))
        return True
    except:
        error_message = sys.exc_info()[1]
        print("Exception:", error_message, file=sys.stderr)
        return False
