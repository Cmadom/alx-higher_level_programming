#!/usr/bin/python3

def list_division(my_list_1, my_list_2, list_length):
    result_list = []

    try:
        for i in range(list_length):
            try:
                if i >= len(my_list_1) or i >= len(my_list_2):
                    raise IndexError("out of range")

                value_1 = my_list_1[i]
                value_2 = my_list_2[i]

                try:
                    division_result = value_1 / value_2
                except ZeroDivisionError:
                    division_result = 0
                    print("division by 0")
                except TypeError:
                    division_result = 0
                    print("wrong type")

                result_list.append(division_result)
            except IndexError:
                print("out of range")
                result_list.append(0)
        except:
            pass

        return result_list
