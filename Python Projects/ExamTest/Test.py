class Animal(object):
    population = 0

    def __init__(self, name):
        self.name = name

    def __str__(self):
        return "I am an instance of {}. My name is {}. ".format(self.__class__, self.name)

    def __repr__(self):
        return self.__str__()

    def make_sound(self):
        return "{} is trying to speak but its method doesn’t do much".format(self.name)


class Dog(Animal):

    def __init__(self, name, breed):
        super().__init__(name)
        self.breed = breed

    def __str__(self):
        print(super().__str__())
        return "My breed is {}".format(self.breed)

    def make_sound(self):
        return "{} says woof!".format(self.name)


class Cat(Animal):
    pass


animals = {"Felix": ("Cat", None), "Fido": ("Dog", "mutt"), "Charlie": ("Dog", "spaniel")}
animals_list = []
for k in animals:
    if animals[k][1]:
        animals_list.append(globals()[animals[k][0]](k, animals[k][1]))
    else:
        animals_list.append(globals()[animals[k][0]](k))
    Animal.population += 1

for animal in animals_list:
    print(animal)
    print(animal.make_sound())

print("Animal population is {}".format(Animal.population))
