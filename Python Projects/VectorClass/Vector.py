import math


class Vector:
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y

    def __str__(self):
        return "(" + str(self.x) + "," + str(self.y) + ")"

    def __add__(self, vect):
        new_vector = Vector(self.x + vect.x, self.y + vect.y)
        return new_vector

    def __sub__(self, vect):
        new_vector = Vector(self.x - vect.x, self.y - vect.y)
        return new_vector

    def __mul__(self, other):
        if isinstance(other, int):
            return (self.x * other) + (self.y * other)
        else:
            return (self.x * other.x) + (self.y * other.y)

    def magnitude(self):
        return math.sqrt((self.x * self.x) + (self.y * self.y))


if __name__ == "__main__":
    my_vector1 = Vector(3, 4)
    my_vector2 = Vector(2, 2)

    my_vector3 = my_vector1 + my_vector2
    print(my_vector3)

    my_vector4 = my_vector1 - my_vector2
    print(my_vector4)

    a = my_vector1 * my_vector2
    print(a)

    b = my_vector1 * 10
    print(b)

    print(my_vector1.magnitude())
    print(my_vector2.magnitude())
    print(my_vector3.magnitude())
    print(my_vector4.magnitude())
