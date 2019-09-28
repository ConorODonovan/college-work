'''
Testing out class creation
Conor O'Donovan
DT249
'''


class TestString:

    def __init__(self, my_string1, my_string2, my_string3):
        self.my_string1 = my_string1
        self.my_string2 = my_string2
        self.my_string3 = my_string3

    def __str__(self):
        return "{}{}{}".format(self.my_string1, self.my_string2, self.my_string3)

    def get_initials(self):
        return "{}{}{}".format(self.my_string1[0], self.my_string2[0], self.my_string3[0])


class StringSub(TestString):
    def get_initials(self):
        return("Actually, am doge")


class Palindrome:

    def __init__(self, my_string):
        self.my_string = my_string

    def __str__(self):
        return "{}".format(self.my_string)

    def reverse(self):
        return self.my_string[::-1]

    def isPalindrome(self):
        if self.my_string == self.my_string[::-1]:
            return True
        else:
            return False


test_str = Palindrome("Conor")
test_str_2 = Palindrome("navan")
print(test_str.reverse())

if test_str_2.isPalindrome():
    print("True")
else:
    print("False")


sub_str = StringSub("Conor ","O' ","Donovan")
print(sub_str)