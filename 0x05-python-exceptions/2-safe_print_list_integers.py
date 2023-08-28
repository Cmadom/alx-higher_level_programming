#!/usr/bin/python3

def safe_print_list_integers(my_list=[], x=0):
    printed_integers = 0
    try:
        for element in my_list:
            try:
                if printed_integers < x:
                    print("{:d}".format(element), end=' ')
                    printed_integers += 1
            except:
                pass
            except:
                pass

            print()
            return printed_integers
