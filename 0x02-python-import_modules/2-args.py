#!/usr/bin/python3

if __name__ == "__main__":
    import sys
    
    argv_len = len(sys.argv) - 1
    args = sys.argv[1:]
    
    if argv_len == 0:
        print("0 arguments.")
    elif argv_len == 1:
        print("1 argument:")
    else:
        print("{} arguments:".format(argv_len))
    
    for idx, arg in enumerate(args):
        print("{}: {}".format(idx + 1, arg))
