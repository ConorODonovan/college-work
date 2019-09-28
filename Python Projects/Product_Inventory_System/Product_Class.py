'''
Product Class
Has price, id, and quantity to hand
'''


class Product:

    def __init__(self, identifier, price, quantity):
        self.product_id = identifier
        self.product_price = price
        self.product_quantity = quantity

    def __str__(self):
        return "Product: {}\n" \
               "Price: €{}\n" \
               "Quantity: {}".format(self.product_id, self.product_price, self.product_quantity)

    def add_product(self, quantity_to_add):
        self.product_quantity += quantity_to_add
        print("{} {}s have been added to stock".format(quantity_to_add, self.product_id))

    def remove_product(self, quantity_to_remove):
        if self.product_quantity > 0:
            if self.product_quantity >= quantity_to_remove:
                self.product_quantity -= quantity_to_remove
                print("{} {}s have been remove stock".format(quantity_to_remove, self.product_id.lower()))
                print("Current {} stock levels are {}".format(self.product_id.lower(), self.product_quantity))
            else:
                print("{} stock levels insufficient".format(self.product_id))
        else:
            print("{} stock levels at zero".format(self.product_id))

    def change_price(self):
        pass
