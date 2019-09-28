def base_10_to_base_n(str,str):
    input_number_int = int(input_number_str)
    my_integer_divided = my_integer

    my_integer_remainder = 0
    my_binary_result = ""

    if my_integer == 0:
        my_binary_result = 0
    elif my_integer < 0:
        print("Error: Integer entered is less than zero!")
    else:
        while my_integer_divided > 0:
            my_integer_remainder = my_integer_divided % 2
            my_integer_divided = my_integer_divided // 2
            my_binary_result = str(my_integer_remainder) + my_binary_result

    print(my_integer_string, "Base 10 converted to Binary is:", my_binary_result)