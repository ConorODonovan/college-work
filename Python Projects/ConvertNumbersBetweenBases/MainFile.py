# Get input as string: Number to convert
# Get input as string: Base number is currently in
# Get input as string: Base to convert to
# Set up extra characters for Base 11+
# Catch initial input errors

# Define allowed characters for number entry - this allows us to use up to Base 16 (Hexadecimal)
# Lower-case a-f also included to allow for wider range of user input
allowed_numbers = ["0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F", "a", "b", "c", "d,",
                   "e", "f"]

# Get our initial number to convert as an input
input_number_str = input("Please enter a number: ")

input_number_characters = list(input_number_str)



input_number_len = len(input_number_str)

# Catch errors with number input
i = 0

while i < input_number_len:
    if input_number_characters[i] not in allowed_numbers:
        print("Error - not a valid number!")
        quit()
    else:
        i = i + 1

# Get the Base we wish to convert to as an input
input_base_str = input("Please enter the Base of the number: ")

try:
    input_base_int = int(input_base_str)
except:
    print("Base is invalid or greater than 16!")

output_base_str = input("Please enter the Base to convert to: ")


i = 0
converted_number = 0

if input_base_str == "2":
    while i < input_number_len:
        input_char_calculated = int(input_number_characters[i]) * (2 ** (input_number_len - (i + 1)))
        converted_number = converted_number + input_char_calculated

        print(i)

        i = i + 1

if output_base_str = "10"
    print(converted_number)