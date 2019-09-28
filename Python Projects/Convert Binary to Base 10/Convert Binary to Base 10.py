# 1. Input binary number
# 2. Calculate number of digits in string
# 3. Perform calculations on each variable
# 4. Add all variables together
# 5. Print results

input_binary = input("Input number in binary: ")    # Prompts user to input number in binary format
input_binary_length = len(input_binary)             # Gets number of digits in number input
base_10_result = 0                                  # Initialising variable for end result (number in base 10)
error_message = False                               # Initialising variable which determines if input is valid

# You can uncomment the below line for debugging purposes
# print(input_binary_length)

# Initialising variable for loop counter before loop starts

# Loops through each digit of the input binary number, performing the necessary calculations on each
for a in input_binary:  # The code will loop the same amount of times as number of digits in the input binary number

    if int(a) > 1:
        error_message = True
    else:
        b = int(a) * (2 ** (input_binary_length - c))

        # The next three lines can be uncommented for debugging purposes
        # print(a)
        # print(b)
        # print(c)

        c = c + 1
        base_10_result = base_10_result + b

# Conditional statement to determine result based on if the input was a valid binary number
if error_message is False:
    # Display number in base 10
    print(base_10_result)
else:
    print("This is not a binary number! Please enter a binary number.")