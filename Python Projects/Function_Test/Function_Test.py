def test_func_input_num(input_num):
    if input_num > 999:
        return "Number too big!"
    else:
        return input_num


def test_func(num, expo, text_str):
    return "{}: {}".format(text_str, str(num ** expo))


number_input_str = input("Number: ")
number_input_int = int(number_input_str)

returned_num = test_func_input_num(number_input_int)

print(returned_num)

expo_input_str = input("Exponential: ")
expo_input_int = int(expo_input_str)

text_input_str = input("Text: ")


print(test_func(returned_num, expo_input_int, text_input_str))
